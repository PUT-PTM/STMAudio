/****************************************************************************
 *
 *		Target Tuning Symbol File
 *		-------------------------
 *
 *          Generated on:  23-Apr-2015 15:05:49
 *
 ***************************************************************************/

#include "ex3_Loudspeaker_Processing.h"
AWE_MOD_SLOW_ANY_DATA PinInstanceDescriptor *audio2x32x4Bx48000_00_real;
AWE_MOD_SLOW_ANY_DATA PinInstanceDescriptor *audio1x32x4Bx48000_00_real;
AWE_MOD_SLOW_ANY_DATA WireInstance *wire1;
AWE_MOD_SLOW_ANY_DATA WireInstance *wire2;
AWE_MOD_SLOW_ANY_DATA WireInstance *wire3;
AWE_MOD_SLOW_ANY_DATA WireInstance *wire4;
AWE_MOD_SLOW_ANY_DATA WireInstance *wire5;
AWE_MOD_SLOW_ANY_DATA WireInstance *wire6;
AWE_MOD_SLOW_ANY_DATA WireInstance *wire7;
AWE_MOD_SLOW_ANY_DATA WireInstance *wire8;
AWE_MOD_SLOW_ANY_DATA awe_modFract32ToFloatInstance *SYS_toFloat;
AWE_MOD_SLOW_ANY_DATA awe_modSecondOrderFilterSmoothedInstance *BassTone;
AWE_MOD_SLOW_ANY_DATA awe_modSecondOrderFilterSmoothedInstance *TrebleTone;
AWE_MOD_SLOW_ANY_DATA awe_modVolumeControlInstance *Volume1;
AWE_MOD_SLOW_ANY_DATA awe_modSecondOrderFilterSmoothedCascadeInstance *SpeakerEQ;
AWE_MOD_SLOW_ANY_DATA awe_modDeinterleaveInstance *Deint1;
AWE_MOD_SLOW_ANY_DATA awe_modMaxAbsInstance *LimiterL_MaxAbs1;
AWE_MOD_SLOW_ANY_DATA awe_modAGCLimiterCoreInstance *LimiterL_LimiterCore1;
AWE_MOD_SLOW_ANY_DATA awe_modDelayMsecInstance *LimiterL_DelayMsec1;
AWE_MOD_SLOW_ANY_DATA awe_modAGCMultiplierInstance *LimiterL_AGCMult1;
AWE_MOD_SLOW_ANY_DATA awe_modMaxAbsInstance *LimiterR_MaxAbs1;
AWE_MOD_SLOW_ANY_DATA awe_modAGCLimiterCoreInstance *LimiterR_LimiterCore1;
AWE_MOD_SLOW_ANY_DATA awe_modDelayMsecInstance *LimiterR_DelayMsec1;
AWE_MOD_SLOW_ANY_DATA awe_modAGCMultiplierInstance *LimiterR_AGCMult1;
AWE_MOD_SLOW_ANY_DATA awe_modInterleaveInstance *Interleave1;
AWE_MOD_SLOW_ANY_DATA awe_modFloatToFract32Instance *SYS_toFract;
AWE_MOD_SLOW_ANY_DATA awe_modMeterInstance *Meter1;
AWE_MOD_SLOW_ANY_DATA LayoutInstance *theLayout1;

#ifdef __cplusplus
extern "C" {
#endif

#include "Errors.h"

/* ----------------------------------------------------------------------
** Object variables declarations.
** ------------------------------------------------------------------- */
    
INT32 InitializeAWESymbols(void)
{

InstanceDescriptor *inst;
UINT32 classID;
    
if (awe_fwGetObjectByID(audio2x32x4Bx48000_00_real_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
audio2x32x4Bx48000_00_real = (PinInstanceDescriptor *) inst;

if (awe_fwGetObjectByID(audio1x32x4Bx48000_00_real_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
audio1x32x4Bx48000_00_real = (PinInstanceDescriptor *) inst;

if (awe_fwGetObjectByID(wire1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
wire1 = (WireInstance *) inst;

if (awe_fwGetObjectByID(wire2_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
wire2 = (WireInstance *) inst;

if (awe_fwGetObjectByID(wire3_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
wire3 = (WireInstance *) inst;

if (awe_fwGetObjectByID(wire4_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
wire4 = (WireInstance *) inst;

if (awe_fwGetObjectByID(wire5_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
wire5 = (WireInstance *) inst;

if (awe_fwGetObjectByID(wire6_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
wire6 = (WireInstance *) inst;

if (awe_fwGetObjectByID(wire7_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
wire7 = (WireInstance *) inst;

if (awe_fwGetObjectByID(wire8_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
wire8 = (WireInstance *) inst;

if (awe_fwGetObjectByID(SYS_toFloat_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
SYS_toFloat = (awe_modFract32ToFloatInstance *) inst;

if (awe_fwGetObjectByID(BassTone_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
BassTone = (awe_modSecondOrderFilterSmoothedInstance *) inst;

if (awe_fwGetObjectByID(TrebleTone_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
TrebleTone = (awe_modSecondOrderFilterSmoothedInstance *) inst;

if (awe_fwGetObjectByID(Volume1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
Volume1 = (awe_modVolumeControlInstance *) inst;

if (awe_fwGetObjectByID(SpeakerEQ_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
SpeakerEQ = (awe_modSecondOrderFilterSmoothedCascadeInstance *) inst;

if (awe_fwGetObjectByID(Deint1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
Deint1 = (awe_modDeinterleaveInstance *) inst;

if (awe_fwGetObjectByID(LimiterL_MaxAbs1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
LimiterL_MaxAbs1 = (awe_modMaxAbsInstance *) inst;

if (awe_fwGetObjectByID(LimiterL_LimiterCore1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
LimiterL_LimiterCore1 = (awe_modAGCLimiterCoreInstance *) inst;

if (awe_fwGetObjectByID(LimiterL_DelayMsec1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
LimiterL_DelayMsec1 = (awe_modDelayMsecInstance *) inst;

if (awe_fwGetObjectByID(LimiterL_AGCMult1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
LimiterL_AGCMult1 = (awe_modAGCMultiplierInstance *) inst;

if (awe_fwGetObjectByID(LimiterR_MaxAbs1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
LimiterR_MaxAbs1 = (awe_modMaxAbsInstance *) inst;

if (awe_fwGetObjectByID(LimiterR_LimiterCore1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
LimiterR_LimiterCore1 = (awe_modAGCLimiterCoreInstance *) inst;

if (awe_fwGetObjectByID(LimiterR_DelayMsec1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
LimiterR_DelayMsec1 = (awe_modDelayMsecInstance *) inst;

if (awe_fwGetObjectByID(LimiterR_AGCMult1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
LimiterR_AGCMult1 = (awe_modAGCMultiplierInstance *) inst;

if (awe_fwGetObjectByID(Interleave1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
Interleave1 = (awe_modInterleaveInstance *) inst;

if (awe_fwGetObjectByID(SYS_toFract_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
SYS_toFract = (awe_modFloatToFract32Instance *) inst;

if (awe_fwGetObjectByID(Meter1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
Meter1 = (awe_modMeterInstance *) inst;

if (awe_fwGetObjectByID(theLayout1_ID, &inst, &classID) != E_SUCCESS)
    return( E_CLASS_NOT_FOUND);
theLayout1 = (LayoutInstance *) inst;

        
return(E_SUCCESS);
}

#ifdef __cplusplus
}
#endif

