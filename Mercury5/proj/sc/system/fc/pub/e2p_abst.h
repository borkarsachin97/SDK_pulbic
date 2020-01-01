/****************************************************************************/
/*  File    : e2p_abst.h                                                    */
/*--------------------------------------------------------------------------*/
/*  Scope   : Abstraction table for E2p access.                             */
/*                                                                          */
/*  Contents:                                                               */
/*                                                                          */
/*                                                                          */
/*  Historical :                                                            */
/*--------------------------------------------------------------------------*/
/*   Date   | Author | Modification                                         */
/*----------+--------+------------------------------------------------------*/


#ifndef __E2P_ABST_H__
#define __E2P_ABST_H__

#include "stdcomp.h"

#ifdef __E2P_ABST_VAR__
#define DefExtern
#else
#define DefExtern extern
#endif


/* Be carefull, the values given to the following defines must have  the range  */
/* of the field in the AbstTable stucture. These defines are useful to identify */
/* a field avoiding padding problems.                                           */
/* Notice that a field should be added only at the end enumeration and no field */
/* should be removed.                                                           */

enum {
      E2P_ABST_VERSHARD,
      E2P_ABST_VERSSOFT,
      E2P_ABST_DESKEY,
      E2P_ABST_TP_MR,
      E2P_ABST_CAP_MEM,
      E2P_ABST_RTKMBXSTATE,
      E2P_ABST_RTKTASKSTATE,
      E2P_ABST_DIAGSTATE,
      E2P_ABST_E2PTSTPATTERN,
      E2P_ABST_IMEI,
      E2P_ABST_MSCM2,
      E2P_ABST_E2PNETMODE,
      E2P_ABST_IMSI,
      E2P_ABST_UNANSWCALLCNT,
      E2P_ABST_LASTCALLTIME,
      E2P_ABST_TOTALCALLTIME,
      E2P_ABST_SMSCBSTAT,
      E2P_ABST_LOCKPWD,
      E2P_ABST_FUNCPWD,
      E2P_ABST_SETTINGS,
      E2P_ABST_LANGUAGE,
      E2P_ABST_GREETING,
      E2P_ABST_E2PLND,
      E2P_ABST_ADRSC,
      E2P_ABST_LNDSTACK,
      E2P_ABST_BATTLEV1,
      E2P_ABST_BATTLEV2,
      E2P_ABST_BATTLEV3,
      E2P_ABST_V24_SERIALON,
      E2P_ABST_V24_SPEED,
      E2P_ABST_V24_OPTIONS,
      E2P_ABST_NBERRORSTORED,
      E2P_ABST_FIRSTERRORSTORED,
      E2P_ABST_REPORT,
      E2P_ABST_VOICEMAIL,
      E2P_ABST_MISSEDINDEX,
      E2P_ABST_MISSEDCALLS,
      E2P_ABST_MODEM,
      E2P_ABST_ONTIME,
      E2P_ABST_V24_NOMINALMODE,
      E2P_ABST_RR_SCANMODE,
      E2P_ABST_NEWMSGIND,
      E2P_ABST_SMPDU,
      E2P_ABST_SMVP,
      E2P_ABST_SMPID,
      E2P_ABST_SMDCS,
      E2P_ABST_IDXBATTTRC,
      E2P_ABST_BATTERYTRACE,
      E2P_ABST_REPORTSS,
      E2P_ABST_E2PCHKSUMWRITTEN,
      E2P_ABST_E2PCHKSUM,
      E2P_ABST_L1CNBWAKEFRAME,
      E2P_ABST_L1CNBSLEEPFRAME,
      E2P_ABST_L1CNBTXFRAME,
      E2P_ABST_MODEM2,
      E2P_ABST_ANTENNAGAIN,
      E2P_ABST_NCKPWD     ,
      E2P_ABST_SCKPWD     ,
      E2P_ABST_SRCKPWD    ,
      E2P_ABST_NETSTR      ,
      E2P_ABST_SBNETSTR    ,
      E2P_ABST_NETATTEMPT ,
      E2P_ABST_SMSCONVTAB,
      E2P_ABST_V24_FRAMING,
      E2P_ABST_PRODNUMBER,
      E2P_ABST_LASTCALLPARTY,
      E2P_ABST_SURPRISE,
      E2P_ABST_AOCCCM,
      E2P_ABST_MONOBAND,
      E2P_ABST_MSCM3,
      E2P_ABST_ATRETCODE,
      E2P_ABST_CONTRAST,
      E2P_ABST_SMFO,
      E2P_ABST_L1CNBDCPLGFRAME,
      E2P_ABST_CUGINFO,
      E2P_ABST_CUGINDEX,
      E2P_ABST_PRODTESTRES,
      E2P_ABST_V24_EXTOPTIONS,
      E2P_ABST_RTCALARM,
      E2P_ABST_ALARM,
      E2P_ABST_WEEK_ALARM,
      E2P_ABST_ATWIND,
      E2P_ABST_ECHOCANTAPS,
      E2P_ABST_SWITCHATTENUATION,
      E2P_ABST_ECHOCANDBTS,
      E2P_ABST_ECHOCANFARS,
      E2P_ABST_ECHOCANDELAY,
      E2P_ABST_BATTERYLEVEL,
      E2P_ABST_BEARERCFG,
      E2P_ABST_IRACTIVE,
      E2P_ABST_IRDISCTIME,
      E2P_ABST_IRMAXTAT,
      E2P_ABST_IRPREAMBTH,
      E2P_ABST_DIALLINGDELAY,
      E2P_ABST_DATACOMPRESS,
      E2P_ABST_DATAPARAM,
      E2P_ABST_ATMODE,
      E2P_ABST_BEARTYPEPREF,
      E2P_ABST_STLKTERMPROF,
      E2P_ABST_STLKACTSTATUS,
      E2P_ABST_BEFDIALTONE,
      E2P_ABST_ENABLEDFTR,
      E2P_ABST_DATASECURITY,
      E2P_ABST_ECHOCANCONVTH,
      E2P_ABST_SWITCHA_VOLOUT,
      E2P_ABST_SWITCHA_STEP,
      E2P_ABST_SWITCHA_PCMTHREL,
      E2P_ABST_SWITCHA_PCMTHMAX,
      E2P_ABST_SWITCHA_ECGAIN,
      E2P_ABST_EXTENDEDCAPABILITY,
      E2P_ABST_EXHAUSTIVEPLMNSEARCH,
      E2P_ABST_GREETING2,
      E2P_ABST_SETTINGSEXT,
      E2P_ABST_E2PMIRROR,
      E2P_ABST_WMICGAIN,
      E2P_ABST_IMEISV,
      E2P_ABST_ADCBATCOEFF,
      E2P_ABST_ADCCOEFF,
      E2P_ABST_ME_LOCK_DATA,
      E2P_ABST_STLK_TIMEOUT_CFG,
      E2P_ABST_MSCLASS,       /* GPRS parameter */
      E2P_ABST_MSNWKCAP,      /* GPRS parameter */
      E2P_ABST_MSRADIOCAP,    /* GPRS parameter */
      E2P_ABST_DRXPARAM,      /* GPRS parameter */
      E2P_ABST_SPECIALRFBEGINNINGCANAL,
      E2P_ABST_SPECIALRFENDCANAL,
      E2P_ABST_SPECIALRFPOWERLEVOFFSET,
      E2P_ABST_SPECIALRFTXLEV,
      E2P_ABST_SERIAL_NUMBER,
      E2P_ABST_BUILD_LEVEL,
      E2P_ABST_PROCESS_HIST,
      E2P_ABST_TEST_REPAIR_HIST,
      E2P_ABST_CUSTOMER_REPAIR_HIST,
      E2P_ABST_HW_VARIANTS,
      E2P_ABST_TIME_MANUFAC,
      E2P_ABST_TIME_FT,
      E2P_ABST_TIME_PACK,
      E2P_ABST_ECHOCANCELPARAM1,
      E2P_ABST_ECHOCANCELPARAM2,
      E2P_ABST_ECHOCANCELPARAM3,
      E2P_ABST_ECHOCANCELPARAM4,
      E2P_ABST_ECHOCANCELPARAM5,
      E2P_ABST_ECHOCANCELPARAM6,
      E2P_ABST_ECHOCANCELPARAM7,
      E2P_ABST_ECHOCANCELINFOS,
      E2P_ABST_WRITECYCLE,
      E2P_ABST_GDIAGSTATE,    /* GPRS parameter */
      E2P_ABST_ORIGINALRATEMANT,
      E2P_ABST_FOREIGNRATEMANT,
      E2P_ABST_ORIGINALRATEEXP,
      E2P_ABST_FOREIGNRATEEXP,
      E2P_ABST_SETTING_MODE,
      E2P_ABST_SIGNATURE_PCK,
      E2P_ABST_SIGNATURE_NCK,
      E2P_ABST_SIGNATURE_NSCK,
      E2P_ABST_SIGNATURE_SPCK,
      E2P_ABST_SIGNATURE_CCK,
      E2P_ABST_SIGNATURE_PARAM,
      E2P_ABST_CUSTOM_FLAGS,
      E2P_ABST_SMSCB_CUSTOM_FLAGS,
      E2P_ABST_TIMEDELTATEMPMEAS,
      E2P_ABST_MAXDELTAE2PVOLT,
      E2P_ABST_VOLTAGELEVELHYSTERESIS,
      E2P_ABST_BATTERYMEASURETIMEOUT,
      E2P_ABST_MAXADCDELTATEMP,
      E2P_ABST_BATTERYPULSEFULLTIMEOUT,
      E2P_ABST_BATTERYSECURITYWAITTIMEOUT,
      E2P_ABST_DEDICATEDFIRSTCHARGETIMEOUT,
      E2P_ABST_BATTERYPULSECHARGINGTIMEOUT,
      E2P_ABST_BATTERYFASTCHARGINGTIMEOUT,
      E2P_ABST_FASTCHARGEBATTERYSTATUSTIMEOUT,
      E2P_ABST_BATTERYPULSETIMEOUT,
      E2P_ABST_MINVOLT,
      E2P_ABST_MAXVOLT,
      E2P_ABST_MAXVOLTPULSE,
      E2P_ABST_BATTLEV,
      E2P_ABST_MAXBATTERYTEMP,
      E2P_ABST_MINBATTERYTEMP,
      E2P_ABST_CTNTEMP1,
      E2P_ABST_CTNTEMP2,
      E2P_ABST_VOLTAGEDROPBEFORERECHARGE,
      E2P_ABST_CHARGINGCURRENT,
      E2P_ABST_STARTCHARGEDEDICATEDVOLT,
      E2P_ABST_MAXDEDICATEDVOLT,
      E2P_ABST_DEDICATEDFIRSTCHARGETHRESHOLD,
      E2P_ABST_BATTERYINTERNALRESISTOR,
      E2P_ABST_ORIGINALNAME,
      E2P_ABST_FOREIGNNAME, 
      E2P_ABST_TERMPROFILELEN,
      E2P_ABST_ATCPHSFTR,      
      E2P_ABST_EXTENDED_DIAGSTATE,
      E2P_ABST_SIM_TIMER_FIX,
      E2P_ABST_PRODNUMBERBIS,
      E2P_ABST_ADCBATOFFSETCOEFF,
      E2P_ABST_ADCOFFSETCOEFF,
      E2P_ABST_CUSTOMER,                                    
      E2P_ABST_LCDPARAMS,                                    
      E2P_ABST_GPIOINOUT,
      E2P_ABST_GPIODEFVALUES,
      E2P_ABST_STATUSREPORT,
      E2P_ABST_OPENCTRL,
      E2P_ABST_SIM_POLINT_TIMER,
      E2P_ABST_LOCK_CNL_1,
      E2P_ABST_LOCK_CNL_2,
      E2P_ABST_LOCK_CNL_3,
      E2P_ABST_LOCK_CNL_4,
      E2P_ABST_SIMRESTCOUNTER,
      E2P_ABST_PRODARFCN,
      E2P_ABST_I2CCONFIG,
      E2P_ABST_SPICONFIG,
      E2P_ABST_LCDPARAMS2,
      E2P_ABST_ECHOPARAM1,
      E2P_ABST_ECHOPARAM2,
      E2P_ABST_ECHOPARAM3,
      E2P_ABST_ECHOPARAM4,
      E2P_ABST_SPKPHONEMICGAIN,
      E2P_ABST_SPKPHONESPKGAIN,
      E2P_ABST_ECHOCANCELALG,
      E2P_ABST_CUSTOMBITFIELD,
      E2P_ABST_LEDCOLOUR,
      E2P_ABST_V24_UART2_FRAMING,
      E2P_ABST_V24_UART2_SPEED,
      E2P_ABST_V24_UART2_OPTIONS,
      E2P_ABST_V24_UART2_EXTOPTIONS,
      E2P_ABST_RADIOTYPE,
      E2P_ABST_HARDCAPABILITY,
      E2P_ABST_REQUIREDPATCHES,
      E2P_ABST_BOARDGAIN_GSM900,
      E2P_ABST_BOARDGAIN_DCS1800,
      E2P_ABST_BOARDGAIN_PCS1900,
      E2P_ABST_BOARDGAIN_GSM850,
      E2P_ABST_IQ_VOLTAGEORDER,
      E2P_ABST_TXRAMPPARAM_GSM900,
      E2P_ABST_TXRAMPPARAM_DCS1800,
      E2P_ABST_TXRAMPPARAM_PCS1900,
      E2P_ABST_TXRAMPPARAM_GSM850,
      E2P_ABST_TXPWRMINBASE,
      E2P_ABST_TXRAMPSTARTBASE,
      E2P_ABST_TXRAMPSTOPBASE,
      E2P_ABST_TXRAMPUPNBPTS,
      E2P_ABST_TXRAMPDWNNBPTS,
      E2P_ABST_TXRAMPUPNBNULLPTS,
      E2P_ABST_TXRAMPDWNNBNULLPTS,
      E2P_ABST_TXEN1STARTBASE,
      E2P_ABST_TXEN1STOPBASE,
      E2P_ABST_TXEN2START,
      E2P_ABST_TXEN2STOP,
      E2P_ABST_TXFREQOFFSET_GSM900,
      E2P_ABST_TXFREQOFFSET_DCS1800,
      E2P_ABST_TXFREQOFFSET_PCS1900,
      E2P_ABST_TXFREQOFFSET_GSM850,
      E2P_ABST_MASKPCLTXFREQOFFSET_GSM900,
      E2P_ABST_MASKPCLTXFREQOFFSET_DCS1800,
      E2P_ABST_MASKPCLTXFREQOFFSET_PCS1900,
      E2P_ABST_MASKPCLTXFREQOFFSET_GSM850,
      E2P_ABST_TAOFFSET_GSM900,
      E2P_ABST_TAOFFSET_DCS1800,
      E2P_ABST_TAOFFSET_PCS1900,
      E2P_ABST_TAOFFSET_GSM850,
      E2P_ABST_FACCHTHRES,
      E2P_ABST_FSBFITHRES,
      E2P_ABST_EFSBFITHRES,
      E2P_ABST_HSBFITHRES,
      E2P_ABST_AFSBFITHRES,
      E2P_ABST_AHSBFITHRES,
      E2P_ABST_HRUFITHRES,
      E2P_ABST_AMRDFITHRES,
      E2P_ABST_USFMETRICCS1THRES,
      E2P_ABST_USFMETRICCS24THRES,
      E2P_ABST_USFMETRICE14THRES,
      E2P_ABST_USFMETRICE59THRES,
      E2P_ABST_ROUGHDACVALUE,
      E2P_ABST_ROUGHDACSTEPVALUE,
      E2P_ABST_ROUGHDACOFFSET,
      E2P_ABST_NBROUGHDACVALUE,
      E2P_ABST_THINDACSUM,
      E2P_ABST_RF_PARAM1,
      E2P_ABST_RF_PARAM2,
      E2P_ABST_RF_PARAM3,
      E2P_ABST_RF_PARAM4,
      E2P_ABST_AUDIOCTRL,
      E2P_ABST_AUDIOHPFILTERTABLE,
      E2P_ABST_AUDIOLPFILTERTABLE,
      E2P_ABST_AUDIOHFTABLE,
      E2P_ABST_AUDIO3TABLE,
      E2P_ABST_AUDIOACTABLE,
      E2P_ABST_AUDIOMMITABLE,
      E2P_ABST_AUDIOLSTABLE,
      E2P_ABST_AUDIODSPGAIN,
      E2P_ABST_AUDIOSPEAKERGAIN,
      E2P_ABST_AUDIOFIRCOEFF,
      E2P_ABST_AUDIOLOOPTEST,
      E2P_ABST_SPEED_PROFILE_CONFIG,
      E2P_ABST_SIZE               /* Should remain as last record. */
     };

     
