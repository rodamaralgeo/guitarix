/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "GxSmallKnobR.h"
#include <gtk/gtkprivate.h>

#define P_(s) (s)   // FIXME -> gettext

G_DEFINE_TYPE(GxSmallKnobR, gx_small_knob_r, GX_TYPE_KNOB);

static void gx_small_knob_r_class_init(GxSmallKnobRClass *klass)
{
	GtkWidgetClass *widget_class = (GtkWidgetClass*) klass;
	gtk_widget_class_install_style_property(
		widget_class,
		g_param_spec_int("arc-inset",P_("inset of arch"),
		                   P_("Inset of the arc around the knob"),
		                 0, 100, 0, GParamFlags(GTK_PARAM_READABLE)));
	klass->parent_class.stock_id = "smallknobr";
}

static void gx_small_knob_r_init(GxSmallKnobR *small_knob)
{
}