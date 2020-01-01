//------------------------------------------------------------------------------
//
//  File        : component_cfg.h
//  Description : Header file of Component configuration
//  Author      : Eroy
//  Revision    : 0.1
//
//------------------------------------------------------------------------------

#ifndef _COMPONENT_CFG_H_
#define _COMPONENT_CFG_H_

//==============================================================================
//
//                              INCLUDE FILE
//
//==============================================================================

#include "lib_retina.h"
#include "mmp_component_ctl.h"

//==============================================================================
//
//                              MACRO DEFINE
//
//==============================================================================

#define ONLY_ONE_COMP_IDX       (0)

#define TOTAL_RAWS_COMP_NUM     (1) //1: Use RAWS_COMP_IDX. 2: Use RAWS_COMP_IDX and RAWS_COMP_IDX2
#define RAWS_COMP_IDX           (1) // sync with SENSOR_CHANNEL_NUM
#define RAWS_COMP_IDX2          (2) // for MIPI VC or BT656 second channel (Usually RAWS_COMP_IDX+1)

#define VIDEO_PLAYBACK_USE_PIP  (1)
#define	COMPONENT_MAX_OUT_PORT  (5)

//==============================================================================
//
//                              ENUMERATION
//
//==============================================================================

typedef enum _COMPONEMT_SCRIPT_TYPE
{
    /* PCAM */
    COMPO_SCRIPT_PURE_PCAM_PRM_SRC = 0,
    COMPO_SCRIPT_PCAM_DUAL_STREAM_SRC,
    COMPO_SCRIPT_PCAM_PRM_YUV422,
    COMPO_SCRIPT_PCAM_PRM_H264,
    COMPO_SCRIPT_PCAM_PRM_MJPEG,
    COMPO_SCRIPT_PCAM_PRM_MJPEG_2ND,
    COMPO_SCRIPT_PCAM_SCD_YUV422,
    COMPO_SCRIPT_PCAM_SCD_H264,
    COMPO_SCRIPT_PCAM_SCD_MJPEG,
    /* VR : No Rotate Preview Flow */
    COMPO_SCRIPT_VR_N_PREV_PRM_BAYER_SRC,
    COMPO_SCRIPT_VR_N_PREV_PRM_BAYER_FULL,
    COMPO_SCRIPT_VR_N_PREV_PRM_BAYER_PIP,
    COMPO_SCRIPT_VR_N_PREV_SCD_ANADEC_SRC,
    COMPO_SCRIPT_VR_N_PREV_SCD_ANADEC_FULL,
    COMPO_SCRIPT_VR_N_PREV_SCD_ANADEC_PIP,
    COMPO_SCRIPT_VR_N_PREV_SCD_BAYER_SRC,
    COMPO_SCRIPT_VR_N_PREV_SCD_BAYER_FULL,
    COMPO_SCRIPT_VR_N_PREV_SCD_BAYER_PIP,
    COMPO_SCRIPT_VR_N_PREV_USBH_SRC,
    COMPO_SCRIPT_VR_N_PREV_USBH_FULL,
    COMPO_SCRIPT_VR_N_PREV_USBH_PIP,
    /* VR : Rotate Preview Flow */
    COMPO_SCRIPT_VR_R_PREV_PRM_RAW_SRC,
    COMPO_SCRIPT_VR_R_PREV_PRM_BAYER_SRC,
    COMPO_SCRIPT_VR_R_PREV_PRM_RAW_FULL,
    COMPO_SCRIPT_VR_R_PREV_PRM_BAYER_FULL,
    COMPO_SCRIPT_VR_R_PREV_PRM_BAYER_PIP,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_SRC,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_SRC_2IN1_TEST,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_SRC_2IN1_INA,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_SRC_2IN2_RAW1,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_SRC_2IN2_RAW2,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_SRC_2IN1_INB,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_FULL,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_PIP,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_2IN1_INA,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_2IN1_INB,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_FULL_2IN1_OUT,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_PIP_2IN1_OUT,
    COMPO_SCRIPT_VR_R_PREV_SCD_ANADEC_PIP_2IN2_OUT,
    COMPO_SCRIPT_VR_R_PREV_SCD_BAYER_SRC,
    COMPO_SCRIPT_VR_R_PREV_SCD_BAYER_FULL,
    COMPO_SCRIPT_VR_R_PREV_SCD_BAYER_PIP,
    COMPO_SCRIPT_VR_R_PREV_USBH_SRC,
    COMPO_SCRIPT_VR_R_PREV_USBH_FULL,
    COMPO_SCRIPT_VR_R_PREV_USBH_PIP,
    /* VR : Record/Streaming/Capture Flow */
    COMPO_SCRIPT_VR_PRM_ANADEC_RECD_RAW1,
    COMPO_SCRIPT_VR_PRM_ANADEC_THUMB_RAW1,
    COMPO_SCRIPT_VR_PRM_ANADEC_RECD_SCAL_OSD_RAW1,
    COMPO_SCRIPT_VR_PRM_BAYER_RECD,
    COMPO_SCRIPT_VR_PRM_BAYER_H264_WIFI,
    COMPO_SCRIPT_VR_PRM_BAYER_CAPTURE,
    COMPO_SCRIPT_VR_PRM_BAYER_THUMB,
    COMPO_SCRIPT_VR_SHARE_RECD_SCAL_OSD,
    COMPO_SCRIPT_VR_SHARE_RECD,
    COMPO_SCRIPT_VR_SHARE_CAPTURE,
    COMPO_SCRIPT_VR_SHARE_THUMB,
    COMPO_SCRIPT_VR_SCD_ANADEC_RECD_SCAL_OSD,
    COMPO_SCRIPT_VR_SCD_ANADEC_RECD_SCAL_OSD_2IN1_INA,
    COMPO_SCRIPT_VR_SCD_ANADEC_RECD_SCAL_OSD_2IN1_INB,
    COMPO_SCRIPT_VR_SCD_ANADEC_RECD_SCAL_OSD_2IN1_OUT,
    COMPO_SCRIPT_VR_SCD_ANADEC_RECD_SCAL_OSD_2IN2_OUT,
    COMPO_SCRIPT_VR_SCD_ANADEC_RECD,
    COMPO_SCRIPT_VR_SCD_ANADEC_H264_WIFI,
    COMPO_SCRIPT_VR_SCD_ANADEC_MJPEG_WIFI,
    COMPO_SCRIPT_VR_SCD_ANADEC_CAPTURE,
    COMPO_SCRIPT_VR_SCD_ANADEC_THUMB,
    COMPO_SCRIPT_VR_SCD_BAYER_RECD,
    COMPO_SCRIPT_VR_SCD_BAYER_CAPTURE,
    COMPO_SCRIPT_VR_SCD_BAYER_THUMB,
    COMPO_SCRIPT_VR_USBH_RECD_SCAL_OSD,
	COMPO_SCRIPT_VR_USBH_UVC_RECD_SCAL_OSD,
    COMPO_SCRIPT_VR_USBH_RECD,
	COMPO_SCRIPT_VR_USBH_UVC_RECD,
    COMPO_SCRIPT_VR_USBH_H264_WIFI,
    COMPO_SCRIPT_VR_USBH_MJPEG_WIFI,
    COMPO_SCRIPT_VR_USBH_CAPTURE,
    COMPO_SCRIPT_VR_USBH_THUMB,
    /* DSC : No Rotate Preview Flow */
    COMPO_SCRIPT_DSC_N_PREV_PRM_SRC,
    COMPO_SCRIPT_DSC_N_PREV_PRM_FULL,
    COMPO_SCRIPT_DSC_N_PREV_PRM_PIP,
    COMPO_SCRIPT_DSC_N_PREV_SCD_ANADEC_SRC,
    COMPO_SCRIPT_DSC_N_PREV_SCD_ANADEC_FULL,
    COMPO_SCRIPT_DSC_N_PREV_SCD_ANADEC_PIP,
    COMPO_SCRIPT_DSC_N_PREV_USBH_SRC,
    COMPO_SCRIPT_DSC_N_PREV_USBH_FULL,
    COMPO_SCRIPT_DSC_N_PREV_USBH_PIP,
    /* DSC : Rotate Preview Flow */
    COMPO_SCRIPT_DSC_R_PREV_PRM_SRC,
    COMPO_SCRIPT_DSC_R_PREV_PRM_RAW_SRC,
    COMPO_SCRIPT_DSC_R_PREV_PRM_FULL,
    COMPO_SCRIPT_DSC_R_PREV_PRM_PIP,
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_SRC,
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_2IN1_INA,//LEI.QIN
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_2IN1_INB,
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_SRC_2IN1_INA,//LEI.QIN
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_SRC_2IN1_INB,
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_SRC_2IN2_RAW1,
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_FULL,
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_PIP,
    COMPO_SCRIPT_DSC_R_PREV_SCD_ANADEC_PIP_2IN1_OUT,
    COMPO_SCRIPT_DSC_R_PREV_SCD_BAYER_SRC,
    COMPO_SCRIPT_DSC_R_PREV_SCD_BAYER_FULL,
    COMPO_SCRIPT_DSC_R_PREV_SCD_BAYER_PIP,
    COMPO_SCRIPT_DSC_R_PREV_USBH_SRC,
    COMPO_SCRIPT_DSC_R_PREV_USBH_FULL,
    COMPO_SCRIPT_DSC_R_PREV_USBH_PIP,
    /* DSC : Capture/Streaming Flow */
    COMPO_SCRIPT_DSC_PRM_CAPTURE,
    COMPO_SCRIPT_DSC_PRM_CAPTURE_RAW1,
    COMPO_SCRIPT_DSC_PRM_CAPTURE_THUMB,
    COMPO_SCRIPT_DSC_PRM_CAPTURE_THUMB_RAW1,
    COMPO_SCRIPT_DSC_PRM_H264_WIFI,
    COMPO_SCRIPT_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN1_OUT,//
    COMPO_SCRIPT_DSC_SCD_ANADEC_CAPT_SCAL_OSD,
    COMPO_SCRIPT_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN2_RAW1,
    COMPO_SCRIPT_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN2_RAW2,
    COMPO_SCRIPT_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN1_INA,//lei.qin
    COMPO_SCRIPT_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN1_INB,//
    COMPO_SCRIPT_DSC_SCD_ANADEC_CAPTURE,
    COMPO_SCRIPT_DSC_SCD_ANADEC_CAPTURE_THUMB,
    COMPO_SCRIPT_DSC_SCD_ANADEC_H264_WIFI,
    COMPO_SCRIPT_DSC_SCD_BAYER_CAPTURE,
    COMPO_SCRIPT_DSC_SCD_BAYER_CAPTURE_THUMB,
    COMPO_SCRIPT_DSC_USBH_CAPT_SCAL_OSD,
    COMPO_SCRIPT_DSC_USBH_H264_WIFI,
    /* Playback Mode */
    COMPO_SCRIPT_JPG_PB_N,
    COMPO_SCRIPT_JPG_PB_R,
    COMPO_SCRIPT_JPG_PB_RESCALE_N,
    COMPO_SCRIPT_JPG_PB_RESCALE_R,
    COMPO_SCRIPT_MOVIE_PB_N,
    COMPO_SCRIPT_MOVIE_PB_R,
    COMPO_SCRIPT_MOVIE_PB_RESCALE_N,
    COMPO_SCRIPT_MOVIE_PB_RESCALE_R,
    /* Browser Mode */
    COMPO_SCRIPT_BROWSER_VID_THUMB_N,
    COMPO_SCRIPT_BROWSER_VID_THUMB_R,
    COMPO_SCRIPT_BROWSER_DSC_PRM2THUMB_N,
    COMPO_SCRIPT_BROWSER_DSC_PURE_THUMB_N,
    COMPO_SCRIPT_BROWSER_DSC_PRM2THUMB_R,
    COMPO_SCRIPT_BROWSER_DSC_PURE_THUMB_R,
    COMPO_SCRIPT_BROWSER_DSC_PRM2THUMB_REENCODE,
    COMPO_SCRIPT_BROWSER_DSC_PURE_THUMB_REENCODE,
    /* ADAS */
    COMPO_SCRIPT_ADAS,
    COMPO_SCRIPT_MDTC,
    /* Misc */
    COMPO_SCRIPT_DEMO1,             // For 1280x720 HX8394 mipi panel
    COMPO_SCRIPT_DISPLAY,
    COMPO_SCRIPT_UNIT_TEST,
    COMPO_SCRIPT_TYPE_NUM,
    COMPO_SCRIPT_INVALID,
} COMPONEMT_SCRIPT_TYPE;

