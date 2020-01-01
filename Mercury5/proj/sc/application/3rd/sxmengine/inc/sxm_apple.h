#ifdef __SXMENGINE__
#ifndef __SDKVEN_SXM_APPLE_H__
#define __SDKVEN_SXM_APPLE_H__

#include "ven_sdk.h"
#include "ven_dbg.h"
#include "ven_stc.h"
#include "mmi_layout.h" // For MAIN_LCD_WIDTH, MAIN_LCD_HEIGHT, MAIN_SK_HEIGHT


#define APPLE_LOG


enum
{
    CODEC_OPEN_MEDIA,
    CODEC_CLOSE_MEDIA,
    CODEC_GET_FILE_INFO,
    CODEC_GET_PLAYING_TIME,
    CODEC_PLAY_AUDIO,
    CODEC_PLAY_AUDIO_RAW,
    CODEC_PLAY_AUDIO_STREAM,
    CODEC_PAUSE_AUDIO,
    CODEC_RESUME_AUDIO,
    CODEC_STOP_AUDIO,
    CODEC_SET_AUDIO_POS,
    CODEC_SET_VOLUME,
    CODEC_GET_VOLUME,
    CODEC_PLAY_MIDI_TONE,
    CODEC_SET_CH_VOLUME,
    CODEC_SET_PROGRAM,
    CODEC_SEND_SHORT_EVENT,
    CODEC_SEND_LONG_EVENT,
    CODEC_PLAY_TONE,
    CODEC_PLAY_VIDEO,
    CODEC_OPEN_IMAGE_CODEC,
    CODEC_CLOSE_IMAGE_CODEC,
    CODEC_DECODE_IMAGE,
    CODEC_GET_NEXT_IMAGE_FRAME,
    CODEC_AUDIO_RECORD,
    CODEC_STOP_AUDIO_RECORD,
    CODEC_AUDIO_STREAM_RECORD,
    CODEC_STOP_AUDIO_STREAM_RECORD,
};


enum
{
    CAM_OPEN_CAMERA,
    CAM_CLOSE_CAMERA,
    CAM_START_PREVIEW,
    CAM_STOP_PREVIEW,
    CAM_GET_IMAGE,
    CAM_CONVERT_IMAGE,
};


#define APPLE_OS_EXTENSION_BEGIN 0x7fff
#define APPLE_APPMAN_EX_BEGIN (APPLE_OS_EXTENSION_BEGIN + 1000)
#define APPLE_OEM_EX_BEGIN (APPLE_OS_EXTENSION_BEGIN + 6000)
#define APPLE_OS_NEWAA_API			(APPLE_OEM_EX_BEGIN + 34)
#define APPLE_OS_DISP					(APPLE_OEM_EX_BEGIN + 175)


#define APPLE_OS_API_PLATFORM (0x7fff+1)
#define APPLE_OS_API_MODEL (0x7fff+2)
#define APPLE_OS_RELEASE_HW_VER (APPLE_OEM_EX_BEGIN + 13)  //��id
#define APPLE_OS_RELEASE_BUILD_DATETIME (APPLE_OEM_EX_BEGIN + 14) // ����ʱ��

#define APPLE_RADIO_EX_BEGIN (APPLE_OS_EXTENSION_BEGIN + 7000)
#define APPLE_OS_API_RP_SUPPORTAUDIO (APPLE_RADIO_EX_BEGIN + 5)

#define APPLE_OS_APPVOICERECORD_API (APPLE_OEM_EX_BEGIN + 24)//Ӧ�õ�¼���ӿ�
#define APPLE_OS_SMSCENTER (APPLE_OEM_EX_BEGIN + 50)//���ض������ĺ���
#define APPLE_OS_SET_PS_MODE (APPLE_OEM_EX_BEGIN + 51)

