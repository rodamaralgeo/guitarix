/*
 * Copyright (C) 2012 Hermann Meyer, Andreas Degert, Pete Shorthose
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * --------------------------------------------------------------------------
 */


#include <string>
#include <iostream>

#include <gtkmm.h>
#include "gxamp.h"
#include "widget.h"

#include <lv2.h>
#include <lv2/lv2plug.in/ns/extensions/ui/ui.h>

using namespace std;

struct GXPluginGUI{
    Widget* widget;
    GXPluginGUI () {}
} ;

static GtkWidget* make_gui(GXPluginGUI *self) {
   // Gtk::Main::init_gtkmm_internals();
    gtk_rc_parse_string ("style \"gx_head_dark-paintbox\"\n"
                             " { \n"
                             "    GxPaintBox::skin-gradient = {\n"
                             "    { 65536, 0, 0, 13107, 52428 },\n"
                             "    { 52428, 0, 0, 0, 52428 },\n"
                             "    { 13107, 0, 0, 13107, 13107 }}\n"
                             "    GxPaintBox::box-gradient = {\n"
                             "    { 0, 19661, 19661, 19661, 13107 },\n"
                             "    { 22768, 80, 83, 80, 23107 },\n"
                             "    { 52428, 8, 8, 80, 33107 },\n"
                             "    { 65536, 4, 4, 4, 42428 }}\n"
                             "    GxPaintBox::icon-set =9\n"
                             " }\n"
                             "\n"
                             "class \"*GxPaintBox\" style \"gx_head_dark-paintbox\"");
  
    GtkWidget* container = gtk_vbox_new(FALSE, 2);
    self->widget = new Widget();
    GtkWidget* cWidget = (GtkWidget*)self->widget->gobj();
    gtk_container_add( (GtkContainer*)container, cWidget );
    
    return container;
}


static LV2UI_Handle instantiate(const struct _LV2UI_Descriptor * descriptor,
                const char * plugin_uri,
                const char * bundle_path,
                LV2UI_Write_Function write_function,
                LV2UI_Controller controller,
                LV2UI_Widget * widget,
                const LV2_Feature * const * features) {

    if (strcmp(plugin_uri, GXPLUGIN_URI) != 0) {
        fprintf(stderr, "SORCER_URI error: this GUI does not support plugin with URI %s\n", plugin_uri);
        return NULL;
    }
    
    GXPluginGUI* self = new GXPluginGUI;
    if (self == NULL) return NULL;
    *widget = (LV2UI_Widget)make_gui(self);
    self->widget->controller = controller;
    self->widget->write_function = write_function;
    return (LV2UI_Handle)self;
}

static void cleanup(LV2UI_Handle ui) {
    GXPluginGUI *pluginGui = (GXPluginGUI *) ui;
    delete pluginGui->widget;
    delete pluginGui;
}

static void port_event(LV2UI_Handle ui,
               uint32_t port_index,
               uint32_t buffer_size,
               uint32_t format,
               const void * buffer)
{
    GXPluginGUI *self = (GXPluginGUI *) ui;
    self->widget->set_value_static( port_index, buffer_size, format, buffer, self->widget);
    //cout << "Port event on index " << port_index << "  Format is " << format << endl;
    
/*
    if ( format == 0 )
    {
      float value =  *(float *)buffer;
      switch ( port_index )
      {
        case 0:
            self->widget->mastergain = value;
            break;
        case 1:
            self->widget->pregain = value;
            break;
        case 2:
            self->widget->wet_dry = value;
            break;
        case 3:
            self->widget->drive = value;
            break;
        case 4:
            self->widget->mid = value;
            break;
        case 5:
            self->widget->bass = value;
            break;
        case 6:
            self->widget->treble = value;
            break;
      }
    }
    else
    {
      LV2_ATOM_SEQUENCE_FOREACH( (LV2_Atom_Sequence*)buffer, ev)
      {
        //self->frame_offset = ev->time.frames;
        
        if (ev->body.type == self->guiState->uris.midiEvent)
        {
          cout << "Refractor GUI got MIDI event!" << endl;
          //uint8_t* const data = (uint8_t* const)(ev + 1);
        }
      }
    }*/
    
    
    return;
}

static LV2UI_Descriptor descriptors[] = {
    {GXPLUGIN_UI_URI, instantiate, cleanup, port_event, NULL}
};

const LV2UI_Descriptor * lv2ui_descriptor(uint32_t index) {
    //printf("lv2ui_descriptor(%u) called\n", (unsigned int)index); 
    if (index >= sizeof(descriptors) / sizeof(descriptors[0])) {
        return NULL;
    }
    return descriptors + index;
}