typedef enum _PORT_SCRIPT_TYPE
{
    PORT_SCRIPT_PURE_PCAM_PRM_SRC = 0,
    PORT_SCRIPT_PURE_PCAM_PRM_SRC_2ND,
    PORT_SCRIPT_MIX_PCAM_PRM_SRC,

    PORT_SCRIPT_VR_PREV_PRM_BAYER_FULL,
    PORT_SCRIPT_VR_PREV_PRM_RAW_FULL,
    PORT_SCRIPT_VR_PREV_PRM_BAYER_PIP,
    PORT_SCRIPT_VR_PREV_SCD_ANADEC_SRC,
    PORT_SCRIPT_VR_PREV_SCD_ANADEC_SRC_2IN1_TEST,
    PORT_SCRIPT_VR_PREV_SCD_ANADEC_SRC_2IN1_INA,
    PORT_SCRIPT_VR_PREV_SCD_ANADEC_SRC_2IN1_INB,
    PORT_SCRIPT_VR_PREV_PRM_ANADEC_SRC_RAW1,
    PORT_SCRIPT_VR_PREV_PRM_ANADEC_SRC_RAW2,
    PORT_SCRIPT_VR_PREV_SCD_BAYER,
    PORT_SCRIPT_VR_PREV_USBH_SRC,

    PORT_SCRIPT_VR_PRM_ANADEC_RECD_RAW1,
    PORT_SCRIPT_VR_PRM_ANADEC_THUMB_RAW1,
    PORT_SCRIPT_VR_PRM_ANADEC_RECD_SRC_2IN2_RAW1,
    PORT_SCRIPT_VR_PRM_BAYER_RECD,
    PORT_SCRIPT_VR_PRM_BAYER_H264_WIFI,
    PORT_SCRIPT_VR_PRM_BAYER_CAPTURE,
    PORT_SCRIPT_VR_PRM_BAYER_THUMB,
    PORT_SCRIPT_VR_SHARE_RECD_SRC,
    PORT_SCRIPT_VR_SHARE_RECD,
    PORT_SCRIPT_VR_SHARE_CAPTURE,
    PORT_SCRIPT_VR_SHARE_THUMB,
    PORT_SCRIPT_VR_SCD_ANADEC_RECD_SRC,
    PORT_SCRIPT_VR_SCD_ANADEC_RECD_SRC_2IN2_RAW2,
    PORT_SCRIPT_VR_SCD_ANADEC_RECD_SRC_2IN1_INA,
    PORT_SCRIPT_VR_SCD_ANADEC_RECD_SRC_2IN1_INB,
    PORT_SCRIPT_VR_SCD_ANADEC_RECD,
    PORT_SCRIPT_VR_SCD_ANADEC_WIFI,
    PORT_SCRIPT_VR_SCD_ANADEC_CAPTURE,
    PORT_SCRIPT_VR_SCD_ANADEC_THUMB,
    PORT_SCRIPT_VR_SCD_BAYER_RECD,
    PORT_SCRIPT_VR_SCD_BAYER_CAPTURE,
    PORT_SCRIPT_VR_SCD_BAYER_THUMB,
    PORT_SCRIPT_VR_USBH_RECD_SRC,
    PORT_SCRIPT_VR_USBH_RECD,
    PORT_SCRIPT_VR_USBH_WIFI,
    PORT_SCRIPT_VR_USBH_CAPTURE,
    PORT_SCRIPT_VR_USBH_THUMB,

    PORT_SCRIPT_DSC_PREV_PRM_FULL,
    PORT_SCRIPT_DSC_PREV_PRM_PIP,
    PORT_SCRIPT_DSC_PREV_SCD_ANADEC_SRC,
    PORT_SCRIPT_DSC_PREV_SCD_ANADEC_SRC_2IN1_INA,//
    PORT_SCRIPT_DSC_PREV_SCD_ANADEC_SRC_2IN1_INB,//
    PORT_SCRIPT_DSC_PREV_PRM_ANADEC_SRC_RAW,
    PORT_SCRIPT_DSC_PREV_SCD_BAYER,
    PORT_SCRIPT_DSC_PREV_USBH,

    PORT_SCRIPT_DSC_PRM_CAPTURE,
    PORT_SCRIPT_DSC_PRM_CAPTURE_RAW1,
    PORT_SCRIPT_DSC_PRM_CAPTURE_THUMB,
    PORT_SCRIPT_DSC_PRM_CAPTURE_THUMB_RAW1,
    PORT_SCRIPT_DSC_PRM_H264_WIFI,
    PORT_SCRIPT_DSC_SCD_ANADEC_CAPTURE_SRC,
    PORT_SCRIPT_DSC_SCD_ANADEC_CAPTURE_SRC_2IN2_RAW1,
    PORT_SCRIPT_DSC_SCD_ANADEC_CAPTURE_SRC_2IN2_RAW2,
    PORT_SCRIPT_DSC_SCD_ANADEC_CAPTURE_SRC_2IN1_INA,//
    PORT_SCRIPT_DSC_SCD_ANADEC_CAPTURE_SRC_2IN1_INB,//
    PORT_SCRIPT_DSC_SCD_ANADEC_CAPTURE,
    PORT_SCRIPT_DSC_SCD_ANADEC_CAPTURE_THUMB,
    PORT_SCRIPT_DSC_SCD_ANADEC_H264_WIFI,
    PORT_SCRIPT_DSC_SCD_BAYER_CAPTURE,
    PORT_SCRIPT_DSC_SCD_BAYER_CAPTURE_THUMB,
    PORT_SCRIPT_DSC_USBH_CAPTURE_SRC,
    PORT_SCRIPT_DSC_USBH_H264_WIFI,

    PORT_SCRIPT_ALGORITHM,
    PORT_SCRIPT_ALGORITHM_PCAM,
    PORT_SCRIPT_ADAS,
    PORT_SCRIPT_MDTC,
    PORT_SCRIPT_TYPE_NUM,
    PORT_SCRIPT_INVALID,
} PORT_SCRIPT_TYPE;

