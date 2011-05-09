namespace gxamp10 {
// generated from file '../src/faust/gxamp10.dsp'

FAUSTFLOAT&	fslider0 = get_alias("amp2.stage2.gain1");
double 	fRec0[2];
double 	fConst0;
double 	fConst1;
double 	fConst2;
double 	fConst3;
double 	fConst4;
double 	fConst5;
double 	fVec0[2];
double 	fConst6;
double 	fRec3[2];
double 	fConst7;
double 	fConst8;
double 	fConst9;
FAUSTFLOAT&	fslider1 = get_alias("amp2.stage1.Pregain");
double 	fRec8[2];
double 	fConst10;
double 	fConst11;
double 	fConst12;
double 	fConst13;
double 	fConst14;
double 	fConst15;
double 	fConst16;
double 	fConst17;
double 	fConst18;
double 	fConst19;
double 	fConst20;
double 	fConst21;
double 	fConst22;
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
double 	fConst33;
double 	fConst34;
double 	fConst35;
double 	fConst36;
double 	fRec17[3];
double 	fVec1[2];
double 	fConst37;
double 	fConst38;
double 	fRec16[2];
double 	fConst39;
double 	fConst40;
double 	fRec15[2];
double 	fRec14[3];
double 	fConst41;
double 	fRec13[3];
double 	fRec12[3];
FAUSTFLOAT&	fslider2 = get_alias("gxdistortion.drive");
double 	fConst42;
double 	fConst43;
double 	fConst44;
double 	fConst45;
double 	fConst46;
double 	fRec22[2];
double 	fRec21[3];
double 	fVec2[2];
double 	fConst47;
double 	fConst48;
double 	fRec20[2];
double 	fRec19[3];
double 	fConst49;
double 	fRec18[3];
double 	fConst50;
double 	fConst51;
double 	fConst52;
double 	fConst53;
double 	fRec26[2];
double 	fRec25[3];
double 	fVec3[2];
double 	fConst54;
double 	fConst55;
double 	fRec24[2];
double 	fRec23[3];
double 	fConst56;
double 	fRec28[2];
double 	fRec27[3];
double 	fVec4[2];
double 	fConst57;
double 	fRec11[2];
double 	fConst58;
double 	fConst59;
double 	fConst60;
double 	fVec5[2];
double 	fConst61;
double 	fRec29[2];
double 	fRec10[2];
double 	fConst62;
double 	fRec9[2];
double 	fVec6[2];
double 	fConst63;
double 	fRec7[2];
double 	fConst64;
double 	fConst65;
double 	fConst66;
double 	fVec7[2];
double 	fConst67;
double 	fRec30[2];
double 	fRec6[2];
double 	fRec5[2];
double 	fVec8[2];
double 	fRec4[2];
double 	fRec2[2];
double 	fRec1[2];
double 	fVec9[2];
double 	fRec33[2];
double 	fRec32[2];
double 	fRec31[2];
int	fSamplingFreq;

void init(int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	fConst0 = (1.0 / tan((97.38937226128358 / fSamplingFreq)));
	fConst1 = (1 + fConst0);
	fConst2 = (0 - ((1 - fConst0) / fConst1));
	fConst3 = (1.0 / tan((609.4689747964198 / fSamplingFreq)));
	fConst4 = (1 + fConst3);
	fConst5 = (0 - ((1 - fConst3) / fConst4));
	for (int i=0; i<2; i++) fVec0[i] = 0;
	fConst6 = (0.0082 / fConst4);
	for (int i=0; i<2; i++) fRec3[i] = 0;
	fConst7 = (1.0 / tan((20517.741620594938 / fSamplingFreq)));
	fConst8 = (1 + fConst7);
	fConst9 = (0 - ((1 - fConst7) / fConst8));
	for (int i=0; i<2; i++) fRec8[i] = 0;
	fConst10 = tan((942.4777960769379 / fSamplingFreq));
	fConst11 = (1.0 / faustpower<2>(fConst10));
	fConst12 = (2 * (1 - fConst11));
	fConst13 = (1.0 / fConst10);
	fConst14 = (1 + ((fConst13 - 1.0) / fConst10));
	fConst15 = (1.0 / (1 + ((1.0 + fConst13) / fConst10)));
	fConst16 = tan((3769.9111843077517 / fSamplingFreq));
	fConst17 = (1.0 / faustpower<2>(fConst16));
	fConst18 = (2 * (1 - fConst17));
	fConst19 = (1.0 / fConst16);
	fConst20 = (1 + ((fConst19 - 1.0) / fConst16));
	fConst21 = (1.0 / (1 + ((1.0 + fConst19) / fConst16)));
	fConst22 = tan((10053.096491487338 / fSamplingFreq));
	fConst23 = (1.0 / faustpower<2>(fConst22));
	fConst24 = (2 * (1 - fConst23));
	fConst25 = (1.0 / fConst22);
	fConst26 = (1 + ((fConst25 - 1.0000000000000004) / fConst22));
	fConst27 = (1 + ((1.0000000000000004 + fConst25) / fConst22));
	fConst28 = (1.0 / fConst27);
	fConst29 = (1 + fConst25);
	fConst30 = (0 - ((1 - fConst25) / fConst29));
	fConst31 = tan((47123.8898038469 / fSamplingFreq));
	fConst32 = (2 * (1 - (1.0 / faustpower<2>(fConst31))));
	fConst33 = (1.0 / fConst31);
	fConst34 = (1 + ((fConst33 - 1.414213562373095) / fConst31));
	fConst35 = (1 + ((1.414213562373095 + fConst33) / fConst31));
	fConst36 = (1.0 / fConst35);
	for (int i=0; i<3; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	fConst37 = (0 - fConst0);
	fConst38 = (1.0 / (fConst1 * fConst35));
	for (int i=0; i<2; i++) fRec16[i] = 0;
	fConst39 = (0 - fConst25);
	fConst40 = (1.0 / fConst29);
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<3; i++) fRec14[i] = 0;
	fConst41 = (2 * (0 - fConst23));
	for (int i=0; i<3; i++) fRec13[i] = 0;
	for (int i=0; i<3; i++) fRec12[i] = 0;
	fConst42 = (1 + ((fConst19 - 1.0000000000000004) / fConst16));
	fConst43 = (1 + ((fConst19 + 1.0000000000000004) / fConst16));
	fConst44 = (1.0 / fConst43);
	fConst45 = (1 + fConst19);
	fConst46 = (0 - ((1 - fConst19) / fConst45));
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<3; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	fConst47 = (0 - fConst19);
	fConst48 = (1.0 / (fConst45 * fConst27));
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<3; i++) fRec19[i] = 0;
	fConst49 = (2 * (0 - fConst17));
	for (int i=0; i<3; i++) fRec18[i] = 0;
	fConst50 = (1 + ((fConst13 - 1.0000000000000004) / fConst10));
	fConst51 = (1.0 / (1 + ((fConst13 + 1.0000000000000004) / fConst10)));
	fConst52 = (1 + fConst13);
	fConst53 = (0 - ((1 - fConst13) / fConst52));
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<3; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	fConst54 = (0 - fConst13);
	fConst55 = (1.0 / (fConst52 * fConst43));
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<3; i++) fRec23[i] = 0;
	fConst56 = (2 * (0 - fConst11));
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<3; i++) fRec27[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	fConst57 = (4.0 / fConst8);
	for (int i=0; i<2; i++) fRec11[i] = 0;
	fConst58 = (1.0 / tan((270.1769682087222 / fSamplingFreq)));
	fConst59 = (1 + fConst58);
	fConst60 = (0 - ((1 - fConst58) / fConst59));
	for (int i=0; i<2; i++) fVec5[i] = 0;
	fConst61 = (0.027 / fConst59);
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	fConst62 = (0.05 / fConst1);
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fVec6[i] = 0;
	fConst63 = (1.0 / fConst8);
	for (int i=0; i<2; i++) fRec7[i] = 0;
	fConst64 = (1.0 / tan((414.6902302738527 / fSamplingFreq)));
	fConst65 = (1 + fConst64);
	fConst66 = (0 - ((1 - fConst64) / fConst65));
	for (int i=0; i<2; i++) fVec7[i] = 0;
	fConst67 = (0.015 / fConst65);
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fVec8[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fVec9[i] = 0;
	for (int i=0; i<2; i++) fRec33[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
}

void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = (0.0010000000000000009 * pow(10,(0.05 * fslider1)));
	double 	fSlow2 = fslider2;
	double 	fSlow3 = pow(1e+01,(0.8 * fSlow2));
	double 	fSlow4 = pow(1e+01,(1.2 * fSlow2));
	double 	fSlow5 = (fConst51 * pow(1e+01,(2 * fSlow2)));
	double 	fSlow6 = (fConst51 * pow(1e+01,(0.9 * fSlow2)));
	double 	fSlow7 = (2 * (fSlow2 - 0.5));
	double 	fSlow8 = (1 - max(0, (0 - fSlow7)));
	double 	fSlow9 = (1 - max(0, fSlow7));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
		double fTemp0 = (fRec2[1] - 1.3e+02);
		fVec0[0] = fTemp0;
		fRec3[0] = ((fConst6 * (fVec0[0] + fVec0[1])) + (fConst5 * fRec3[1]));
		fRec8[0] = (fSlow1 + (0.999 * fRec8[1]));
		double fTemp1 = (fConst12 * fRec12[1]);
		double fTemp2 = (fConst18 * fRec13[1]);
		double fTemp3 = (double)input0[i];
		fRec17[0] = (fTemp3 - (fConst36 * ((fConst34 * fRec17[2]) + (fConst32 * fRec17[1]))));
		double fTemp4 = (fRec17[2] + (fRec17[0] + (2 * fRec17[1])));
		fVec1[0] = fTemp4;
		fRec16[0] = ((fConst38 * ((fConst37 * fVec1[1]) + (fConst0 * fVec1[0]))) + (fConst2 * fRec16[1]));
		fRec15[0] = ((fConst40 * ((fConst39 * fRec16[1]) + (fConst25 * fRec16[0]))) + (fConst30 * fRec15[1]));
		fRec14[0] = (fRec15[0] - (fConst28 * ((fConst26 * fRec14[2]) + (fConst24 * fRec14[1]))));
		fRec13[0] = ((fConst28 * (((fConst23 * fRec14[0]) + (fConst41 * fRec14[1])) + (fConst23 * fRec14[2]))) - (fConst21 * ((fConst20 * fRec13[2]) + fTemp2)));
		fRec12[0] = ((fRec13[2] + (fConst21 * (fTemp2 + (fConst20 * fRec13[0])))) - (fConst15 * ((fConst14 * fRec12[2]) + fTemp1)));
		double fTemp5 = max(-1, min(1, (fSlow3 * (fRec12[2] + (fConst15 * (fTemp1 + (fConst14 * fRec12[0])))))));
		double fTemp6 = (fConst12 * fRec18[1]);
		fRec22[0] = ((fConst40 * (fRec16[0] + fRec16[1])) + (fConst30 * fRec22[1]));
		fRec21[0] = (fRec22[0] - (fConst28 * ((fConst26 * fRec21[2]) + (fConst24 * fRec21[1]))));
		double fTemp7 = (fRec21[2] + (fRec21[0] + (2 * fRec21[1])));
		fVec2[0] = fTemp7;
		fRec20[0] = ((fConst48 * ((fConst47 * fVec2[1]) + (fConst19 * fVec2[0]))) + (fConst46 * fRec20[1]));
		fRec19[0] = (fRec20[0] - (fConst44 * ((fConst42 * fRec19[2]) + (fConst18 * fRec19[1]))));
		fRec18[0] = ((fConst44 * (((fConst17 * fRec19[0]) + (fConst49 * fRec19[1])) + (fConst17 * fRec19[2]))) - (fConst15 * ((fConst14 * fRec18[2]) + fTemp6)));
		double fTemp8 = max(-1, min(1, (fSlow4 * (fRec18[2] + (fConst15 * (fTemp6 + (fConst14 * fRec18[0])))))));
		fRec26[0] = ((fConst48 * (fVec2[0] + fVec2[1])) + (fConst46 * fRec26[1]));
		fRec25[0] = (fRec26[0] - (fConst44 * ((fConst42 * fRec25[2]) + (fConst18 * fRec25[1]))));
		double fTemp9 = (fRec25[2] + (fRec25[0] + (2 * fRec25[1])));
		fVec3[0] = fTemp9;
		fRec24[0] = ((fConst55 * ((fConst54 * fVec3[1]) + (fConst13 * fVec3[0]))) + (fConst53 * fRec24[1]));
		fRec23[0] = (fRec24[0] - (fConst51 * ((fConst50 * fRec23[2]) + (fConst12 * fRec23[1]))));
		double fTemp10 = max(-1, min(1, (fSlow5 * (((fConst11 * fRec23[0]) + (fConst56 * fRec23[1])) + (fConst11 * fRec23[2])))));
		fRec28[0] = ((fConst55 * (fVec3[0] + fVec3[1])) + (fConst53 * fRec28[1]));
		fRec27[0] = (fRec28[0] - (fConst51 * ((fConst50 * fRec27[2]) + (fConst12 * fRec27[1]))));
		double fTemp11 = max(-1, min(1, (fSlow6 * (fRec27[2] + (fRec27[0] + (2 * fRec27[1]))))));
		double fTemp12 = ((((fTemp11 * (1 - (0.3333333333333333 * faustpower<2>(fTemp11)))) + (fTemp10 * (1 - (0.3333333333333333 * faustpower<2>(fTemp10))))) + (0.625 * (fTemp8 * (1 - (0.3333333333333333 * faustpower<2>(fTemp8)))))) + (0.5 * (fTemp5 * (1 - (0.3333333333333333 * faustpower<2>(fTemp5))))));
		fVec4[0] = fTemp12;
		fRec11[0] = ((fConst57 * (fVec4[0] + fVec4[1])) + (fConst9 * fRec11[1]));
		double fTemp13 = (fRec10[1] - 1.3e+02);
		fVec5[0] = fTemp13;
		fRec29[0] = ((fConst61 * (fVec5[0] + fVec5[1])) + (fConst60 * fRec29[1]));
		fRec10[0] = Ftube4(0, ((fSlow9 * fTemp3) + (fRec29[0] + (fSlow8 * fRec11[0]))));
		fRec9[0] = ((fConst62 * ((fConst37 * fRec10[1]) + (fConst0 * fRec10[0]))) + (fConst2 * fRec9[1]));
		double fTemp14 = (fRec9[0] * fRec8[0]);
		fVec6[0] = fTemp14;
		fRec7[0] = ((fConst63 * (fVec6[0] + fVec6[1])) + (fConst9 * fRec7[1]));
		double fTemp15 = (fRec6[1] - 1.3e+02);
		fVec7[0] = fTemp15;
		fRec30[0] = ((fConst67 * (fVec7[0] + fVec7[1])) + (fConst66 * fRec30[1]));
		fRec6[0] = Ftube4(1, (fRec30[0] + fRec7[0]));
		fRec5[0] = ((fConst62 * ((fConst37 * fRec6[1]) + (fConst0 * fRec6[0]))) + (fConst2 * fRec5[1]));
		double fTemp16 = (fRec8[0] * fRec5[0]);
		fVec8[0] = fTemp16;
		fRec4[0] = ((fConst63 * (fVec8[0] + fVec8[1])) + (fConst9 * fRec4[1]));
		fRec2[0] = Ftube4(1, (fRec4[0] + fRec3[0]));
		fRec1[0] = ((fConst62 * ((fConst37 * fRec2[1]) + (fConst0 * fRec2[0]))) + (fConst2 * fRec1[1]));
		double fTemp17 = (fRec32[1] - 1.3e+02);
		fVec9[0] = fTemp17;
		fRec33[0] = ((fConst6 * (fVec9[0] + fVec9[1])) + (fConst5 * fRec33[1]));
		fRec32[0] = Ftube4(0, (fRec33[0] + fRec4[0]));
		fRec31[0] = ((fConst62 * ((fConst37 * fRec32[1]) + (fConst0 * fRec32[0]))) + (fConst2 * fRec31[1]));
		output0[i] = (FAUSTFLOAT)((fRec31[0] + fRec1[0]) * fRec0[0]);
		// post processing
		fRec31[1] = fRec31[0];
		fRec32[1] = fRec32[0];
		fRec33[1] = fRec33[0];
		fVec9[1] = fVec9[0];
		fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		fRec4[1] = fRec4[0];
		fVec8[1] = fVec8[0];
		fRec5[1] = fRec5[0];
		fRec6[1] = fRec6[0];
		fRec30[1] = fRec30[0];
		fVec7[1] = fVec7[0];
		fRec7[1] = fRec7[0];
		fVec6[1] = fVec6[0];
		fRec9[1] = fRec9[0];
		fRec10[1] = fRec10[0];
		fRec29[1] = fRec29[0];
		fVec5[1] = fVec5[0];
		fRec11[1] = fRec11[0];
		fVec4[1] = fVec4[0];
		fRec27[2] = fRec27[1]; fRec27[1] = fRec27[0];
		fRec28[1] = fRec28[0];
		fRec23[2] = fRec23[1]; fRec23[1] = fRec23[0];
		fRec24[1] = fRec24[0];
		fVec3[1] = fVec3[0];
		fRec25[2] = fRec25[1]; fRec25[1] = fRec25[0];
		fRec26[1] = fRec26[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec19[2] = fRec19[1]; fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		fVec2[1] = fVec2[0];
		fRec21[2] = fRec21[1]; fRec21[1] = fRec21[0];
		fRec22[1] = fRec22[0];
		fRec12[2] = fRec12[1]; fRec12[1] = fRec12[0];
		fRec13[2] = fRec13[1]; fRec13[1] = fRec13[0];
		fRec14[2] = fRec14[1]; fRec14[1] = fRec14[0];
		fRec15[1] = fRec15[0];
		fRec16[1] = fRec16[0];
		fVec1[1] = fVec1[0];
		fRec17[2] = fRec17[1]; fRec17[1] = fRec17[0];
		fRec8[1] = fRec8[0];
		fRec3[1] = fRec3[0];
		fVec0[1] = fVec0[0];
		fRec0[1] = fRec0[0];
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerInit("amp-t10", init);
}

} // end namespace gxamp10