#ifdef __arm

#define OLD_ABST_PARAM                    0
#define PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT 0

DefExtern const u16 e2p_AbstTable [E2P_ABST_SIZE]

#ifdef __E2P_ABST_VAR__

= {
   offsetof (Eeprom_t, GsmStack.VersHard),
   offsetof (Eeprom_t, GsmStack.VersSoft),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.RtkMbxState),
   offsetof (Eeprom_t, GsmStack.RtkTaskState),
   offsetof (Eeprom_t, GsmStack.DiagState),
   offsetof (Eeprom_t, GsmStack.E2pTstPattern),
   offsetof (Eeprom_t, GsmStack.Imei),
   offsetof (Eeprom_t, GsmStack.MsCm2),
   offsetof (Eeprom_t, GsmStack.E2pNetMode),
   offsetof (Eeprom_t, GsmStack.Imsi),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.ProdData1),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.v24_SerialOn),
   offsetof (Eeprom_t, GsmStack.v24_Speed),
   offsetof (Eeprom_t, GsmStack.v24_Options),
   offsetof (Eeprom_t, NbErrorStored),
   offsetof (Eeprom_t, FirstErrorStored),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.v24_NominalMode),
   offsetof (Eeprom_t, GsmStack.rr_ScanMode),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.E2pChkSumWritten),
   offsetof (Eeprom_t, GsmStack.E2pChkSum),
   offsetof (Eeprom_t, GsmStack.L1cNbWakeFrame),
   offsetof (Eeprom_t, GsmStack.L1cNbSleepFrame),
   offsetof (Eeprom_t, GsmStack.L1cNbTxFrame),
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.AntennaGain),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.v24_Framing),
   offsetof (Eeprom_t, GsmStack.ProdNumber),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.MonoBand),
   offsetof (Eeprom_t, GsmStack.MsCm3),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.L1cNbDcPlgFrame),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.v24_ExtOptions),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.BearerCfg),
   offsetof (Eeprom_t, GsmStack.IrActive),
   offsetof (Eeprom_t, GsmStack.IrDiscTime),
   offsetof (Eeprom_t, GsmStack.IrMaxTat),
   offsetof (Eeprom_t, GsmStack.IrPreambTh),
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.DataCompress),
   offsetof (Eeprom_t, GsmStack.DataParam),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.EnabledFtr),
   offsetof (Eeprom_t, GsmStack.DataSecurity),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.ExtendedCapability),
   offsetof (Eeprom_t, GsmStack.ExhaustivePlmnSearch),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.E2pMirror),
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.ImeiSV),
   offsetof (Eeprom_t, GsmStack.AdcBatCoeff),
   offsetof (Eeprom_t, GsmStack.AdcCoeff),
   offsetof (Eeprom_t, GsmStack.MeLockData),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM /* goffsetof(Eeprom_t, Gprs.MsNwkCap) */,
   OLD_ABST_PARAM /* goffsetof(Eeprom_t, Gprs.MsRadioCap) */,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.e2p_WriteCycle),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.SignaturePck),
   offsetof (Eeprom_t, GsmStack.SignatureNck),
   offsetof (Eeprom_t, GsmStack.SignatureNsck),
   offsetof (Eeprom_t, GsmStack.SignatureSpck),
   offsetof (Eeprom_t, GsmStack.SignatureCck),
   offsetof (Eeprom_t, GsmStack.SignatureParam),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.ExtendedDiagState),
   offsetof (Eeprom_t, GsmStack.SimTimerFix),
   offsetof (Eeprom_t, GsmStack.ProdNumberBis),
   offsetof (Eeprom_t, GsmStack.AdcBatOffsetCoeff),
   offsetof (Eeprom_t, GsmStack.AdcOffsetCoeff),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.SimPolIntTimer),
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,
   OLD_ABST_PARAM,    
   offsetof (Eeprom_t, GsmStack.ProdArfcn),
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,     
   PARAM_NOT_AVAILABLE_FOR_OPEN_SOFT,  
   offsetof (Eeprom_t, GsmStack.v24_Uart2Framing),
   offsetof (Eeprom_t, GsmStack.v24_Uart2Speed),
   offsetof (Eeprom_t, GsmStack.v24_Uart2Options),
   offsetof (Eeprom_t, GsmStack.v24_Uart2ExtOptions),
   offsetof (Eeprom_t, GsmStack.RadioType),
   offsetof (Eeprom_t, GsmStack.HardCapability),
   offsetof (Eeprom_t, GsmStack.RequiredPatches),
   offsetof (Eeprom_t, GsmStack.BoardGain_GSM900),
   offsetof (Eeprom_t, GsmStack.BoardGain_DCS1800),
   offsetof (Eeprom_t, GsmStack.BoardGain_PCS1900),
   offsetof (Eeprom_t, GsmStack.BoardGain_GSM850),
