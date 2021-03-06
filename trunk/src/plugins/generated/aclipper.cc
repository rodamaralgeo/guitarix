// generated from file '../src/plugins/aclipper.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"
#include "clipping.h"

namespace pluginlib {
namespace aclipper {

class Dsp: public PluginDef {
private:
	gx_resample::FixedRateResampler smp;
	int samplingFreq;
	int fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fRec4[3];
	double 	fConst13;
	double 	fConst14;
	double 	fVec0[2];
	FAUSTFLOAT 	fslider1;
	double 	fRec6[2];
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fRec5[2];
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fRec3[2];
	double 	fConst23;
	double 	fConst24;
	double 	fRec2[3];
	double 	fConst25;
	double 	fRec1[2];
	FAUSTFLOAT 	fslider2;
	double 	fRec7[2];

	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	static const char *glade_def;
	void init(unsigned int samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int samplingFreq, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef*);
	static int register_params_static(const ParamReg& reg);
	static void del_instance(PluginDef *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginDef() {
	version = PLUGINDEF_VERSION;
	flags = 0;
	id = "aclipper";
	name = N_("Rat");
	groups = 0;
	description = ""; // description (tooltip)
	category = N_("Distortion");       // category
	shortname = "";     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = load_ui_f_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int RsamplingFreq)
{
	samplingFreq = 96000;
	smp.setup(RsamplingFreq, samplingFreq);
	fSamplingFreq = samplingFreq;
	fConst0 = min(1.92e+05, max(1.0, (double)fSamplingFreq));
	fConst1 = double(fConst0);
	fConst2 = (4.3384046341364e-10 * fConst1);
	fConst3 = (3.41041934946762e-08 + (fConst1 * (fConst2 - 8.99037897457717e-09)));
	fConst4 = faustpower<2>(fConst1);
	fConst5 = (6.82083869893523e-08 - (8.6768092682728e-10 * fConst4));
	fConst6 = (3.41041934946762e-08 + (fConst1 * (8.99037897457717e-09 + fConst2)));
	fConst7 = (1.0 / fConst6);
	fConst8 = (3.64865447573811e-11 * fConst1);
	fConst9 = (0.000414619826788421 + (fConst1 * (fConst8 - 1.9073341271921e-05)));
	fConst10 = (0.000829239653576842 - (7.29730895147621e-11 * fConst4));
	fConst11 = (0.000414619826788421 + (fConst1 * (1.9073341271921e-05 + fConst8)));
	fConst12 = (1.0 / fConst11);
	fConst13 = (1.82432723786905e-05 * fConst1);
	fConst14 = (0 - fConst13);
	fConst15 = (9.4e-08 * fConst0);
	fConst16 = (0.00044179999999999995 * fConst0);
	fConst17 = (1 + fConst16);
	fConst18 = (1.0 / (fConst17 * fConst11));
	fConst19 = (0 - ((1 - fConst16) / fConst17));
	fConst20 = (2.08332871602678e-05 * fConst1);
	fConst21 = (2.21630714470934e-06 + fConst20);
	fConst22 = ((2.21630714470934e-06 - fConst20) / fConst21);
	fConst23 = (0 - fConst20);
	fConst24 = (1.0 / fConst21);
	fConst25 = (fConst4 / fConst6);
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	FAUSTFLOAT buf[smp.max_out_count(count)];
	int ReCount = smp.up(count, input0, buf);
	double 	fSlow0 = (0.007000000000000006 * (1.0 - double(fslider0)));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * pow(10,(0.05 * double(fslider2))));
	for (int i=0; i<ReCount; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = (3.91923990498812e-05 * fRec0[0]);
		double fTemp1 = (0.0593824228028504 + (fConst1 * (3.91923990498812e-05 - fTemp0)));
		fRec4[0] = ((double)buf[i] - (fConst12 * ((fConst10 * fRec4[1]) + (fConst9 * fRec4[2]))));
		double fTemp2 = ((fConst13 * fRec4[0]) + ((0.000829239653576842 * fRec4[1]) + (fConst14 * fRec4[2])));
		fVec0[0] = fTemp2;
		double fTemp3 = (fConst12 * fVec0[0]);
		fRec6[0] = (fSlow1 + (0.993 * fRec6[1]));
		double fTemp4 = (fConst15 * (5700 + (500000 * fRec6[0])));
		fRec5[0] = ((fConst19 * fRec5[1]) + (fConst18 * (((1 + fTemp4) * fVec0[0]) + ((1 - fTemp4) * fVec0[1]))));
		fRec3[0] = (0 - (((fConst22 * fRec3[1]) + opamp((fRec5[0] - fTemp3))) - fTemp3));
		fRec2[0] = ((fConst24 * ((fConst23 * fRec3[1]) + (fConst20 * fRec3[0]))) - (fConst7 * ((fConst5 * fRec2[1]) + (fConst3 * fRec2[2]))));
		double fTemp5 = (0.5 + (0.75 * fRec6[0]));
		fRec1[0] = (asymclip3((fConst25 * ((1.85360131346578e-09 * (fRec2[1] * fTemp5)) + ((0 - (9.26800656732889e-10 * fTemp5)) * (fRec2[2] + fRec2[0]))))) - ((fRec1[1] * (0.0593824228028504 + (fConst1 * (fTemp0 - 3.91923990498812e-05)))) / fTemp1));
		fRec7[0] = (fSlow2 + (0.993 * fRec7[1]));
		buf[i] = (FAUSTFLOAT)(0.0593824228028504 * ((fRec7[0] * (fRec1[1] + fRec1[0])) / fTemp1));
		// post processing
		fRec7[1] = fRec7[0];
		fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec3[1] = fRec3[0];
		fRec5[1] = fRec5[0];
		fRec6[1] = fRec6[0];
		fVec0[1] = fVec0[0];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec0[1] = fRec0[0];
	}
	smp.down(buf, output0);
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerVar("aclipper.drive",N_("Drive"),"S","",&fslider1, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("aclipper.level",N_("Level"),"S","",&fslider2, -2.0, -2e+01, 12.0, 0.1);
	reg.registerVar("aclipper.tone",N_("Tone"),"S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

const char *Dsp::glade_def = "\
<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<interface>\n\
  <!-- interface-requires gxwidgets 0.0 -->\n\
  <requires lib=\"gtk+\" version=\"2.20\"/>\n\
  <!-- interface-naming-policy project-wide -->\n\
  <object class=\"GtkWindow\" id=\"window1\">\n\
    <property name=\"can_focus\">False</property>\n\
    <child>\n\
      <object class=\"GtkVBox\" id=\"vbox1\">\n\
        <property name=\"visible\">True</property>\n\
        <property name=\"can_focus\">False</property>\n\
        <child>\n\
          <object class=\"GtkHBox\" id=\"rackbox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GtkHBox\" id=\"hbox1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"spacing\">10</property>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox2\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label1:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">aclipper.drive</property>\n\
                        <property name=\"label_ref\">label1:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">0</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox3\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label2:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxMidKnob\" id=\"gxbigknob2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">aclipper.level</property>\n\
                        <property name=\"label_ref\">label2:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">1</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox4\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label3:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob3\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">aclipper.tone</property>\n\
                        <property name=\"label_ref\">label3:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">2</property>\n\
                  </packing>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"pack_type\">end</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">False</property>\n\
            <property name=\"position\">0</property>\n\
          </packing>\n\
        </child>\n\
        <child>\n\
          <object class=\"GtkHBox\" id=\"minibox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GxHSlider\" id=\"gxhslider1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">True</property>\n\
                <property name=\"receives_default\">True</property>\n\
                <property name=\"round_digits\">0</property>\n\
                <property name=\"var_id\">aclipper.drive</property>\n\
                <property name=\"show_value\">False</property>\n\
                <property name=\"value_position\">right</property>\n\
                <property name=\"value_xalign\">0.52000000000000002</property>\n\
                <property name=\"label_ref\">label0:rack_label</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkLabel\" id=\"label0:rack_label\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"xalign\">0</property>\n\
                <property name=\"label\" translatable=\"yes\">Drive</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">1</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">1</property>\n\
          </packing>\n\
        </child>\n\
      </object>\n\
    </child>\n\
  </object>\n\
</interface>\n\
";

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_GLADE) {
        b.load_glade(glade_def);
        return 0;
    }
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("aclipper" "." p)
b.openHorizontalhideBox("");
b.create_master_slider(PARAM("drive"), "drive");
b.closeBox();
b.openHorizontalBox("");
b.insertSpacer();
b.create_small_rackknobr(PARAM("drive"), "Distortion");
b.create_small_rackknob(PARAM("tone"), "Filter");
b.create_small_rackknob(PARAM("level"), "Volume");
b.insertSpacer();
b.closeBox();

#undef PARAM
        return 0;
    }
	return -1;
}

int Dsp::load_ui_f_static(const UiBuilder& b, int form)
{
	return static_cast<Dsp*>(b.plugin)->load_ui_f(b, form);
}
PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace aclipper
} // end namespace pluginlib