typedef enum _COMPONENT_DEV_TYPE
{
    DEVICE_SCL0 = 0,
    DEVICE_SCL1,
    DEVICE_DISPLAY,
    DEVICE_DIP_MOVE,
    DEVICE_DIP_ROTATE,
    DEVICE_DIP_SCALE,
    DEVICE_DIP_PIP,
    DEVICE_DIP_CC,
    DEVICE_DIP_OSDB,
    DEVICE_MFE,
    DEVICE_MGR,
    DEVICE_PIP,
    DEVICE_RAW_STORE,
    DEVICE_JPE,
    DEVICE_JPE_MGR,
    DEVICE_JPD,
    DEVICE_AUDENC,
    DEVICE_AUDDEC,
    DEVICE_HVD,
    DEVICE_TCL,
    DEVICE_ADAS,
    DEVICE_MDTC,
    DEVICE_HUVC,
    DEVICE_UVC,
    DEVICE_MEMHOST,
} COMPONENT_DEV_TYPE;

//==============================================================================
//
//                              STRUCTURES
//
//==============================================================================

typedef struct {
    MMP_COMPONENT_BASE          *Component;
    COMPONENT_DEV_TYPE          Type;
    MMP_COMPONENT_BASE          *InPortComponent;
    MMP_UBYTE                   ubOutPortNum;
    MMP_COMPONENT_BASE          *OutPortComponent[COMPONENT_MAX_OUT_PORT];
    MMP_BOOL                    bOutPortEn[COMPONENT_MAX_OUT_PORT];
    MMP_UBYTE                   ubOutPortOrder[COMPONENT_MAX_OUT_PORT];
} COMPONENT_CFG;

