#ifndef _MOBILE_ALLIANCE_TYPE_DEF_H_
#define _MOBILE_ALLIANCE_TYPE_DEF_H_

#ifdef  __cplusplus
extern "C" 
{
#endif

//typedef void				zm_void;
#define zm_void 			void
typedef char				zm_int8;
typedef unsigned char		zm_uint8;
typedef short				zm_int16;
typedef unsigned short		zm_uint16;
typedef int				zm_int;
typedef unsigned int		zm_uint;
typedef long				zm_int32;
typedef unsigned long		zm_uint32;
typedef float				zm_real32;
typedef double			zm_real64;
typedef char				zm_bool;
typedef zm_int32			zm_hwnd;		/*���ھ��*/
typedef zm_int32			zm_color;		/*RGB��ɫ*/
typedef zm_int			zm_net_handle;	/*���������������Ӿ��*/
typedef void				zm_file;		/*�ļ����*/
typedef void*			zm_func_ptr;	/*����ָ��*/

#ifdef  __cplusplus
};
#endif

#ifndef zm_invalid_net_handle
#define zm_invalid_net_handle -1
#endif

#ifndef zm_null
#define zm_null		0
#endif

#ifndef zm_true
#define zm_true		1
#endif

#ifndef zm_false
#define zm_false	0
#endif

#ifdef __cplusplus
#define zm_extern extern "C"
#else
#define zm_extern extern
#endif

typedef enum stZM_KeyCode
{
	ZM_EKeyNum0 = 0,
	ZM_EKeyNum1,
	ZM_EKeyNum2,
	ZM_EKeyNum3,
	ZM_EKeyNum4,
	ZM_EKeyNum5,
	ZM_EKeyNum6,
	ZM_EKeyNum7,
	ZM_EKeyNum8,
	ZM_EKeyNum9,
	ZM_EKeySoftLeft,
	ZM_EKeySoftRight,
	ZM_EKeySoftCSK,
	ZM_EKeyUp,
	ZM_EKeyDown,
	ZM_EKeyLeft,
	ZM_EKeyRight,
	ZM_EKeySoftSend,
	ZM_EKeySoftEnd,
	ZM_EKeySoftClear,
	ZM_EKeyStar,
	ZM_EKeyHash,
	ZM_EKeyVolUp,
	ZM_EKeyVolDown,
	ZM_EKeyQuickAcs,
	ZM_EKeyCamera=ZM_EKeyQuickAcs,
	ZM_EKeySoftOk,	
	ZM_EKeyWap,
	ZM_EKeyIp,
	ZM_EKeyMax/* max key codes support */	
}ZM_KeyCode;

typedef enum
{
	ZM_EKeyEventDown = 10,
	ZM_EKeyEventUp,
	ZM_EKeyEventLongPress,
	ZM_EKeyEventRepeat
}ZM_KeyEvent;

typedef enum
{
	ZM_EKeyWasNotConsumed,
	ZM_EKeyWasConsumed
} ZM_KeyResponse;

typedef enum
{
	ZM_EPenDown = 20,
	ZM_EPenUp,
	ZM_EPenMove
} ZM_PenEvnent;

/*
 *	�������Ͷ���
 */
typedef enum
{
	zm_font_normal = 1,		/*normal font*/
	zm_font_small, 			/*small font*/
	zm_font_large,          /*large font*/
	zm_font_unicode 		/*unicode font*/
}zm_font_type;

/*
 * ���뷨����
 */
typedef enum
{
	zm_input_abc,
	zm_input_123,
	zm_input_password,
	zm_input_pinyin
}zm_input_type;

/*
 *	�ı����뷽ʽ����
 */
typedef enum
{
	zm_unicode,		/*unicode coding*/
	zm_utf8,		/*utf8 coding*/
	zm_ascii		/*ascall coding*/
}zm_encoding_type;

/*
 *	ͼƬ��ʽ
 */
typedef enum
{
	zm_img_bmp =0,
	zm_img_png,
	zm_img_jpg,
	zm_img_gif,
	zm_img_unknow
}zm_img_format;

/*
 *	��ͼƬ��ʽ
 */
typedef enum
{
	zm_rop_copy = 1,	/*������Ŀ���豸��*/
	zm_rop_xor			/*��Ŀ���豸�ϵ��� xor ����*/
}zm_bitblt_rop;

/*
 *	�ı����뷽ʽ, ��ֱ�������VCENTER
 */
typedef enum
{
	zm_text_left	= 0x01,
	zm_text_right	= 0x02,
	zm_text_center	= 0x04
}zm_text_align;

/*
 *	��������
 */