//   offsetof (Eeprom_t, GsmStack.IQ_VoltageOrder),
   OLD_ABST_PARAM,
   offsetof (Eeprom_t, GsmStack.TxRampParam_GSM900),
   offsetof (Eeprom_t, GsmStack.TxRampParam_DCS1800),
   offsetof (Eeprom_t, GsmStack.TxRampParam_PCS1900),
   //offsetof (Eeprom_t, GsmStack.TxRampParam_GSM850),
   offsetof (Eeprom_t, GsmStack.TxPwrMinBase),
   offsetof (Eeprom_t, GsmStack.TxRampStartBase),
   offsetof (Eeprom_t, GsmStack.TxRampStopBase),
   offsetof (Eeprom_t, GsmStack.TxRampUpNbPts),
   offsetof (Eeprom_t, GsmStack.TxRampDwnNbPts),
   offsetof (Eeprom_t, GsmStack.TxRampUpNbNullPts),
   offsetof (Eeprom_t, GsmStack.TxRampDwnNbNullPts),
   offsetof (Eeprom_t, GsmStack.TxEn1StartBase),
   offsetof (Eeprom_t, GsmStack.TxEn1StopBase),
   offsetof (Eeprom_t, GsmStack.TxEn2Start),
   offsetof (Eeprom_t, GsmStack.TxEn2Stop),
   offsetof (Eeprom_t, GsmStack.TxFreqOffset_GSM900),
   offsetof (Eeprom_t, GsmStack.TxFreqOffset_DCS1800),
   offsetof (Eeprom_t, GsmStack.TxFreqOffset_PCS1900),
   offsetof (Eeprom_t, GsmStack.TxFreqOffset_GSM850),
   offsetof (Eeprom_t, GsmStack.MaskPclTxFreqOffset_GSM900),
   offsetof (Eeprom_t, GsmStack.MaskPclTxFreqOffset_DCS1800),
   offsetof (Eeprom_t, GsmStack.MaskPclTxFreqOffset_PCS1900),
   offsetof (Eeprom_t, GsmStack.MaskPclTxFreqOffset_GSM850),
   offsetof (Eeprom_t, GsmStack.TaOffset_GSM900),
   offsetof (Eeprom_t, GsmStack.TaOffset_DCS1800),
   offsetof (Eeprom_t, GsmStack.TaOffset_PCS1900),
   offsetof (Eeprom_t, GsmStack.TaOffset_GSM850),
   offsetof (Eeprom_t, GsmStack.FacchThres),
   offsetof (Eeprom_t, GsmStack.FSBfiThres),
   offsetof (Eeprom_t, GsmStack.EFSBfiThres),
   offsetof (Eeprom_t, GsmStack.HSBfiThres),
   offsetof (Eeprom_t, GsmStack.AFSBfiThres),
   offsetof (Eeprom_t, GsmStack.AHSBfiThres),
   offsetof (Eeprom_t, GsmStack.HRUfiThres),
   offsetof (Eeprom_t, GsmStack.AMRDfiThres),
   offsetof (Eeprom_t, GsmStack.USFMetricCS1Thres),
   offsetof (Eeprom_t, GsmStack.USFMetricCS24Thres),
   offsetof (Eeprom_t, GsmStack.USFMetricE14Thres),
   offsetof (Eeprom_t, GsmStack.USFMetricE59Thres),
   offsetof (Eeprom_t, GsmStack.RoughDacValue),
   offsetof (Eeprom_t, GsmStack.RoughDacStepValue),
   offsetof (Eeprom_t, GsmStack.RoughDacOffset),
   offsetof (Eeprom_t, GsmStack.NbRoughDacValue),
   offsetof (Eeprom_t, GsmStack.RoughDacSum),
   offsetof (Eeprom_t, GsmStack.Rf_Param1),
   offsetof (Eeprom_t, GsmStack.Rf_Param2),
   offsetof (Eeprom_t, GsmStack.Rf_Param3),
   offsetof (Eeprom_t, GsmStack.Rf_Param4),
   offsetof (Eeprom_t, GsmStack.AudioCtrl),
   offsetof (Eeprom_t, GsmStack.AudioHPFilterTable),
   offsetof (Eeprom_t, GsmStack.AudioLPFilterTable),
   offsetof (Eeprom_t, GsmStack.AudioHFTable),
   offsetof (Eeprom_t, GsmStack.Audio3Table),
   offsetof (Eeprom_t, GsmStack.AudioACTable),
   offsetof (Eeprom_t, GsmStack.AudioMMITable),
   offsetof (Eeprom_t, GsmStack.AudioLSTable),
   offsetof (Eeprom_t, GsmStack.AudioDspGain),
   offsetof (Eeprom_t, GsmStack.AudioSpeakerGain),
   offsetof (Eeprom_t, GsmStack.AudioFirCoeff),
   offsetof (Eeprom_t, GsmStack.AudioLoopTest),    
   offsetof (Eeprom_t, GsmStack.SpeedProfileConfig)
  }
#endif
;

#endif /* arm */


#undef DefExtern
#endif