// generated from file '../src/faust/drumseq.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)

#define FAUSTFLOAT float

namespace drumseq {

class Dsp {
private:
	int fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	int 	iVec0[2];
	double 	fRec0[2];
	FAUSTFLOAT 	fslider1;
	double 	fRec1[2];
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	FAUSTFLOAT 	fcheckbox0;
	FAUSTFLOAT	*fcheckbox0_;
	double 	fVec1[2];
	double 	fRec4[2];
	int 	iRec2[2];
	double 	fConst3;
	double 	fConst4;
	double 	fRec3[2];
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fRec5[2];
	double 	fConst8;
	double 	fRec6[2];
	double 	fVec2[2];
	int 	iRec7[2];
	double 	fConst9;
	double 	fRec8[2];
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fRec9[2];
	double 	fConst13;
	double 	fRec10[2];
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	int 	iRec13[2];
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fRec12[2];
	double 	fRec11[3];
	int 	iRec14[2];
	double 	fConst22;
	double 	fRec15[2];
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fRec17[2];
	double 	fRec16[3];
	double 	fConst33;
	int 	iRec18[2];
	double 	fConst34;
	double 	fRec19[2];
	FAUSTFLOAT 	fslider2;
	double 	fRec20[2];
	double 	fConst35;
	FAUSTFLOAT 	fcheckbox1;
	FAUSTFLOAT	*fcheckbox1_;
	double 	fVec3[2];
	double 	fRec21[2];
	double 	fConst36;
	double 	fConst37;
	double 	fRec26[2];
	double 	fVec4[2];
	int 	IOTA;
	double 	fVec5[64];
	double 	fConst38;
	int 	iConst39;
	int 	iConst40;
	int 	iConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fRec27[2];
	double 	fConst47;
	double 	fRec28[2];
	double 	fConst48;
	double 	fConst49;
	double 	fRec24[2];
	double 	fRec25[2];
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fRec31[2];
	double 	fConst53;
	double 	fRec32[2];
	double 	fConst54;
	double 	fRec29[2];
	double 	fRec30[2];
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fRec35[2];
	double 	fConst58;
	double 	fRec36[2];
	double 	fConst59;
	double 	fRec33[2];
	double 	fRec34[2];
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fRec39[2];
	double 	fConst63;
	double 	fRec40[2];
	double 	fConst64;
	double 	fRec37[2];
	double 	fRec38[2];
	double 	fVec6[2];
	double 	fRec23[2];
	double 	fRec22[3];
	double 	fConst65;
	double 	fRec43[2];
	int 	iRec41[2];
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fRec42[2];
	double 	fConst69;
	double 	fRec45[2];
	double 	fConst70;
	double 	fConst71;
	double 	fRec44[3];
	int 	iRec46[2];
	double 	fConst72;
	double 	fRec47[2];
	FAUSTFLOAT 	fslider3;
	double 	fRec48[2];
	double 	fConst73;
	FAUSTFLOAT 	fcheckbox2;
	FAUSTFLOAT	*fcheckbox2_;
	double 	fVec7[2];
	double 	fRec49[2];
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fRec53[2];
	double 	fRec52[3];
	double 	fConst84;
	double 	fVec8[2];
	double 	fRec51[2];
	double 	fRec50[3];
	double 	fRec56[2];
	int 	iRec54[2];
	double 	fConst85;
	double 	fRec55[2];
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fRec61[2];
	double 	fConst94;
	double 	fRec62[2];
	double 	fConst95;
	double 	fRec63[2];
	double 	fRec59[2];
	double 	fRec60[2];
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fRec58[2];
	double 	fRec57[3];
	double 	fRec66[2];
	int 	iRec64[2];
	double 	fConst99;
	double 	fRec65[2];
	FAUSTFLOAT 	fslider4;
	double 	fRec67[2];
	FAUSTFLOAT 	fcheckbox3;
	FAUSTFLOAT	*fcheckbox3_;
	double 	fVec9[2];
	double 	fRec70[2];
	int 	iRec68[2];
	double 	fRec69[2];
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fRec71[2];
	double 	fConst103;
	double 	fRec72[2];
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fRec73[2];
	double 	fConst107;
	double 	fRec74[2];
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fRec77[2];
	double 	fConst111;
	double 	fRec78[2];
	double 	fConst112;
	double 	fRec79[2];
	double 	fConst113;
	double 	fVec10[2];
	double 	fConst114;
	double 	fRec75[2];
	double 	fRec76[2];
	int 	iRec80[2];
	double 	fRec81[2];

public:
	void clear_state_f();
	void init(unsigned int samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);
	Dsp();
	~Dsp();
};

} // end namespace drumseq
