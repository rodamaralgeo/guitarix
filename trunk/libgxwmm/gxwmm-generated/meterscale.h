// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GXWMM_METERSCALE_H
#define _GXWMM_METERSCALE_H


#include <glibmm.h>

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

#include <gtkmm/box.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GxMeterScale GxMeterScale;
typedef struct _GxMeterScaleClass GxMeterScaleClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gxw
{ class MeterScale_Class; } // namespace Gxw
namespace Gxw {

/** @addtogroup gxwmmEnums gxwmm Enums and Flags */

/**
 * @ingroup gxwmmEnums
 */
enum TickPosition
{
  TICK_LEFT,
  TICK_RIGHT,
  TICK_BOTH,
  TICK_BELOW
};

} // namespace Gxw


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gxw::TickPosition> : public Glib::Value_Enum<Gxw::TickPosition>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gxw
{


class MeterScale: public Gtk::Widget {
	public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MeterScale CppObjectType;
  typedef MeterScale_Class CppClassType;
  typedef GxMeterScale BaseObjectType;
  typedef GxMeterScaleClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~MeterScale();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class MeterScale_Class;
  static CppClassType meterscale_class_;

  // noncopyable
  MeterScale(const MeterScale&);
  MeterScale& operator=(const MeterScale&);

protected:
  explicit MeterScale(const Glib::ConstructParams& construct_params);
  explicit MeterScale(GxMeterScale* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GxMeterScale*       gobj()       { return reinterpret_cast<GxMeterScale*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GxMeterScale* gobj() const { return reinterpret_cast<GxMeterScale*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

	public:
	MeterScale();
	
  void add_mark(double p1, const Glib::ustring& p2);
	
  void clear_marks();
	#ifdef GLIBMM_PROPERTIES_ENABLED
/** Position of the tick relativ to the tick text.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<TickPosition> property_tick_pos() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Position of the tick relativ to the tick text.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<TickPosition> property_tick_pos() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} // namespace Gxw


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gxw::MeterScale
   */
  Gxw::MeterScale* wrap(GxMeterScale* object, bool take_copy = false);
} //namespace Glib


#endif /* _GXWMM_METERSCALE_H */