#define APPLE_VP_EX_BEGIN (APPLE_OS_EXTENSION_BEGIN + 2000)
#define APPLE_OS_API_VP_SUPPORTSVGIV     (APPLE_VP_EX_BEGIN + 6)//�Ƿ�֧��SVGIV
#define APPLE_OS_API_VP_15x			(APPLE_VP_EX_BEGIN + 14)
#define APPLE_OS_API_VP_NewEE		(APPLE_VP_EX_BEGIN + 16)
#define APPLE_OS_API_VP_SupMediaNotify		(APPLE_VP_EX_BEGIN + 19)
#define APPLE_OS_API_VP_NeedCleanCache		(APPLE_VP_EX_BEGIN + 20)//�Ƿ���Ҫcleancaceh��1����Ҫ��0������Ҫ��Ĭ�ϲ���Ҫ
#define APPLE_OS_API_VP_SupportFull			(APPLE_VP_EX_BEGIN + 22)//�Ƿ�֧��ȫ����1:֧�֣�0:��֧�֣�Ĭ��֧��

#define APPLE_OS_DCROTATE (APPLE_OEM_EX_BEGIN + 27)//��Ҫ��ת
#define APPLE_UMVCHAT_EX_BEGIN (APPLE_OS_EXTENSION_BEGIN + 13000)
#define APPLE_UMVCHAT_SUPFULLSCREEN  (APPLE_UMVCHAT_EX_BEGIN + 15)
#define APPLE_OS_SUPPORT_HighDef 		(APPLE_UMVCHAT_EX_BEGIN + 13)
#define APPLE_UMVCHAT_USETH             (APPLE_UMVCHAT_EX_BEGIN + 5)
#define APPLE_UMVCHAT_SUPCALL           (APPLE_UMVCHAT_EX_BEGIN + 6)
#define APPLE_UMVCHAT_BackLightOn (APPLE_UMVCHAT_EX_BEGIN + 57) //�Ƿ�֧�ֱ��ⳣ��,1֧�֣�0��֧�֣�Ĭ�ϲ�֧��
#define APPLE_UMVCHAT_LOGINLIGHTON (APPLE_UMVCHAT_EX_BEGIN + 64)    //��¼ʱ�Ƿ�����0��1�ǣ�Ĭ��0
#define APPLE_UMVCHAT_TEST (APPLE_UMVCHAT_EX_BEGIN + 88)		//����
#define APPLE_UMVCHAT_StopVInputMode (APPLE_UMVCHAT_EX_BEGIN + 16)    //�����뷨�����Ƿ�ֹͣ��Ƶ��1��ֹͣ��0����ֹͣ��Ĭ�ϲ�ֹͣ


#define APPLE_BOOK_EX_BEGIN (APPLE_OS_EXTENSION_BEGIN + 3000)
#define APPLE_BOOK_NO_ROTATE_SETTING (APPLE_BOOK_EX_BEGIN+5)
#define APPLE_BOOK_ONLY_READBOOK_BACKLIGHT  (APPLE_BOOK_EX_BEGIN+7) //ֻ�ж����ʱ����

// #define APPLE_MSTAR_EX_BEGIN (APPLE_OS_EXTENSION_BEGIN + 14000)
#define APPLE_MINIAPPMAN_EX_BEGIN (APPLE_OS_EXTENSION_BEGIN + 14000)

#define APPLE_OS_DCSWITCH (APPLE_OEM_EX_BEGIN + 28)//֧���л�
#define APPLE_MSTAR_DEFAULT_APN (APPLE_MINIAPPMAN_EX_BEGIN + 0)

#define APPLE_APPMAN_NO_SHOW_CLASSID (APPLE_APPMAN_EX_BEGIN + 2)//APPMAN ���ֵ�Ӧ��
#define APPLE_MINIAPM_ALWAYS_BACKLIGHT (APPLE_MINIAPPMAN_EX_BEGIN + 2)//�Ƿ��������
#define APPLE_MINIAPM_CHECK_SPACE (APPLE_MINIAPPMAN_EX_BEGIN + 1)//�Ƿ�Ҫ���space
#define APPLE_MINIAPM_GET_ID_INFO  (APPLE_OEM_EX_BEGIN + 173)//������mini appman��������Դʶ��


#define _TRACE_SXH    (VEN_DBG_GROUP_0 | VEN_DBG_LEVEL_17)   //CUS5 17

typedef enum
{
    SXMOBI_ERROR_SUCCESS,                             /**< Operation success */
    SXMOBI_ERROR_WOULDBLOCK,
    SXMOBI_ERROR_UNKNOWN,
    SXMOBI_ERROR_INVALIDURL,                          /**< Invalid url */
    SXMOBI_ERROR_TIMER,                               /**< Can't startup timer */
    SXMOBI_ERROR_TOPMOST,                             /**< Current page position is already topmost */
    SXMOBI_ERROR_BOTTOMMOST,                          /**< Current page position is already  bottommost */
    SXMOBI_ERROR_FIRST,                               /**< No forward page */
    SXMOBI_ERROR_LAST,                                /**< No back page */
    SXMOBI_ERROR_NOTACTIVED,                          /**< Browser current page is not existed */
    SXMOBI_ERROR_NOTINPAGE,                           /**< The first visible nod index is not in current page */
    SXMOBI_ERROR_NOMEMORY,                            /**< No memory to use */
    SXMOBI_ERROR_NOSPACE,                             /**< No space to save file */
    SXMOBI_ERROR_FILETOOLARGE,                        /**< Downloading file is too large to download */
    SXMOBI_ERROR_TYPE,                                /**< Display element type error */
    SXMOBI_ERROR_DATA,                                /**< Invalid data*/
    SXMOBI_ERROR_CONVERT,                             /**< Converting string error */
    SXMOBI_ERROR_FILE,                                /**< File operation failure */
    SXMOBI_ERROR_PARAMETER,                           /**< Parameter is invalid */
    SXMOBI_ERROR_SETTING,                             /**< Some error related to setting(such as netsetting..) */
    SXMOBI_ERROR_NETWORK,                             /**< Some error related to network */
    SXMOBI_ERROR_CONFIG,                              /**< Configure error, maybe save failed etc. */
    SXMOBI_ERROR_NO_MIME,                             /**< download error, cant' get extern name */
    SXMOBI_ERROR_NO_TCARD

}SXMOBI_ERRCODE;

#define SXM_EXT_EVENTBASE 0x00910000

typedef struct
{
    u32     type;                           /* Event type          */
    u32     DataLen;                        /* Event Data lenght   */
    void*   pData;                         /* Event Data pointer  */
} SXM_EXTEvent_t;

typedef enum
{
    REQ_SXM_EX_ACCEPT_VIDEO_CHAT = SXM_EXT_EVENTBASE,        	/**< Accept SMS Video request while Video Chat active */
} SXM_EXT_EVT;

typedef struct
{
	unsigned int appid;		//	app ID
	unsigned int flag;		//	app ��ʶ
	unsigned int scrwidth;	//	app ��Ļ��
	unsigned int scrheight;	//	app ��Ļ��
	char appdir[20];		//	app ��װĿ¼
	char appsig[20];		//	app ǩ���ļ�
	char appbin[20];		//	app ִ���ļ�
	unsigned int inrom;		//	�Ƿ��rom�лָ�
	void* pAppData;	//
}apple_preinstal_appinfo;

typedef struct{
    u8 APType;
    u32 Data1;
    u32 Data2;
}ap_cb_data_t;

typedef struct _OEM_gprs_service_data_account_node
{
	u32 result;
    u8 DataAccountName[60];      /* Name of a Data Account */
    u8 APN[60];    /* GPRS APN */
    u8 prx_ip[4];		//������
    u16 prx_port;		//������
	u8 id;
} OEM_GPRSDataAccountNode;
#endif /* __SDKVEN_SXM_APPLE_H__ */
#endif//__SXMENGINE__
