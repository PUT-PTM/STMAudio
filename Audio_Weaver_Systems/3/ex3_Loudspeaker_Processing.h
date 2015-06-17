/****************************************************************************
 *
 *		Target Tuning Symbol File
 *		-------------------------
 *
 *          Generated on:  23-Apr-2015 15:05:48
 *
 ***************************************************************************/

#ifndef EX3_LOUDSPEAKER_PROCESSING_H
#define EX3_LOUDSPEAKER_PROCESSING_H

#include "Framework.h"

#include "ModAGCLimiterCore.h"
#include "ModAGCMultiplier.h"
#include "ModDeinterleave.h"
#include "ModDelayMsec.h"
#include "ModFloatToFract32.h"
#include "ModFract32ToFloat.h"
#include "ModInterleave.h"
#include "ModMaxAbs.h"
#include "ModMeter.h"
#include "ModSecondOrderFilterSmoothed.h"
#include "ModSecondOrderFilterSmoothedCascade.h"
#include "ModVolumeControl.h"

#define audio2x32x4Bx48000_00_real_ID 1
#define audio1x32x4Bx48000_00_real_ID 2
#define wire1_ID 3
#define wire2_ID 4
#define wire3_ID 5
#define wire4_ID 6
#define wire5_ID 7
#define wire6_ID 8
#define wire7_ID 9
#define wire8_ID 10
#define SYS_toFloat_ID 11
#define BassTone_ID 12
#define TrebleTone_ID 13
#define Volume1_ID 14
#define SpeakerEQ_ID 16
#define Deint1_ID 17
#define LimiterL_MaxAbs1_ID 18
#define LimiterL_LimiterCore1_ID 19
#define LimiterL_DelayMsec1_ID 20
#define LimiterL_AGCMult1_ID 22
#define LimiterR_MaxAbs1_ID 23
#define LimiterR_LimiterCore1_ID 24
#define LimiterR_DelayMsec1_ID 25
#define LimiterR_AGCMult1_ID 27
#define Interleave1_ID 28
#define SYS_toFract_ID 29
#define Meter1_ID 30
#define theLayout1_ID 31

INT32 InitializeAWESymbols(void);

/* ----------------------------------------------------------------------
** Object variables declarations.
** ------------------------------------------------------------------- */

extern PinInstanceDescriptor *audio2x32x4Bx48000_00_real;
extern PinInstanceDescriptor *audio1x32x4Bx48000_00_real;
extern WireInstance *wire1;
extern WireInstance *wire2;
extern WireInstance *wire3;
extern WireInstance *wire4;
extern WireInstance *wire5;
extern WireInstance *wire6;
extern WireInstance *wire7;
extern WireInstance *wire8;
extern awe_modFract32ToFloatInstance *SYS_toFloat;
extern awe_modSecondOrderFilterSmoothedInstance *BassTone;
extern awe_modSecondOrderFilterSmoothedInstance *TrebleTone;
extern awe_modVolumeControlInstance *Volume1;
extern awe_modSecondOrderFilterSmoothedCascadeInstance *SpeakerEQ;
extern awe_modDeinterleaveInstance *Deint1;
extern awe_modMaxAbsInstance *LimiterL_MaxAbs1;
extern awe_modAGCLimiterCoreInstance *LimiterL_LimiterCore1;
extern awe_modDelayMsecInstance *LimiterL_DelayMsec1;
extern awe_modAGCMultiplierInstance *LimiterL_AGCMult1;
extern awe_modMaxAbsInstance *LimiterR_MaxAbs1;
extern awe_modAGCLimiterCoreInstance *LimiterR_LimiterCore1;
extern awe_modDelayMsecInstance *LimiterR_DelayMsec1;
extern awe_modAGCMultiplierInstance *LimiterR_AGCMult1;
extern awe_modInterleaveInstance *Interleave1;
extern awe_modFloatToFract32Instance *SYS_toFract;
extern awe_modMeterInstance *Meter1;
extern LayoutInstance *theLayout1;

#endif // EX3_LOUDSPEAKER_PROCESSING_H