typedef enum
{
	network_mobile = 0,	/* china mobile */
	network_unicom,		/* GSM network of china unicom */
	network_cdma,		/* CDMA network of China unicom */
	network_unkown		/* Unknow network: just not send SMS */
}zm_network_type;

/*
 *	����������·״̬
 */
typedef enum
{
	zm_netstate_connteted,		/*the connect request is confirmed with success*/
	zm_netstate_connect_fail,	/*the connect request is confirmed with FALSE*/
	zm_netstate_disconnect,		/*the connect was disconnected*/
	zm_netstate_receive,		/*data is received via the connect*/
	zm_netstat_gethostname,		/*���������ɹ�*/
	zm_netstate_send_error,
	zm_netstate_write
}zm_net_state;

/*
 *	����������������
 */
typedef enum
{
	zm_cmnet,	/*gprs cmnet, connect driction*/
	zm_cmwap	/*gprs cmwap, connect mobile proxy(10.0.0.172)*/
}zm_gprs_type;

/*
 *	�ļ���λ whence ����
 */
typedef enum
{
    zm_seek_cur=0, /*current position of file pointer*/
    zm_seek_end, /*end of file*/
    zm_seek_set	 /*beginning of file*/
}zm_file_seek_type;

/*
 *	��ɫ���嶨��
 */
#define ZM_COLOR_TRANSLAT		(-1)
#define ZM_COLOR_WHITE			zm_get_rgb_color(0xff,0xff,0xff)
#define ZM_COLOR_BLACK			zm_get_rgb_color(0x0,0x0,0x0)
#define ZM_COLOR_MENUBAR_FRAME	zm_get_rgb_color(0x0,0x0,0x0)
#define ZM_COLOR_MENUBAR_BG		zm_get_rgb_color(0,81,162)
#define ZM_COLOR_MENUBAR_FG		zm_get_rgb_color(0xff,0xff,0xff)
#define ZM_COLOR_ICON_SELECTED	zm_get_rgb_color(0x0F,0xAD,0xFF)
#define ZM_COLOR_TEXT_SELECTED	zm_get_rgb_color(0x0F,0xAD,0xFF)
#define ZM_COLOR_CAPTION_FG		zm_get_rgb_color(0xff,0xff,0xff)
#define ZM_COLOR_CAPTION_BG		zm_get_rgb_color(0x0F,0xDF,0xFF)
#define ZM_COLOR_FOCUS_BG		zm_get_rgb_color(117,186,255)
#define ZM_COLOR_GRAY			zm_get_rgb_color(120,127,127)

typedef struct
{
	zm_int16 left;
	zm_int16 top;
	zm_int16 width;
	zm_int16 height;
}zm_rect;

typedef struct
{
	zm_int16 x;
	zm_int16 y;
}zm_point;

typedef struct
{
	zm_int16 cx;
	zm_int16 cy;
}zm_size;

typedef struct
{
	zm_int tm_hour;			/* hours */
	zm_int tm_min;			/* minutes */
	zm_int tm_sec;			/* seconds */	

	zm_int tm_year;			/* year */
	zm_int tm_mon;			/* month */
	zm_int tm_mday;			/* day of the month */	
	
	zm_int tm_wday;			/* day of the week */
	zm_uint32 tm_time_sec;	/* time_t*/
}zm_tm;

/*
 * GPRS receive data buffer struct
 */
typedef struct
{
	zm_int8*  buf;
	zm_uint32 length;
}zm_net_message;


/*
 * ����������· event callback function interface
 *  @pMess, ����¼������ݿ���Ϊ zm_null, pMess->buf ���ڴ�����ȫ��ص������ĵ��÷�
 */
typedef zm_void (*ZM_NetCallbackFuncPtr)(zm_net_handle lHandler,zm_net_state nState, zm_net_message* pMess);

/*
 *	�����ص�����
 */
typedef ZM_KeyResponse (*ZM_OfferKeyEventFuncPtr)(ZM_KeyEvent event, ZM_KeyCode code);

/*
 *	���ʻص�����
 */
typedef zm_void (*ZM_OfferPenEventFuncPtr)(ZM_PenEvnent event, zm_point* pt);

/*
 *	�˵��¼�
 */
typedef zm_void (*ZM_MenuCmdHandlerFuncPtr)(zm_uint32 cmdId , zm_uint32 lparam);

/*
 * ��Դ�ṩ provider
 */
typedef zm_void (*zm_resource_provider)(zm_int id, zm_int8** pBuf, zm_int* len);

#ifdef ZMOL_NO_GLOBAL_VAR
//#define __align(n)  __attribute__((aligned(4))) 
#endif

#endif/*_MOBILE_ALLIANCE_TYPE_DEF_H_*/