typedef struct {
    MMP_COMPONENT_BASE          *Component;
    MMP_UBYTE                   ubOutPortEnIdx;
    MMP_BOOL                    bOutPortEn[COMPONENT_MAX_OUT_PORT];
} COMPONENT_PORT_CFG;

//==============================================================================
//
//                              EXTERN VARIABLES (Component Script)
//
//==============================================================================

/* PCAM Mode */
extern COMPONENT_CFG Component_Config_PURE_PCAM_PRM_SRC[];
extern COMPONENT_CFG Component_Config_PCAM_DUAL_STREAM_SRC[];
extern COMPONENT_CFG Component_Config_PCAM_PRM_YUV422[];
extern COMPONENT_CFG Component_Config_PCAM_PRM_H264[];
extern COMPONENT_CFG Component_Config_PCAM_PRM_MJPEG[];
extern COMPONENT_CFG Component_Config_PCAM_PRM_MJPEG_2ND[];

/* Video Mode */
extern COMPONENT_CFG Component_Config_VR_N_PREV_PRM_BAYER_SRC[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_PRM_BAYER_FULL[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_PRM_BAYER_PIP[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_SCD_ANADEC_SRC[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_SCD_ANADEC_FULL[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_SCD_ANADEC_PIP[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_SCD_BAYER_SRC[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_SCD_BAYER_FULL[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_SCD_BAYER_PIP[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_USBH_SRC[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_USBH_FULL[];
extern COMPONENT_CFG Component_Config_VR_N_PREV_USBH_PIP[];

extern COMPONENT_CFG Component_Config_VR_R_PREV_PRM_RAW_SRC[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_PRM_BAYER_SRC[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_PRM_RAW_FULL[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_PRM_BAYER_FULL[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_PRM_BAYER_PIP[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_SRC[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_SRC_2IN1_TEST[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_SRC_2IN1_INA[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_SRC_2IN1_INB[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_SRC_2IN2_RAW2[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_SRC_2IN2_RAW1[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_FULL[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_PIP[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_2IN1_INA[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_2IN1_INB[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_FULL_2IN1_OUT[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_PIP_2IN1_OUT[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_ANADEC_PIP_2IN2_OUT[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_BAYER_SRC[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_BAYER_FULL[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_SCD_BAYER_PIP[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_USBH_SRC[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_USBH_FULL[];
extern COMPONENT_CFG Component_Config_VR_R_PREV_USBH_PIP[];

extern COMPONENT_CFG Component_Config_VR_PRM_BAYER_RECD[];
extern COMPONENT_CFG Component_Config_VR_PRM_ANDDEC_RECD[];
extern COMPONENT_CFG Component_Config_VR_PRM_ANADEC_Thumb[];
extern COMPONENT_CFG Component_Config_VR_PRM_ANADEC_RECD_SCAL_OSD_2IN2_OUT[];
extern COMPONENT_CFG Component_Config_VR_PRM_BAYER_H264_WIFI[];
extern COMPONENT_CFG Component_Config_VR_PRM_BAYER_Capture[];
extern COMPONENT_CFG Component_Config_VR_PRM_BAYER_Thumb[];
extern COMPONENT_CFG Component_Config_VR_SHARE_RECD_SCAL_OSD[];
extern COMPONENT_CFG Component_Config_VR_SHARE_RECD[];
extern COMPONENT_CFG Component_Config_VR_SHARE_Capture[];
extern COMPONENT_CFG Component_Config_VR_SHARE_Thumb[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_RECD_SCAL_OSD[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_RECD_SCAL_OSD_2IN1_INA[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_RECD_SCAL_OSD_2IN1_INB[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_RECD_SCAL_OSD_2IN1_OUT[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_RECD_SCAL_OSD_2IN2_OUT[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_RECD[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_H264_WIFI[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_MJPEG_WIFI[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_Capture[];
extern COMPONENT_CFG Component_Config_VR_SCD_ANADEC_Thumb[];
extern COMPONENT_CFG Component_Config_VR_SCD_BAYER_RECD[];
extern COMPONENT_CFG Component_Config_VR_SCD_BAYER_Capture[];
extern COMPONENT_CFG Component_Config_VR_SCD_BAYER_Thumb[];
extern COMPONENT_CFG Component_Config_VR_USBH_RECD_SCAL_OSD[];
extern COMPONENT_CFG Component_Config_VR_USBH_UVC_RECD_SCAL_OSD[];
extern COMPONENT_CFG Component_Config_VR_USBH_RECD[];
extern COMPONENT_CFG Component_Config_VR_USBH_UVC_RECD[];
extern COMPONENT_CFG Component_Config_VR_USBH_H264_WIFI[];
extern COMPONENT_CFG Component_Config_VR_USBH_MJPEG_WIFI[];
extern COMPONENT_CFG Component_Config_VR_USBH_Capture[];
extern COMPONENT_CFG Component_Config_VR_USBH_Thumb[];

/* DSC Mode */
extern COMPONENT_CFG Component_Config_DSC_N_PREV_PRM_SRC[];
extern COMPONENT_CFG Component_Config_DSC_N_PREV_PRM_FULL[];
extern COMPONENT_CFG Component_Config_DSC_N_PREV_PRM_PIP[];
extern COMPONENT_CFG Component_Config_DSC_N_PREV_SCD_ANADEC_SRC[];
extern COMPONENT_CFG Component_Config_DSC_N_PREV_SCD_ANADEC_FULL[];
extern COMPONENT_CFG Component_Config_DSC_N_PREV_SCD_ANADEC_PIP[];
extern COMPONENT_CFG Component_Config_DSC_N_PREV_USBH_SRC[];
extern COMPONENT_CFG Component_Config_DSC_N_PREV_USBH_FULL[];
extern COMPONENT_CFG Component_Config_DSC_N_PREV_USBH_PIP[];

extern COMPONENT_CFG Component_Config_DSC_R_PREV_PRM_SRC[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_PRM_RAW_SRC[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_PRM_FULL[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_PRM_PIP[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_ANADEC_SRC[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_ANADEC_SRC_2IN1_INB[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_ANADEC_SRC_2IN2_RAW1[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_ANADEC_SRC_2IN1_INA[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN1_OUT[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN1_INA[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN2_RAW2[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN2_RAW1[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_CAPT_SCAL_OSD_2IN1_INB[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_ANADEC_FULL[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_ANADEC_PIP[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_BAYER_SRC[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_BAYER_FULL[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_SCD_BAYER_PIP[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_USBH_SRC[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_USBH_FULL[];
extern COMPONENT_CFG Component_Config_DSC_R_PREV_USBH_PIP[];

extern COMPONENT_CFG Component_Config_DSC_PRM_Capture[];
extern COMPONENT_CFG Component_Config_DSC_PRM_Capture_Raw1[];
extern COMPONENT_CFG Component_Config_DSC_PRM_Capture_Thumb[];
extern COMPONENT_CFG Component_Config_DSC_PRM_Capture_Thumb_Raw1[];
extern COMPONENT_CFG Component_Config_DSC_PRM_H264_WIFI[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_CAPT_SCAL_OSD[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_Capture[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_Capture_Thumb[];
extern COMPONENT_CFG Component_Config_DSC_SCD_ANADEC_H264_WIFI[];
extern COMPONENT_CFG Component_Config_DSC_SCD_BAYER_Capture[];
extern COMPONENT_CFG Component_Config_DSC_SCD_BAYER_Capture_Thumb[];
extern COMPONENT_CFG Component_Config_DSC_USBH_CAPT_SCAL_OSD[];
extern COMPONENT_CFG Component_Config_DSC_USBH_H264_WIFI[];

/* Media Playback Mode */
extern COMPONENT_CFG Component_Config_JPG_PB_N[];
extern COMPONENT_CFG Component_Config_JPG_PB_R[];
extern COMPONENT_CFG Component_Config_JPG_PB_ReScale_N[];
extern COMPONENT_CFG Component_Config_JPG_PB_ReScale_R[];
extern COMPONENT_CFG Component_Config_MOVIE_PB_N[];
extern COMPONENT_CFG Component_Config_MOVIE_PB_R[];
extern COMPONENT_CFG Component_Config_MOVIE_PB_ReScale_N[];
extern COMPONENT_CFG Component_Config_MOVIE_PB_ReScale_R[];

/* Browser Mode */
extern COMPONENT_CFG Component_Config_BROWSER_VID_THUMB_N[];
extern COMPONENT_CFG Component_Config_BROWSER_VID_THUMB_R[];
extern COMPONENT_CFG Component_Config_BROWSER_DSC_Prm2Thumb_N[];
extern COMPONENT_CFG Component_Config_BROWSER_DSC_Pure_Thumb_N[];
extern COMPONENT_CFG Component_Config_BROWSER_DSC_Prm2Thumb_R[];
extern COMPONENT_CFG Component_Config_BROWSER_DSC_Pure_Thumb_R[];
extern COMPONENT_CFG Component_Config_BROWSER_DSC_Prm2Thumb_ReEncode[];
extern COMPONENT_CFG Component_Config_BROWSER_DSC_Pure_Thumb_ReEncode[];

/* ADAS */
extern COMPONENT_CFG Component_Config_ADAS[];
extern COMPONENT_CFG Component_Config_MDTC[];

/* Others */
extern COMPONENT_CFG Component_Config_SCL_2_DSPY[];
extern COMPONENT_CFG Component_Config_Display[];

extern COMPONENT_CFG Component_Config_DIP_UT[];
extern COMPONENT_CFG Component_Config_DIP_UT_2[];
extern COMPONENT_CFG Component_Config_JPE_UT[];

//==============================================================================
//
//                              EXTERN VARIABLES (Port Script)
//
//==============================================================================

extern COMPONENT_PORT_CFG Port_Config_PURE_PCAM_PRM_SRC[];
extern COMPONENT_PORT_CFG Port_Config_PURE_PCAM_PRM_SRC_2ND[];
extern COMPONENT_PORT_CFG Port_Config_MIX_PCAM_PRM_SRC[];

extern COMPONENT_PORT_CFG Port_Config_VR_PREV_PRM_BAYER_FULL[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_PRM_RAW_FULL[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_PRM_BAYER_PIP[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_SCD_ANADEC_SRC[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_SCD_ANADEC_SRC_2IN1_TEST[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_SCD_ANADEC_SRC_2IN1_INA[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_SCD_ANADEC_SRC_2IN1_INB[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_PRM_ANADEC_SRC_RAW1[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_PRM_ANADEC_SRC_RAW2[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_SCD_BAYER[];
extern COMPONENT_PORT_CFG Port_Config_VR_PREV_USBH_SRC[];

extern COMPONENT_PORT_CFG Port_Config_VR_RPM_BAYER_RECD[];
extern COMPONENT_PORT_CFG Port_Config_VR_RPM_ANADEC_RECD[];
extern COMPONENT_PORT_CFG Port_Config_VR_PRM_ANADEC_Thumb_Raw1[];
extern COMPONENT_PORT_CFG Port_Config_VR_PRM_ANADEC_RECD_SRC_2IN2_RAW1[];
extern COMPONENT_PORT_CFG Port_Config_VR_PRM_BAYER_H264_WIFI[];
extern COMPONENT_PORT_CFG Port_Config_VR_PRM_BAYER_Capture[];
extern COMPONENT_PORT_CFG Port_Config_VR_PRM_BAYER_Thumb[];
extern COMPONENT_PORT_CFG Port_Config_VR_SHARE_RECD_SRC[];
extern COMPONENT_PORT_CFG Port_Config_VR_SHARE_RECD[];
extern COMPONENT_PORT_CFG Port_Config_VR_SHARE_Capture[];
extern COMPONENT_PORT_CFG Port_Config_VR_SHARE_Thumb[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_ANADEC_RECD_SRC[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_ANADEC_RECD_SRC_2IN2_RAW2[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_ANADEC_RECD_SRC_2IN1_INA[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_ANADEC_RECD_SRC_2IN1_INB[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_ANADEC_RECD[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_ANADEC_WIFI[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_ANADEC_Capture[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_ANADEC_Thumb[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_BAYER_RECD[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_BAYER_Capture[];
extern COMPONENT_PORT_CFG Port_Config_VR_SCD_BAYER_Thumb[];
extern COMPONENT_PORT_CFG Port_Config_VR_USBH_RECD_SRC[];
extern COMPONENT_PORT_CFG Port_Config_VR_USBH_RECD[];
extern COMPONENT_PORT_CFG Port_Config_VR_USBH_WIFI[];
extern COMPONENT_PORT_CFG Port_Config_VR_USBH_Capture[];
extern COMPONENT_PORT_CFG Port_Config_VR_USBH_Thumb[];

extern COMPONENT_PORT_CFG Port_Config_DSC_PREV_PRM_FULL[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PREV_PRM_PIP[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PREV_SCD_ANADEC_SRC[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PREV_SCD_ANADEC_SRC_2IN1_INA[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PREV_SCD_ANADEC_SRC_2IN1_INB[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PREV_PRM_ANADEC_SRC_RAW[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_ANADEC_Capture_SRC_2IN1_INA[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_ANADEC_Capture_SRC_2IN2_RAW1[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_ANADEC_Capture_SRC_2IN2_RAW2[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_ANADEC_Capture_SRC_2IN1_INB[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PREV_SCD_BAYER[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PREV_USBH_SRC[];

extern COMPONENT_PORT_CFG Port_Config_DSC_PRM_Capture[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PRM_Capture_Raw1[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PRM_Capture_Thumb[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PRM_Capture_Thumb_Raw1[];
extern COMPONENT_PORT_CFG Port_Config_DSC_PRM_H264_WIFI[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_ANADEC_Capture_SRC[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_ANADEC_Capture[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_ANADEC_Capture_Thumb[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_ANADEC_H264_WIFI[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_BAYER_Capture[];
extern COMPONENT_PORT_CFG Port_Config_DSC_SCD_BAYER_Capture_Thumb[];
extern COMPONENT_PORT_CFG Port_Config_DSC_USBH_Capture_SRC[];
extern COMPONENT_PORT_CFG Port_Config_DSC_USBH_H264_WIFI[];

extern COMPONENT_PORT_CFG Port_Config_Algorithm[];
extern COMPONENT_PORT_CFG Port_Config_Algorithm_PCAM[];
extern COMPONENT_PORT_CFG Port_Config_ADAS[];
extern COMPONENT_PORT_CFG Port_Config_MDTC[];

#endif // _COMPONENT_CFG_H_
