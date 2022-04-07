/*
 * day4_helicopter_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "day4_helicopter".
 *
 * Model version              : 11.18
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Tue Apr  5 19:25:33 2022
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_card),
  sizeof(t_task)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_card",
  "t_task"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&day4_helicopter_B.TravelCounttorad), 0, 0, 17 }
  ,

  { (char_T *)(&day4_helicopter_DW.HILInitialize_AIMinimums[0]), 0, 0, 70 },

  { (char_T *)(&day4_helicopter_DW.HILInitialize_Card), 14, 0, 1 },

  { (char_T *)(&day4_helicopter_DW.HILReadEncoderTimebase_Task), 15, 0, 1 },

  { (char_T *)(&day4_helicopter_DW.Scope1_PWORK.LoggedData[0]), 11, 0, 19 },

  { (char_T *)(&day4_helicopter_DW.HILInitialize_ClockModes[0]), 6, 0, 46 },

  { (char_T *)(&day4_helicopter_DW.HILInitialize_POSortedChans[0]), 7, 0, 8 },

  { (char_T *)(&day4_helicopter_DW.FromWorkspace_IWORK.PrevIndex), 10, 0, 3 },

  { (char_T *)(&day4_helicopter_DW.If_ActiveSubsystem), 2, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  9U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&day4_helicopter_P.K[0]), 0, 0, 21 },

  { (char_T *)(&day4_helicopter_P.HILWriteAnalog_channels[0]), 7, 0, 2 },

  { (char_T *)(&day4_helicopter_P.HILInitialize_OOTerminate), 0, 0, 48 },

  { (char_T *)(&day4_helicopter_P.HILInitialize_CKChannels[0]), 6, 0, 10 },

  { (char_T *)(&day4_helicopter_P.HILInitialize_AIChannels[0]), 7, 0, 37 },

  { (char_T *)(&day4_helicopter_P.HILInitialize_Active), 8, 0, 37 },

  { (char_T *)(&day4_helicopter_P.HILReadEncoderTimebase_Overflow), 3, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  7U,
  rtPTransitions
};

/* [EOF] day4_helicopter_dt.h */
