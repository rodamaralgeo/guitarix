namespace gxamp7 {
// generated from file '../src/faust/gxamp7.dsp'

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
double 	fConst13;
double 	fConst14;
double 	fConst15;
double 	fConst16;
double 	fConst17;
double 	fVec0[2];
double 	fConst18;
double 	fRec5[2];
FAUSTFLOAT&	fslider0 = get_alias("amp2.stage2.gain1");
double 	fRec6[2];
double 	fConst19;
double 	fConst20;
double 	fConst21;
double 	fConst22;
double 	fConst23;
double 	fConst24;
double 	fConst25;
double 	fConst26;
double 	fConst27;
double 	fVec1[2];
double 	fConst28;
double 	fRec20[2];
double 	fRec19[2];
double 	fRec18[3];
double 	fRec17[3];
FAUSTFLOAT&	fslider1 = get_alias("amp2.stage1.Pregain");
double 	fRec21[2];
double 	fConst29;
double 	fConst30;
double 	fConst31;
double 	fVec2[2];
double 	fConst32;
double 	fRec22[2];
double 	fRec16[2];
double 	fConst33;
double 	fConst34;
double 	fRec15[2];
double 	fConst35;
double 	fConst36;
double 	fConst37;
double 	fVec3[2];
double 	fConst38;
double 	fRec25[2];
double 	fRec24[2];
double 	fRec23[2];
double 	fRec14[2];
double 	fConst39;
double 	fRec13[2];
double 	fVec4[2];
double 	fRec26[2];
double 	fRec12[2];
double 	fRec11[2];
double 	fConst40;
double 	fConst41;
double 	fConst42;
double 	fVec5[2];
double 	fConst43;
double 	fRec29[2];
double 	fRec28[2];
double 	fRec27[2];
double 	fRec10[2];
double 	fVec6[2];
double 	fRec30[2];
double 	fRec9[2];
double 	fRec8[2];
FAUSTFLOAT&	fslider2 = get_alias("gxdistortion.wet_dry");
FAUSTFLOAT&	fslider3 = get_alias("gxdistortion.drive");
double 	fRec33[2];
int 	IOTA;
double 	fVec7[65536];
int 	iConst44;
double 	fRec32[2];
double 	fConst45;
double 	fRec31[2];
double 	fConst46;
double 	fConst47;
double 	fConst48;
double 	fConst49;
double 	fConst50;
double 	fConst51;
double 	fConst52;
double 	fConst53;
double 	fConst54;
double 	fConst55;
double 	fConst56;
double 	fConst57;
double 	fConst58;
double 	fConst59;
double 	fConst60;
double 	fConst61;
double 	fConst62;
double 	fConst63;
double 	fConst64;
double 	fConst65;
double 	fConst66;
double 	fConst67;
double 	fConst68;
double 	fConst69;
double 	fConst70;
double 	fConst71;
double 	fConst72;
double 	fRec40[3];
double 	fVec8[2];
double 	fConst73;
double 	fRec39[2];
double 	fConst74;
double 	fConst75;
double 	fRec38[2];
double 	fRec37[3];
double 	fConst76;
double 	fRec36[3];
double 	fRec35[3];
double 	fConst77;
double 	fConst78;
double 	fConst79;
double 	fConst80;
double 	fConst81;
double 	fConst82;
double 	fConst83;
double 	fConst84;
double 	fConst85;
double 	fRec46[2];
double 	fRec45[3];
double 	fVec9[2];
double 	fConst86;
double 	fRec44[2];
double 	fRec43[3];
double 	fVec10[2];
double 	fConst87;
double 	fConst88;
double 	fRec42[2];
double 	fRec41[3];
double 	fConst89;
double 	fRec48[2];
double 	fRec47[3];
double 	fConst90;
double 	fRec51[2];
double 	fRec50[3];
double 	fConst91;
double 	fRec49[3];
double 	fVec11[2];
double 	fConst92;
double 	fRec34[2];
double 	fVec12[2];
double 	fRec7[2];
double 	fRec4[2];
double 	fConst93;
double 	fRec3[2];
double 	fVec13[2];
double 	fRec54[2];
double 	fRec53[2];
double 	fRec52[2];
double 	fVec14[3];
double 	fConst94;
double 	fConst95;
double 	fRec2[3];
double 	fConst96;
double 	fConst97;
double 	fRec1[3];
double 	fConst98;
double 	fConst99;
double 	fRec0[3];
int	fSamplingFreq;

void init(int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = (31704.95306002819 / fSamplingFreq);
	fConst1 = (2 * cos(fConst0));
	fConst2 = (0.026178010471204185 * sin(fConst0));
	fConst3 = (fConst2 - 1);
	fConst4 = (49574.33207364693 / fSamplingFreq);
	fConst5 = (2 * cos(fConst4));
	fConst6 = (0.07042253521126761 * sin(fConst4));
	fConst7 = (fConst6 - 1);
	fConst8 = (60601.32228774711 / fSamplingFreq);
	fConst9 = (2 * cos(fConst8));
	fConst10 = (0.03546099290780142 * sin(fConst8));
	fConst11 = (fConst10 - 1);
	fConst12 = (1.0 / tan((97.38937226128358 / fSamplingFreq)));
	fConst13 = (1 + fConst12);
	fConst14 = (0 - ((1 - fConst12) / fConst13));
	fConst15 = (1.0 / tan((20517.741620594938 / fSamplingFreq)));
	fConst16 = (1 + fConst15);
	fConst17 = (0 - ((1 - fConst15) / fConst16));
	for (int i=0; i<2; i++) fVec0[i] = 0;
	fConst18 = (0.0041 / fConst16);
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	fConst19 = tan((37699.11184307752 / fSamplingFreq));
	fConst20 = (2 * (1 - (1.0 / faustpower<2>(fConst19))));
	fConst21 = (1.0 / fConst19);
	fConst22 = (1 + ((fConst21 - 0.7653668647301795) / fConst19));
	fConst23 = (1.0 / (1 + ((0.7653668647301795 + fConst21) / fConst19)));
	fConst24 = (1 + ((fConst21 - 1.8477590650225735) / fConst19));
	fConst25 = (1.0 / (1 + ((fConst21 + 1.8477590650225735) / fConst19)));
	fConst26 = (973.8937226128359 / fSamplingFreq);
	fConst27 = (1 - fConst26);
	for (int i=0; i<2; i++) fVec1[i] = 0;
	fConst28 = (1.0 / (1 + fConst26));
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<3; i++) fRec18[i] = 0;
	for (int i=0; i<3; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	fConst29 = (1.0 / tan((270.1769682087222 / fSamplingFreq)));
	fConst30 = (1 + fConst29);
	fConst31 = (0 - ((1 - fConst29) / fConst30));
	for (int i=0; i<2; i++) fVec2[i] = 0;
	fConst32 = (0.027 / fConst30);
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	fConst33 = (0 - fConst12);
	fConst34 = (0.05 / fConst13);
	for (int i=0; i<2; i++) fRec15[i] = 0;
	fConst35 = (1.0 / tan((414.6902302738527 / fSamplingFreq)));
	fConst36 = (1 + fConst35);
	fConst37 = (0 - ((1 - fConst35) / fConst36));
	for (int i=0; i<2; i++) fVec3[i] = 0;
	fConst38 = (0.015 / fConst36);
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	fConst39 = (1.0 / fConst16);
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	fConst40 = (1.0 / tan((609.4689747964198 / fSamplingFreq)));
	fConst41 = (1 + fConst40);
	fConst42 = (0 - ((1 - fConst40) / fConst41));
	for (int i=0; i<2; i++) fVec5[i] = 0;
	fConst43 = (0.0082 / fConst41);
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fRec33[i] = 0;
	IOTA = 0;
	for (int i=0; i<65536; i++) fVec7[i] = 0;
	iConst44 = int((int((0.1111111111111111 * fSamplingFreq)) & 65535));
	for (int i=0; i<2; i++) fRec32[i] = 0;
	fConst45 = (0.009000000000000008 / fSamplingFreq);
	for (int i=0; i<2; i++) fRec31[i] = 0;
	fConst46 = tan((942.4777960769379 / fSamplingFreq));
	fConst47 = (1.0 / faustpower<2>(fConst46));
	fConst48 = (2 * (1 - fConst47));
	fConst49 = (1.0 / fConst46);
	fConst50 = (1 + ((fConst49 - 1.0) / fConst46));
	fConst51 = (1.0 / (1 + ((1.0 + fConst49) / fConst46)));
	fConst52 = tan((3769.9111843077517 / fSamplingFreq));
	fConst53 = (1.0 / faustpower<2>(fConst52));
	fConst54 = (2 * (1 - fConst53));
	fConst55 = (1.0 / fConst52);
	fConst56 = (1 + ((fConst55 - 1.0) / fConst52));
	fConst57 = (1.0 / (1 + ((1.0 + fConst55) / fConst52)));
	fConst58 = tan((10053.096491487338 / fSamplingFreq));
	fConst59 = (1.0 / faustpower<2>(fConst58));
	fConst60 = (2 * (1 - fConst59));
	fConst61 = (1.0 / fConst58);
	fConst62 = (1 + ((fConst61 - 1.0000000000000004) / fConst58));
	fConst63 = (1 + ((1.0000000000000004 + fConst61) / fConst58));
	fConst64 = (1.0 / fConst63);
	fConst65 = (1 + fConst61);
	fConst66 = (0 - ((1 - fConst61) / fConst65));
	fConst67 = tan((47123.8898038469 / fSamplingFreq));
	fConst68 = (2 * (1 - (1.0 / faustpower<2>(fConst67))));
	fConst69 = (1.0 / fConst67);
	fConst70 = (1 + ((fConst69 - 1.414213562373095) / fConst67));
	fConst71 = (1 + ((1.414213562373095 + fConst69) / fConst67));
	fConst72 = (1.0 / fConst71);
	for (int i=0; i<3; i++) fRec40[i] = 0;
	for (int i=0; i<2; i++) fVec8[i] = 0;
	fConst73 = (1.0 / (fConst13 * fConst71));
	for (int i=0; i<2; i++) fRec39[i] = 0;
	fConst74 = (0 - fConst61);
	fConst75 = (1.0 / fConst65);
	for (int i=0; i<2; i++) fRec38[i] = 0;
	for (int i=0; i<3; i++) fRec37[i] = 0;
	fConst76 = (2 * (0 - fConst59));
	for (int i=0; i<3; i++) fRec36[i] = 0;
	for (int i=0; i<3; i++) fRec35[i] = 0;
	fConst77 = (1 + ((fConst49 - 1.0000000000000004) / fConst46));
	fConst78 = (1.0 / (1 + ((fConst49 + 1.0000000000000004) / fConst46)));
	fConst79 = (1 + fConst49);
	fConst80 = (0 - ((1 - fConst49) / fConst79));
	fConst81 = (1 + ((fConst55 - 1.0000000000000004) / fConst52));
	fConst82 = (1 + ((fConst55 + 1.0000000000000004) / fConst52));
	fConst83 = (1.0 / fConst82);
	fConst84 = (1 + fConst55);
	fConst85 = (0 - ((1 - fConst55) / fConst84));
	for (int i=0; i<2; i++) fRec46[i] = 0;
	for (int i=0; i<3; i++) fRec45[i] = 0;
	for (int i=0; i<2; i++) fVec9[i] = 0;
	fConst86 = (1.0 / (fConst84 * fConst63));
	for (int i=0; i<2; i++) fRec44[i] = 0;
	for (int i=0; i<3; i++) fRec43[i] = 0;
	for (int i=0; i<2; i++) fVec10[i] = 0;
	fConst87 = (0 - fConst49);
	fConst88 = (1.0 / (fConst79 * fConst82));
	for (int i=0; i<2; i++) fRec42[i] = 0;
	for (int i=0; i<3; i++) fRec41[i] = 0;
	fConst89 = (2 * (0 - fConst47));
	for (int i=0; i<2; i++) fRec48[i] = 0;
	for (int i=0; i<3; i++) fRec47[i] = 0;
	fConst90 = (0 - fConst55);
	for (int i=0; i<2; i++) fRec51[i] = 0;
	for (int i=0; i<3; i++) fRec50[i] = 0;
	fConst91 = (2 * (0 - fConst53));
	for (int i=0; i<3; i++) fRec49[i] = 0;
	for (int i=0; i<2; i++) fVec11[i] = 0;
	fConst92 = (1.5848931924611136 / fConst16);
	for (int i=0; i<2; i++) fRec34[i] = 0;
	for (int i=0; i<2; i++) fVec12[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	fConst93 = (0.025 / fConst13);
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fVec13[i] = 0;
	for (int i=0; i<2; i++) fRec54[i] = 0;
	for (int i=0; i<2; i++) fRec53[i] = 0;
	for (int i=0; i<2; i++) fRec52[i] = 0;
	for (int i=0; i<3; i++) fVec14[i] = 0;
	fConst94 = (0 - fConst9);
	fConst95 = (1.0 / (1 + fConst10));
	for (int i=0; i<3; i++) fRec2[i] = 0;
	fConst96 = (0 - fConst5);
	fConst97 = (1.0 / (1 + fConst6));
	for (int i=0; i<3; i++) fRec1[i] = 0;
	fConst98 = (0 - fConst1);
	fConst99 = (1.0 / (1 + fConst2));
	for (int i=0; i<3; i++) fRec0[i] = 0;
}

void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = (0.0010000000000000009 * pow(10,(0.05 * fslider1)));
	double 	fSlow2 = (0.01 * fslider2);
	double 	fSlow3 = (1 - fSlow2);
	double 	fSlow4 = fslider3;
	double 	fSlow5 = (1.25 * fSlow4);
	double 	fSlow6 = (2 * (fSlow4 - 0.5));
	double 	fSlow7 = (0.024937655860349125 * (1 - max(0, fSlow6)));
	double 	fSlow8 = pow(1e+01,(0.8 * fSlow4));
	double 	fSlow9 = (fConst78 * pow(1e+01,(2 * fSlow4)));
	double 	fSlow10 = (fConst78 * pow(1e+01,(0.9 * fSlow4)));
	double 	fSlow11 = pow(1e+01,(1.2 * fSlow4));
	double 	fSlow12 = (1 - max(0, (0 - fSlow6)));
	for (int i=0; i<count; i++) {
		double fTemp0 = (fRec4[1] - 2.5e+02);
		fVec0[0] = fTemp0;
		fRec5[0] = ((fConst18 * (fVec0[0] + fVec0[1])) + (fConst17 * fRec5[1]));
		fRec6[0] = (fSlow0 + (0.999 * fRec6[1]));
		double fTemp1 = (double)input0[i];
		fVec1[0] = fTemp1;
		fRec20[0] = (fConst28 * ((fVec1[0] - fVec1[1]) + (fConst27 * fRec20[1])));
		fRec19[0] = (fConst28 * ((fRec20[0] - fRec20[1]) + (fConst27 * fRec19[1])));
		fRec18[0] = (fRec19[0] - (fConst25 * ((fConst24 * fRec18[2]) + (fConst20 * fRec18[1]))));
		fRec17[0] = ((fConst25 * (fRec18[2] + (fRec18[0] + (2 * fRec18[1])))) - (fConst23 * ((fConst22 * fRec17[2]) + (fConst20 * fRec17[1]))));
		fRec21[0] = (fSlow1 + (0.999 * fRec21[1]));
		double fTemp2 = (fRec16[1] - 1.3e+02);
		fVec2[0] = fTemp2;
		fRec22[0] = ((fConst32 * (fVec2[0] + fVec2[1])) + (fConst31 * fRec22[1]));
		fRec16[0] = Ftube(0, (fRec22[0] + (fConst23 * (fRec21[0] * (fRec17[2] + (fRec17[0] + (2 * fRec17[1])))))));
		fRec15[0] = ((fConst34 * ((fConst33 * fRec16[1]) + (fConst12 * fRec16[0]))) + (fConst14 * fRec15[1]));
		double fTemp3 = (fRec24[1] - 1.3e+02);
		fVec3[0] = fTemp3;
		fRec25[0] = ((fConst38 * (fVec3[0] + fVec3[1])) + (fConst37 * fRec25[1]));
		fRec24[0] = Ftube(1, (fRec25[0] + fRec14[1]));
		fRec23[0] = ((fConst34 * ((fConst33 * fRec24[1]) + (fConst12 * fRec24[0]))) + (fConst14 * fRec23[1]));
		fRec14[0] = (fRec23[0] + fRec15[0]);
		fRec13[0] = ((fConst39 * (fRec14[0] + fRec14[1])) + (fConst17 * fRec13[1]));
		double fTemp4 = (fRec12[1] - 1.3e+02);
		fVec4[0] = fTemp4;
		fRec26[0] = ((fConst38 * (fVec4[0] + fVec4[1])) + (fConst37 * fRec26[1]));
		fRec12[0] = Ftube(1, (fRec26[0] + fRec13[0]));
		fRec11[0] = ((fConst34 * ((fConst33 * fRec12[1]) + (fConst12 * fRec12[0]))) + (fConst14 * fRec11[1]));
		double fTemp5 = (fRec28[1] - 1.3e+02);
		fVec5[0] = fTemp5;
		fRec29[0] = ((fConst43 * (fVec5[0] + fVec5[1])) + (fConst42 * fRec29[1]));
		fRec28[0] = Ftube(1, (fRec29[0] + fRec10[1]));
		fRec27[0] = ((fConst34 * ((fConst33 * fRec28[1]) + (fConst12 * fRec28[0]))) + (fConst14 * fRec27[1]));
		fRec10[0] = (fRec27[0] + fRec11[0]);
		double fTemp6 = (fRec9[1] - 1.3e+02);
		fVec6[0] = fTemp6;
		fRec30[0] = ((fConst43 * (fVec6[0] + fVec6[1])) + (fConst42 * fRec30[1]));
		fRec9[0] = Ftube(1, (fRec30[0] + fRec10[0]));
		fRec8[0] = ((fConst34 * ((fConst33 * fRec9[1]) + (fConst12 * fRec9[0]))) + (fConst14 * fRec8[1]));
		double fTemp7 = (fSlow2 * fRec8[0]);
		double fTemp8 = fabs(fTemp7);
		fRec33[0] = ((9.999999999998899e-05 * fTemp8) + (0.9999 * fRec33[1]));
		double fTemp9 = max(fRec33[0], fTemp8);
		fVec7[IOTA&65535] = fTemp9;
		fRec32[0] = ((fVec7[IOTA&65535] + fRec32[1]) - fVec7[(IOTA-iConst44)&65535]);
		fRec31[0] = ((fConst45 * fRec32[0]) + (0.999 * fRec31[1]));
		double fTemp10 = max(-1, min(-0.01, (fVec7[IOTA&65535] - (1.0 + (1.02 * fRec31[0])))));
		double fTemp11 = (0 - fTemp10);
		double fTemp12 = (40.1 * fTemp11);
		double fTemp13 = max(-600, fTemp12);
		double fTemp14 = (0 - fTemp13);
		double fTemp15 = (fTemp7 - fTemp10);
		double fTemp16 = (40.1 * fTemp15);
		double fTemp17 = max(-600, fTemp16);
		double fTemp18 = (0 - fTemp17);
		double fTemp19 = (((int((fabs(fTemp16) > 0.0001)))?((int((fTemp17 < -50)))?(exp(fTemp17) * fTemp18):(fTemp17 / (1 - exp(fTemp18)))):(1 + (fTemp15 * (20.05 + (134.00083333333336 * fTemp15))))) - ((int((fabs(fTemp12) > 0.0001)))?((int((fTemp13 < -50)))?(exp(fTemp13) * fTemp14):(fTemp13 / (1 - exp(fTemp14)))):(1 + (fTemp11 * (20.05 + (134.00083333333336 * fTemp11))))));
		double fTemp20 = (fConst48 * fRec35[1]);
		double fTemp21 = (fConst54 * fRec36[1]);
		fRec40[0] = ((0.024937655860349125 * fTemp19) - (fConst72 * ((fConst70 * fRec40[2]) + (fConst68 * fRec40[1]))));
		double fTemp22 = (fRec40[2] + (fRec40[0] + (2 * fRec40[1])));
		fVec8[0] = fTemp22;
		fRec39[0] = ((fConst73 * ((fConst33 * fVec8[1]) + (fConst12 * fVec8[0]))) + (fConst14 * fRec39[1]));
		fRec38[0] = ((fConst75 * ((fConst74 * fRec39[1]) + (fConst61 * fRec39[0]))) + (fConst66 * fRec38[1]));
		fRec37[0] = (fRec38[0] - (fConst64 * ((fConst62 * fRec37[2]) + (fConst60 * fRec37[1]))));
		fRec36[0] = ((fConst64 * (((fConst59 * fRec37[0]) + (fConst76 * fRec37[1])) + (fConst59 * fRec37[2]))) - (fConst57 * ((fConst56 * fRec36[2]) + fTemp21)));
		fRec35[0] = ((fRec36[2] + (fConst57 * (fTemp21 + (fConst56 * fRec36[0])))) - (fConst51 * ((fConst50 * fRec35[2]) + fTemp20)));
		double fTemp23 = max(-1, min(1, (fSlow8 * (fRec35[2] + (fConst51 * (fTemp20 + (fConst50 * fRec35[0])))))));
		fRec46[0] = ((fConst75 * (fRec39[0] + fRec39[1])) + (fConst66 * fRec46[1]));
		fRec45[0] = (fRec46[0] - (fConst64 * ((fConst62 * fRec45[2]) + (fConst60 * fRec45[1]))));
		double fTemp24 = (fRec45[2] + (fRec45[0] + (2 * fRec45[1])));
		fVec9[0] = fTemp24;
		fRec44[0] = ((fConst86 * (fVec9[0] + fVec9[1])) + (fConst85 * fRec44[1]));
		fRec43[0] = (fRec44[0] - (fConst83 * ((fConst81 * fRec43[2]) + (fConst54 * fRec43[1]))));
		double fTemp25 = (fRec43[2] + (fRec43[0] + (2 * fRec43[1])));
		fVec10[0] = fTemp25;
		fRec42[0] = ((fConst88 * ((fConst87 * fVec10[1]) + (fConst49 * fVec10[0]))) + (fConst80 * fRec42[1]));
		fRec41[0] = (fRec42[0] - (fConst78 * ((fConst77 * fRec41[2]) + (fConst48 * fRec41[1]))));
		double fTemp26 = max(-1, min(1, (fSlow9 * (((fConst47 * fRec41[0]) + (fConst89 * fRec41[1])) + (fConst47 * fRec41[2])))));
		fRec48[0] = ((fConst88 * (fVec10[0] + fVec10[1])) + (fConst80 * fRec48[1]));
		fRec47[0] = (fRec48[0] - (fConst78 * ((fConst77 * fRec47[2]) + (fConst48 * fRec47[1]))));
		double fTemp27 = max(-1, min(1, (fSlow10 * (fRec47[2] + (fRec47[0] + (2 * fRec47[1]))))));
		double fTemp28 = (fConst48 * fRec49[1]);
		fRec51[0] = ((fConst86 * ((fConst90 * fVec9[1]) + (fConst55 * fVec9[0]))) + (fConst85 * fRec51[1]));
		fRec50[0] = (fRec51[0] - (fConst83 * ((fConst81 * fRec50[2]) + (fConst54 * fRec50[1]))));
		fRec49[0] = ((fConst83 * (((fConst53 * fRec50[0]) + (fConst91 * fRec50[1])) + (fConst53 * fRec50[2]))) - (fConst51 * ((fConst50 * fRec49[2]) + fTemp28)));
		double fTemp29 = max(-1, min(1, (fSlow11 * (fRec49[2] + (fConst51 * (fTemp28 + (fConst50 * fRec49[0])))))));
		double fTemp30 = (((fTemp29 * (1 - (0.3333333333333333 * faustpower<2>(fTemp29)))) + ((fTemp27 * (1 - (0.3333333333333333 * faustpower<2>(fTemp27)))) + (0.841395141645195 * (fTemp26 * (1 - (0.3333333333333333 * faustpower<2>(fTemp26))))))) + (0.7943282347242815 * (fTemp23 * (1 - (0.3333333333333333 * faustpower<2>(fTemp23))))));
		fVec11[0] = fTemp30;
		fRec34[0] = ((fConst92 * (fVec11[0] + fVec11[1])) + (fConst17 * fRec34[1]));
		double fTemp31 = (((fSlow12 * fRec34[0]) + (fSlow7 * fTemp19)) + (fSlow3 * (fRec8[0] * (1 + (fSlow5 * ((4 - (4 * fabs((fSlow3 * fRec8[0])))) - 1))))));
		fVec12[0] = fTemp31;
		fRec7[0] = ((fConst39 * (fVec12[0] + fVec12[1])) + (fConst17 * fRec7[1]));
		double fTemp32 = (fRec7[0] * fRec6[0]);
		fRec4[0] = Ftube2(0, (fTemp32 + fRec5[0]));
		fRec3[0] = ((fConst93 * ((fConst33 * fRec4[1]) + (fConst12 * fRec4[0]))) + (fConst14 * fRec3[1]));
		double fTemp33 = (fRec53[1] - 2.5e+02);
		fVec13[0] = fTemp33;
		fRec54[0] = ((fConst18 * (fVec13[0] + fVec13[1])) + (fConst17 * fRec54[1]));
		fRec53[0] = Ftube2(1, (fRec54[0] + fTemp32));
		fRec52[0] = ((fConst93 * ((fConst33 * fRec53[1]) + (fConst12 * fRec53[0]))) + (fConst14 * fRec52[1]));
		double fTemp34 = (min(0.7, fRec52[0]) + max(-0.75, fRec3[0]));
		fVec14[0] = fTemp34;
		fRec2[0] = (fConst95 * ((fVec14[2] + (fVec14[0] + (fConst94 * fVec14[1]))) + ((fConst11 * fRec2[2]) + (fConst9 * fRec2[1]))));
		fRec1[0] = (fConst97 * ((fRec2[2] + (fRec2[0] + (fConst96 * fRec2[1]))) + ((fConst7 * fRec1[2]) + (fConst5 * fRec1[1]))));
		fRec0[0] = (fConst99 * ((fRec1[2] + (fRec1[0] + (fConst98 * fRec1[1]))) + ((fConst3 * fRec0[2]) + (fConst1 * fRec0[1]))));
		output0[i] = (FAUSTFLOAT)fRec0[0];
		// post processing
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fVec14[2] = fVec14[1]; fVec14[1] = fVec14[0];
		fRec52[1] = fRec52[0];
		fRec53[1] = fRec53[0];
		fRec54[1] = fRec54[0];
		fVec13[1] = fVec13[0];
		fRec3[1] = fRec3[0];
		fRec4[1] = fRec4[0];
		fRec7[1] = fRec7[0];
		fVec12[1] = fVec12[0];
		fRec34[1] = fRec34[0];
		fVec11[1] = fVec11[0];
		fRec49[2] = fRec49[1]; fRec49[1] = fRec49[0];
		fRec50[2] = fRec50[1]; fRec50[1] = fRec50[0];
		fRec51[1] = fRec51[0];
		fRec47[2] = fRec47[1]; fRec47[1] = fRec47[0];
		fRec48[1] = fRec48[0];
		fRec41[2] = fRec41[1]; fRec41[1] = fRec41[0];
		fRec42[1] = fRec42[0];
		fVec10[1] = fVec10[0];
		fRec43[2] = fRec43[1]; fRec43[1] = fRec43[0];
		fRec44[1] = fRec44[0];
		fVec9[1] = fVec9[0];
		fRec45[2] = fRec45[1]; fRec45[1] = fRec45[0];
		fRec46[1] = fRec46[0];
		fRec35[2] = fRec35[1]; fRec35[1] = fRec35[0];
		fRec36[2] = fRec36[1]; fRec36[1] = fRec36[0];
		fRec37[2] = fRec37[1]; fRec37[1] = fRec37[0];
		fRec38[1] = fRec38[0];
		fRec39[1] = fRec39[0];
		fVec8[1] = fVec8[0];
		fRec40[2] = fRec40[1]; fRec40[1] = fRec40[0];
		fRec31[1] = fRec31[0];
		fRec32[1] = fRec32[0];
		IOTA = IOTA+1;
		fRec33[1] = fRec33[0];
		fRec8[1] = fRec8[0];
		fRec9[1] = fRec9[0];
		fRec30[1] = fRec30[0];
		fVec6[1] = fVec6[0];
		fRec10[1] = fRec10[0];
		fRec27[1] = fRec27[0];
		fRec28[1] = fRec28[0];
		fRec29[1] = fRec29[0];
		fVec5[1] = fVec5[0];
		fRec11[1] = fRec11[0];
		fRec12[1] = fRec12[0];
		fRec26[1] = fRec26[0];
		fVec4[1] = fVec4[0];
		fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		fRec23[1] = fRec23[0];
		fRec24[1] = fRec24[0];
		fRec25[1] = fRec25[0];
		fVec3[1] = fVec3[0];
		fRec15[1] = fRec15[0];
		fRec16[1] = fRec16[0];
		fRec22[1] = fRec22[0];
		fVec2[1] = fVec2[0];
		fRec21[1] = fRec21[0];
		fRec17[2] = fRec17[1]; fRec17[1] = fRec17[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		fVec1[1] = fVec1[0];
		fRec6[1] = fRec6[0];
		fRec5[1] = fRec5[0];
		fVec0[1] = fVec0[0];
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerInit("amp2", init);
}

} // end namespace gxamp7
