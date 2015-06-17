/* ----------------------------------------------------------------------
** Static Audio Weaver command packets
** Source file = D:\Dysk Google\Studia\Semestr IV\PTM\repo\Audio_Weaver_Systems\ex3_Loudspeaker_Processing.awb
** Created on 23-Apr-2015 15:05:46
** ------------------------------------------------------------------- */
#include "TargetProcessor.h"


AWE_MOD_SLOW_ANY_DATA
unsigned int InitCommands[381] = {
0x00030037,		/* PFID_EnableAddressTranslation */
0x00000001,		/*            1 [enable] */
0x0002001c,		/* PFID_StopAudio */
0x0002000c,		/* PFID_Destroy */
0x00070003,		/* PFID_ClassPin_Constructor */
0x00000020,		/*           32 [blockSize] */
0x00000002,		/*            2 [numChannels] */
0x00000004,		/*            4 [sizeOfSamples] */
0x0000bb80,		/*        48000 [sampleRate] */
0x00000000,		/*            0 [isComplex] */
0x00070003,		/* PFID_ClassPin_Constructor */
0x00000020,		/*           32 [blockSize] */
0x00000001,		/*            1 [numChannels] */
0x00000004,		/*            4 [sizeOfSamples] */
0x0000bb80,		/*        48000 [sampleRate] */
0x00000000,		/*            0 [isComplex] */
0x00030006,		/* PFID_ClassWire_Constructor */
0x00008000,		/*   0x00008000 [Pin pointer] */
0x00030006,		/* PFID_ClassWire_Constructor */
0x00008000,		/*   0x00008000 [Pin pointer] */
0x00030006,		/* PFID_ClassWire_Constructor */
0x00008000,		/*   0x00008000 [Pin pointer] */
0x00030006,		/* PFID_ClassWire_Constructor */
0x00008000,		/*   0x00008000 [Pin pointer] */
0x00030006,		/* PFID_ClassWire_Constructor */
0x00010000,		/*   0x00010000 [Pin pointer] */
0x00030006,		/* PFID_ClassWire_Constructor */
0x00010000,		/*   0x00010000 [Pin pointer] */
0x00030006,		/* PFID_ClassWire_Constructor */
0x00010000,		/*   0x00010000 [Pin pointer] */
0x00030006,		/* PFID_ClassWire_Constructor */
0x00010000,		/*   0x00010000 [Pin pointer] */
0x00040007,		/* PFID_BindIOToWire */
0x00018000,		/*   0x00018000 [Wire pointer] */
0x00000001,		/*   0x00000001 [I/O pin pointer] */
0x00040007,		/* PFID_BindIOToWire */
0x00020000,		/*   0x00020000 [Wire pointer] */
0x00000002,		/*   0x00000002 [I/O pin pointer] */
0x0007000f,		/* PFID_ClassModule_Constructor */
0xbeef0810,		/*           16 [classID = Fract32ToFloat] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000000,		/*            0 [argCount] */
0x00018000,		/*   0x00018000 [wire 0] */
0x00028000,		/*   0x00028000 [wire 1] */
0x0018000f,		/* PFID_ClassModule_Constructor */
0xbeef0c1f,		/*         1055 [classID = SecondOrderFilterSmoothed] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000011,		/*           17 [argCount] */
0x00028000,		/*   0x00028000 [wire 0] */
0x00028000,		/*   0x00028000 [wire 1] */
0x00000008,		/*   0x00000008 [arg 0] : filterType = 8 */
0x43480000,		/*   0x43480000 [arg 1] : freq = 200.0 */
0x00000000,		/*   0x00000000 [arg 2] : gain = 0.0 */
0x3f800000,		/*   0x3f800000 [arg 3] : Q = 1.0 */
0x41200000,		/*   0x41200000 [arg 4] : smoothingTime = 10.0 */
0x00000001,		/*   0x00000001 [arg 5] : updateActive = 1 */
0x3f800000,		/*   0x3f800000 [arg 6] : b0 = 1.0 */
0xbffb42ee,		/*   0xbffb42ee [arg 7] : b1 = -1.96298003 */
0x3f76b1f6,		/*   0x3f76b1f6 [arg 8] : b2 = 0.963652968 */
0xbffb42ee,		/*   0xbffb42ee [arg 9] : a1 = -1.96298003 */
0x3f76b1f6,		/*   0x3f76b1f6 [arg 10] : a2 = 0.963652968 */
0x3f800000,		/*   0x3f800000 [arg 11] : current_b0 = 1.0 */
0xbffb42ee,		/*   0xbffb42ee [arg 12] : current_b1 = -1.96298003 */
0x3f76b1f6,		/*   0x3f76b1f6 [arg 13] : current_b2 = 0.963652968 */
0xbffb42ee,		/*   0xbffb42ee [arg 14] : current_a1 = -1.96298003 */
0x3f76b1f6,		/*   0x3f76b1f6 [arg 15] : current_a2 = 0.963652968 */
0x3d8414ea,		/*   0x3d8414ea [arg 16] : smoothingCoeff = 0.0644930154 */
0x0018000f,		/* PFID_ClassModule_Constructor */
0xbeef0c1f,		/*         1055 [classID = SecondOrderFilterSmoothed] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000011,		/*           17 [argCount] */
0x00028000,		/*   0x00028000 [wire 0] */
0x00028000,		/*   0x00028000 [wire 1] */
0x0000000a,		/*   0x0000000a [arg 0] : filterType = 10 */
0x43480000,		/*   0x43480000 [arg 1] : freq = 200.0 */
0x00000000,		/*   0x00000000 [arg 2] : gain = 0.0 */
0x3f800000,		/*   0x3f800000 [arg 3] : Q = 1.0 */
0x41200000,		/*   0x41200000 [arg 4] : smoothingTime = 10.0 */
0x00000001,		/*   0x00000001 [arg 5] : updateActive = 1 */
0x3f800000,		/*   0x3f800000 [arg 6] : b0 = 1.0 */
0xbffb42ee,		/*   0xbffb42ee [arg 7] : b1 = -1.96298003 */
0x3f76b1f6,		/*   0x3f76b1f6 [arg 8] : b2 = 0.963652968 */
0xbffb42ee,		/*   0xbffb42ee [arg 9] : a1 = -1.96298003 */
0x3f76b1f6,		/*   0x3f76b1f6 [arg 10] : a2 = 0.963652968 */
0x3f800000,		/*   0x3f800000 [arg 11] : current_b0 = 1.0 */
0xbffb42ee,		/*   0xbffb42ee [arg 12] : current_b1 = -1.96298003 */
0x3f76b1f6,		/*   0x3f76b1f6 [arg 13] : current_b2 = 0.963652968 */
0xbffb42ee,		/*   0xbffb42ee [arg 14] : current_a1 = -1.96298003 */
0x3f76b1f6,		/*   0x3f76b1f6 [arg 15] : current_a2 = 0.963652968 */
0x3d8414ea,		/*   0x3d8414ea [arg 16] : smoothingCoeff = 0.0644930154 */
0x000f000f,		/* PFID_ClassModule_Constructor */
0xbeef0c2f,		/*         1071 [classID = VolumeControl] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000008,		/*            8 [argCount] */
0x00028000,		/*   0x00028000 [wire 0] */
0x00030000,		/*   0x00030000 [wire 1] */
0x00000000,		/*   0x00000000 [arg 0] : 0.0 */
0x427a0000,		/*   0x427a0000 [arg 1] : 62.5 */
0x3af99324,		/*   0x3af99324 [arg 2] : 0.00190410437 */
0xbdc4192f,		/*   0xbdc4192f [arg 3] : -0.0957511589 */
0xbe85d7e8,		/*   0xbe85d7e8 [arg 4] : -0.261412859 */
0x3b857e34,		/*   0x3b857e34 [arg 5] : 0.00407388248 */
0xacdb00b8,		/*   0xacdb00b8 [arg 6] : -6.22443416e-12 */
0xbb857e34,		/*   0xbb857e34 [arg 7] : -0.00407388248 */
0x0006003c,		/* PFID_SetValueSetCall */
0x00078008,		/*      0x78008 [Address] */
0x00000001,		/*            1 [value] : 0.000000 */
0x00078000,		/*      0x78000 [pModule] */
0x00000100,		/*        0x100 [mask] */
0x0006003c,		/* PFID_SetValueSetCall */
0x00078009,		/*      0x78009 [Address] */
0x41200000,		/*   1092616192 [value] : 10.000000 */
0x00078000,		/*      0x78000 [pModule] */
0x00000200,		/*        0x200 [mask] */
0x0006003c,		/* PFID_SetValueSetCall */
0x0007800f,		/*      0x7800f [Address] */
0x3f800000,		/*   1065353216 [value] : 1.000000 */
0x00078000,		/*      0x78000 [pModule] */
0x00008000,		/*       0x8000 [mask] */
0x0006003c,		/* PFID_SetValueSetCall */
0x00078010,		/*      0x78010 [Address] */
0xbffef2d4,		/*   3221156564 [value] : -1.991786 */
0x00078000,		/*      0x78000 [pModule] */
0x00010000,		/*      0x10000 [mask] */
0x0006003c,		/* PFID_SetValueSetCall */
0x00078011,		/*      0x78011 [Address] */
0x3f7dea07,		/*   1065216519 [value] : 0.991852 */
0x00078000,		/*      0x78000 [pModule] */
0x00020000,		/*      0x20000 [mask] */
0x0006003c,		/* PFID_SetValueSetCall */
0x00078012,		/*      0x78012 [Address] */
0xbffef2d4,		/*   3221156564 [value] : -1.991786 */
0x00078000,		/*      0x78000 [pModule] */
0x00040000,		/*      0x40000 [mask] */
0x0006003c,		/* PFID_SetValueSetCall */
0x00078013,		/*      0x78013 [Address] */
0x3f7dea07,		/*   1065216519 [value] : 0.991852 */
0x00078000,		/*      0x78000 [pModule] */
0x00080000,		/*      0x80000 [mask] */
0x00040001,		/* PFID_SetCall */
0x00070000,		/*   0x00070000 [Module pointer] */
0xffffffff,		/*   0xffffffff [Mask] */
0x000b000f,		/* PFID_ClassModule_Constructor */
0xbeef0c1e,		/*         1054 [classID = SecondOrderFilterSmoothedCascade] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000004,		/*            4 [argCount] */
0x00030000,		/*   0x00030000 [wire 0] */
0x00030000,		/*   0x00030000 [wire 1] */
0x00000004,		/*   0x00000004 [arg 0] : numStages = 4 */
0x41200000,		/*   0x41200000 [arg 1] : smoothingTime = 10.0 */
0x00000001,		/*   0x00000001 [arg 2] : updateActive = 1 */
0x3d8414ea,		/*   0x3d8414ea [arg 3] : smoothingCoeff = 0.0644930154 */
0x000b004c,		/* PFID_P_SetValuesSetCall */
0x0008000c,		/*   0x0008000c [Address] */
0x00000000,		/*            0 [offset] */
0x00080000,		/*      0x80000 [pModule] */
0x00001000,		/*       0x1000 [mask] */
0x00000004,		/*            4 [argCount] */
0x0000000c,		/*          0xc [value 0] : 0.000000 */
0x0000000c,		/*          0xc [value 1] : 0.000000 */
0x0000000c,		/*          0xc [value 2] : 0.000000 */
0x0000000c,		/*          0xc [value 3] : 0.000000 */
0x000b004c,		/* PFID_P_SetValuesSetCall */
0x0008000d,		/*   0x0008000d [Address] */
0x00000000,		/*            0 [offset] */
0x00080000,		/*      0x80000 [pModule] */
0x00002000,		/*       0x2000 [mask] */
0x00000004,		/*            4 [argCount] */
0x437a0000,		/*   0x437a0000 [value 0] : 250.000000 */
0x447a0000,		/*   0x447a0000 [value 1] : 1000.000000 */
0x451c4000,		/*   0x451c4000 [value 2] : 2500.000000 */
0x459c4000,		/*   0x459c4000 [value 3] : 5000.000000 */
0x000b004c,		/* PFID_P_SetValuesSetCall */
0x0008000e,		/*   0x0008000e [Address] */
0x00000000,		/*            0 [offset] */
0x00080000,		/*      0x80000 [pModule] */
0x00004000,		/*       0x4000 [mask] */
0x00000004,		/*            4 [argCount] */
0x00000000,		/*            0 [value 0] : 0.000000 */
0x00000000,		/*            0 [value 1] : 0.000000 */
0x00000000,		/*            0 [value 2] : 0.000000 */
0x40a00000,		/*   0x40a00000 [value 3] : 5.000000 */
0x000b004c,		/* PFID_P_SetValuesSetCall */
0x0008000f,		/*   0x0008000f [Address] */
0x00000000,		/*            0 [offset] */
0x00080000,		/*      0x80000 [pModule] */
0x00008000,		/*       0x8000 [mask] */
0x00000004,		/*            4 [argCount] */
0x3f800000,		/*   0x3f800000 [value 0] : 1.000000 */
0x3f800000,		/*   0x3f800000 [value 1] : 1.000000 */
0x3f800000,		/*   0x3f800000 [value 2] : 1.000000 */
0x3f800000,		/*   0x3f800000 [value 3] : 1.000000 */
0x001b004c,		/* PFID_P_SetValuesSetCall */
0x00080011,		/*   0x00080011 [Address] */
0x00000000,		/*            0 [offset] */
0x00080000,		/*      0x80000 [pModule] */
0x00020000,		/*      0x20000 [mask] */
0x00000014,		/*           20 [argCount] */
0x3f800000,		/*   0x3f800000 [value 0] : 1.000000 */
0xbffbbe98,		/*   0xbffbbe98 [value 1] : -1.966754 */
0x3f77c23d,		/*   0x3f77c23d [value 2] : 0.967808 */
0xbffbbe98,		/*   0xbffbbe98 [value 3] : -1.966754 */
0x3f77c23d,		/*   0x3f77c23d [value 4] : 0.967808 */
0x3f800000,		/*   0x3f800000 [value 5] : 1.000000 */
0xbfee42a2,		/*   0xbfee42a2 [value 6] : -1.861408 */
0x3f60a1e8,		/*   0x3f60a1e8 [value 7] : 0.877470 */
0xbfee42a2,		/*   0xbfee42a2 [value 8] : -1.861408 */
0x3f60a1e8,		/*   0x3f60a1e8 [value 9] : 0.877470 */
0x3f800000,		/*   0x3f800000 [value 10] : 1.000000 */
0xbfd0d91d,		/*   0xbfd0d91d [value 11] : -1.631626 */
0x3f391b0a,		/*   0x3f391b0a [value 12] : 0.723069 */
0xbfd0d91d,		/*   0xbfd0d91d [value 13] : -1.631626 */
0x3f391b0a,		/*   0x3f391b0a [value 14] : 0.723069 */
0x3f800000,		/*   0x3f800000 [value 15] : 1.000000 */
0xbf9bb474,		/*   0xbf9bb474 [value 16] : -1.216444 */
0x3f088600,		/*   0x3f088600 [value 17] : 0.533295 */
0xbf9bb474,		/*   0xbf9bb474 [value 18] : -1.216444 */
0x3f088600,		/*   0x3f088600 [value 19] : 0.533295 */
0x0008000f,		/* PFID_ClassModule_Constructor */
0xbeef0805,		/*            5 [classID = Deinterleave] */
0x00000201,		/*   0x00000201 [nIO.  numIn=1. numOut=2. numScratch=0] */
0x00000000,		/*            0 [argCount] */
0x00030000,		/*   0x00030000 [wire 0] */
0x00038000,		/*   0x00038000 [wire 1] */
0x00040000,		/*   0x00040000 [wire 2] */
0x0007000f,		/* PFID_ClassModule_Constructor */
0xbeef0c03,		/*         1027 [classID = MaxAbs] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000000,		/*            0 [argCount] */
0x00038000,		/*   0x00038000 [wire 0] */
0x00048000,		/*   0x00048000 [wire 1] */
0x0013000f,		/* PFID_ClassModule_Constructor */
0xbeef0bed,		/*         1005 [classID = AGCLimiterCore] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x0000000c,		/*           12 [argCount] */
0x00048000,		/*   0x00048000 [wire 0] */
0x00050000,		/*   0x00050000 [wire 1] */
0xc0800000,		/*   0xc0800000 [arg 0] : threshold = -4.0 */
0x00000000,		/*   0x00000000 [arg 1] : gain = 0.0 */
0x3f666666,		/*   0x3f666666 [arg 2] : slope = 0.899999976 */
0x40000000,		/*   0x40000000 [arg 3] : kneeDepth = 2.0 */
0x41200000,		/*   0x41200000 [arg 4] : ratio = 10.0 */
0x41200000,		/*   0x41200000 [arg 5] : attackTime = 10.0 */
0x43480000,		/*   0x43480000 [arg 6] : decayTime = 200.0 */
0x00000000,		/*   0x00000000 [arg 7] : currentGain = 0.0 */
0x3f000000,		/*   0x3f000000 [arg 8] : sharpnessFactor = 0.5 */
0x3b086426,		/*   0x3b086426 [arg 9] : attackCoeff = 0.00208116462 */
0x38da7124,		/*   0x38da7124 [arg 10] : decayCoeff = 0.000104161241 */
0x00000000,		/*   0x00000000 [arg 11] : envState = 0.0 */
0x000a000f,		/* PFID_ClassModule_Constructor */
0xbeef0807,		/*            7 [classID = DelayMsec] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000003,		/*            3 [argCount] */
0x00038000,		/*   0x00038000 [wire 0] */
0x00048000,		/*   0x00048000 [wire 1] */
0x41200000,		/*   0x41200000 [arg 0] : 10.0 */
0x00000000,		/*   0x00000000 [arg 1] : 0.0 */
0x00000231,		/*   0x00000231 [arg 2] : 5.87786412e-39 */
0x0006003c,		/* PFID_SetValueSetCall */
0x000a8009,		/*      0xa8009 [Address] */
0x00000000,		/*            0 [value] : 0.000000 */
0x000a8000,		/*      0xa8000 [pModule] */
0x00000200,		/*        0x200 [mask] */
0x0006003c,		/* PFID_SetValueSetCall */
0x000a800a,		/*      0xa800a [Address] */
0x00000000,		/*            0 [value] : 0.000000 */
0x000a8000,		/*      0xa8000 [pModule] */
0x00000400,		/*        0x400 [mask] */
0x00040001,		/* PFID_SetCall */
0x000a0000,		/*   0x000a0000 [Module pointer] */
0xffffffff,		/*   0xffffffff [Mask] */
0x0008000f,		/* PFID_ClassModule_Constructor */
0xbeef0bee,		/*         1006 [classID = AGCMultiplier] */
0x00000102,		/*   0x00000102 [nIO.  numIn=2. numOut=1. numScratch=0] */
0x00000000,		/*            0 [argCount] */
0x00050000,		/*   0x00050000 [wire 0] */
0x00048000,		/*   0x00048000 [wire 1] */
0x00038000,		/*   0x00038000 [wire 2] */
0x0007000f,		/* PFID_ClassModule_Constructor */
0xbeef0c03,		/*         1027 [classID = MaxAbs] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000000,		/*            0 [argCount] */
0x00040000,		/*   0x00040000 [wire 0] */
0x00048000,		/*   0x00048000 [wire 1] */
0x0013000f,		/* PFID_ClassModule_Constructor */
0xbeef0bed,		/*         1005 [classID = AGCLimiterCore] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x0000000c,		/*           12 [argCount] */
0x00048000,		/*   0x00048000 [wire 0] */
0x00050000,		/*   0x00050000 [wire 1] */
0xc0800000,		/*   0xc0800000 [arg 0] : threshold = -4.0 */
0x00000000,		/*   0x00000000 [arg 1] : gain = 0.0 */
0x3f666666,		/*   0x3f666666 [arg 2] : slope = 0.899999976 */
0x40000000,		/*   0x40000000 [arg 3] : kneeDepth = 2.0 */
0x41200000,		/*   0x41200000 [arg 4] : ratio = 10.0 */
0x41200000,		/*   0x41200000 [arg 5] : attackTime = 10.0 */
0x43480000,		/*   0x43480000 [arg 6] : decayTime = 200.0 */
0x00000000,		/*   0x00000000 [arg 7] : currentGain = 0.0 */
0x3f000000,		/*   0x3f000000 [arg 8] : sharpnessFactor = 0.5 */
0x3b086426,		/*   0x3b086426 [arg 9] : attackCoeff = 0.00208116462 */
0x38da7124,		/*   0x38da7124 [arg 10] : decayCoeff = 0.000104161241 */
0x00000000,		/*   0x00000000 [arg 11] : envState = 0.0 */
0x000a000f,		/* PFID_ClassModule_Constructor */
0xbeef0807,		/*            7 [classID = DelayMsec] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000003,		/*            3 [argCount] */
0x00040000,		/*   0x00040000 [wire 0] */
0x00048000,		/*   0x00048000 [wire 1] */
0x41200000,		/*   0x41200000 [arg 0] : 10.0 */
0x00000000,		/*   0x00000000 [arg 1] : 0.0 */
0x00000231,		/*   0x00000231 [arg 2] : 5.87786412e-39 */
0x0006003c,		/* PFID_SetValueSetCall */
0x000d0009,		/*      0xd0009 [Address] */
0x00000000,		/*            0 [value] : 0.000000 */
0x000d0000,		/*      0xd0000 [pModule] */
0x00000200,		/*        0x200 [mask] */
0x0006003c,		/* PFID_SetValueSetCall */
0x000d000a,		/*      0xd000a [Address] */
0x00000000,		/*            0 [value] : 0.000000 */
0x000d0000,		/*      0xd0000 [pModule] */
0x00000400,		/*        0x400 [mask] */
0x00040001,		/* PFID_SetCall */
0x000c8000,		/*   0x000c8000 [Module pointer] */
0xffffffff,		/*   0xffffffff [Mask] */
0x0008000f,		/* PFID_ClassModule_Constructor */
0xbeef0bee,		/*         1006 [classID = AGCMultiplier] */
0x00000102,		/*   0x00000102 [nIO.  numIn=2. numOut=1. numScratch=0] */
0x00000000,		/*            0 [argCount] */
0x00050000,		/*   0x00050000 [wire 0] */
0x00048000,		/*   0x00048000 [wire 1] */
0x00040000,		/*   0x00040000 [wire 2] */
0x0008000f,		/* PFID_ClassModule_Constructor */
0xbeef0814,		/*           20 [classID = Interleave] */
0x00000102,		/*   0x00000102 [nIO.  numIn=2. numOut=1. numScratch=0] */
0x00000000,		/*            0 [argCount] */
0x00038000,		/*   0x00038000 [wire 0] */
0x00040000,		/*   0x00040000 [wire 1] */
0x00028000,		/*   0x00028000 [wire 2] */
0x0007000f,		/* PFID_ClassModule_Constructor */
0xbeef080e,		/*           14 [classID = FloatToFract32] */
0x00000101,		/*   0x00000101 [nIO.  numIn=1. numOut=1. numScratch=0] */
0x00000000,		/*            0 [argCount] */
0x00028000,		/*   0x00028000 [wire 0] */
0x00020000,		/*   0x00020000 [wire 1] */
0x000c000f,		/* PFID_ClassModule_Constructor */
0xbeef0c04,		/*         1028 [classID = Meter] */
0x00010001,		/*   0x00010001 [nIO.  numIn=1. numOut=0. numScratch=1] */
0x00000005,		/*            5 [argCount] */
0x00028000,		/*   0x00028000 [wire 0] */
0x00038000,		/*   0x00038000 [wire 1] */
0x00000012,		/*   0x00000012 [arg 0] : meterType = 18 */
0x42820000,		/*   0x42820000 [arg 1] : attackTime = 65.0 */
0x42820000,		/*   0x42820000 [arg 2] : releaseTime = 65.0 */
0x3cbf5376,		/*   0x3cbf5376 [arg 3] : attackCoeff = 0.023355227 */
0x3cbf5376,		/*   0x3cbf5376 [arg 4] : releaseCoeff = 0.023355227 */
0x00040010,		/* PFID_ClassLayout_Constructor */
0x00000011,		/*           17 [numModules] */
0x00000001,		/*            1 [divider] */
0x0015002f,		/* PFID_AddModuleToLayout */
0x000f8000,		/*   0x000f8000 [Layout address] */
0x00000000,		/*            0 [startIndex] */
0x00058000,		/*   0x00058000 [Module pointer 0] */
0x00060000,		/*   0x00060000 [Module pointer 1] */
0x00068000,		/*   0x00068000 [Module pointer 2] */
0x00070000,		/*   0x00070000 [Module pointer 3] */
0x00080000,		/*   0x00080000 [Module pointer 4] */
0x00088000,		/*   0x00088000 [Module pointer 5] */
0x00090000,		/*   0x00090000 [Module pointer 6] */
0x00098000,		/*   0x00098000 [Module pointer 7] */
0x000a0000,		/*   0x000a0000 [Module pointer 8] */
0x000b0000,		/*   0x000b0000 [Module pointer 9] */
0x000b8000,		/*   0x000b8000 [Module pointer 10] */
0x000c0000,		/*   0x000c0000 [Module pointer 11] */
0x000c8000,		/*   0x000c8000 [Module pointer 12] */
0x000d8000,		/*   0x000d8000 [Module pointer 13] */
0x000e0000,		/*   0x000e0000 [Module pointer 14] */
0x000e8000,		/*   0x000e8000 [Module pointer 15] */
0x000f0000,		/*   0x000f0000 [Module pointer 16] */
0x00020052,		/* PFID_UpdateLookupTable */
0x0002001b,		/* PFID_StartAudio */
};
