// xstrike Lite engine
// type definition
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_type.h 99 2008-08-29 09:53:31Z royal $
#ifndef __XLITE_TYPE_H__
#define __XLITE_TYPE_H__

/*!
 * @file xLite_type.h
 * @brief xstrike lite ���Ͷ���
 */


// type definition
/*! 32λ�з������� */
typedef int					xl_int32;
/*! 32λ�޷������� */
typedef unsigned int		xl_uint32;
/*! 16λ�з������� */
typedef short				xl_int16;
/*! 16λ�޷������� */
typedef unsigned short		xl_uint16;
/*! 8λ�з������� */
typedef signed char			xl_int8;
/*! 8λ�޷������� */
typedef unsigned char		xl_uint8;
/*! 64λ�з������� */
typedef __int64				xl_int64;
/*! 64λ�޷������� */
typedef unsigned __int64	xl_uint64;
/*! void */
typedef void				xl_void;
/*! boolean */
typedef xl_int32			xl_bool;
/*! wide char */
typedef xl_uint16			xl_wchar;
/*! char */
typedef char				xl_char;
/*! 565��ʽ��ɫ */
typedef xl_uint16			xl_color;
/*! float */
typedef float				xl_float;
/*! �޲κ���ָ�� */
typedef xl_void			(*xl_func_ptr)(xl_void);

//////////////////////////////////////////////////////////////////////////
// MACRO
//////////////////////////////////////////////////////////////////////////
/*! ����Сֵ */
#define XLITE_MIN(a,b)					((a) > (b) ? (b) : (a))
/*! �����ֵ */
#define XLITE_MAX(a,b)					((a) > (b) ? (a) : (b))

		
/*
 * @brief ��ȡxlite_pf_rgb_565��������red������ֵ
 * @param c ��ɫ
 * @return red������ֵ
 */
#define XLITE_GET_RED(c)					( (xl_uint8)( ( ( (c) & 0xF800 ) >> 11 ) << 3 ) )

/*
 * @brief ��ȡxlite_pf_rgb_565��������green������ֵ
 * @param c ��ɫ
 * @return green������ֵ
 */
#define XLITE_GET_GREEN(c)					( (xl_uint8)( ( ( (c) & 0x7E0 ) >> 5 ) << 2 ) )

/*
 * @brief ��ȡxlite_pf_rgb_565��������blue������ֵ
 * @param c ��ɫ
 * @return blue������ֵ
 */
#define XLITE_GET_BLUE(c)					( (xl_uint8)( ( ( (c) & 0x1F) << 3) ) )



// constant definition

#define XL_NULL							0
#define XL_TRUE							1
#define XL_FALSE						0
#define XLITE_MAX_PATH					0xFF
#define XLITE_MAX_URL					0xFF

/*! open file for read */
#define XLITE_FILE_READ					0x01
/*! open file for read and write */
#define XLITE_FILE_WRITE				0x02
/*! open file for read and write,destroy content if file already existed. */
#define XLITE_FILE_CREATE_ALWAYS		0x04
/*! open file, if it does not exist, creat it */
#define XLITE_FILE_CREATE				0x08


#	define XLITE_SEEK_BEGIN				0 // FS_FILE_BEGIN
#	define XLITE_SEEK_CURRENT			1 //FS_FILE_CURRENT
#	define XLITE_SEEK_END				2 //FS_FILE_END


//////////////////////////////////////////////////////////////////////////
// xLite_memory.h
//////////////////////////////////////////////////////////////////////////

/*!
 * @brief �ڴ������Ϣ
 */
typedef struct  
{
	xl_uint32	alloc_called_times;				/*!< xlite_mem_alloc�ĵ��ô��� */
	xl_uint32	free_called_times;				/*!< xlite_mem_free�ĵ��ô��� */
	xl_uint32	total_alloced_size;				/*!< ��ǰ������ڴ���ֽ��� */
	xl_uint32	max_once_alloced_size;			/*!< �������������ڴ���ֽ��� */
	xl_uint32	max_total_alloced_size;			/*!< �ڴ�������ֽ�����ֵ */
} xlite_mem_debug_info;

//////////////////////////////////////////////////////////////////////////
// xLite_directscreen.h
//////////////////////////////////////////////////////////////////////////
/*!
 * @struct xlite_directscreen xLite_type.h "xLite_directscreen.h"
 * @brief DirectScreen �ṹ
 * @sa xLite_directscreen.h
 */
typedef struct  
{
	xl_int32 screen_width;				/*!< ��Ļ�Ŀ�� */
	xl_int32 screen_height;				/*!< ��Ļ�ĸ߶� */
	xl_uint8* buffer_ptr;				/*!< ��Ļ�����ָ�� */
	xl_int32 bit_per_pixel;				/*!< ��Ļ����ĸ�ʽ */

	xl_void* handle;					/*!< ƽ̨��ؾ�� */
} xlite_directscreen;




//////////////////////////////////////////////////////////////////////////
// xLite_version.h
//////////////////////////////////////////////////////////////////////////

/*!
 * @struct xlite_version xLite_type.h "xLite_version.h"
 * @brief xlite �汾��Ϣ
 */
typedef struct  
{
	xl_uint32			platform_id;		/*!< ƽ̨ID */
	xl_uint32			sdk_version;		/*!< SDK ID */
	
	xl_uint32			major;				/*!< �������汾�� */
	xl_uint32			minor;				/*!< ���渱�汾�� */
	xl_uint32			reserved;			/*!< ���� */

} xlite_version;


//////////////////////////////////////////////////////////////////////////
// xLite_sys.h
//////////////////////////////////////////////////////////////////////////
typedef xl_void (* xlite_timer_func)(xl_void);
typedef xl_void (* xlite_sms_callback)(xl_int32);
typedef xl_void (* xlite_sys_callback)(xl_int32, xl_int32);

typedef enum
{
	XLITE_SYS_CALLBACK_NONE,

	XLITE_SYS_CALLBACK_SMS,
	XLITE_SYS_CALLBACK_GPRS_ACCOUNT,
	XLITE_SYS_CALLBACK_IMSI,
	XLITE_SYS_CALLBACK_IMEI,
	XLITE_SYS_CALLBACK_AREA_CODE,

	
	XLITE_SYS_CALLBACK_END
}xlite_sys_callback_enum;



#define XLITE_SYS_SEND_SMS_ERR_NO_ERROR					0
#define XLITE_SYS_SEND_SMS_ERR_NO_SERVICE				-1
#define XLITE_SYS_SEND_SMS_ERR_NOT_READY				-2
#define XLITE_SYS_SEND_SMS_ERR_OTHER_SMS_PROCESSING		-3
#define XLITE_SYS_SEND_SMS_ERR_APPEND_EMS_ERROR		-4
#define XLITE_SYS_SEND_SMS_ERR_OTHER_ERROR		-5

/*!
 * @brief ����ʱ�����ݽṹ
 */
typedef struct  
{
	xl_uint16	year;		/*!< �� */
	xl_uint8	month;		/*!< �� */
	xl_uint8	day;		/*!< �� */
	xl_uint8	hour;		/*!< Сʱ */
	xl_uint8	minute;		/*!< ���� */
	xl_uint8	second;		/*!< �� */
	xl_uint8	day_index;	/*!< ��������,0 = ������*/
} xlite_date_time;


/*!
 * @brief SIM��ͨ����
 */
typedef enum
{
	xlite_operator_unknown,			/*!< δ֪�� */
	xlite_operator_cmcc,				/*!< �й��ƶ� */
	xlite_operator_unicom			/*!< �й���ͨ */
} xlite_operator;

/*!
 * @brief ���������
 */

typedef enum
{
	xlite_gprs_account_invalid,
	xlite_gprs_account_cmwap,
	xlite_gprs_account_cmnet,
	xlite_gprs_account_uniwap,
	xlite_gprs_account_uninet
} xlite_gprs_account;


//////////////////////////////////////////////////////////////////////////
// xLite_file.h
//////////////////////////////////////////////////////////////////////////
typedef void*			xlite_file_handle;
typedef enum
{
	xlite_driver_system,
	xlite_driver_normal,
	xlite_driver_removable
} xlite_driver_type;


//////////////////////////////////////////////////////////////////////////
// structures

/*!
 * @brief ���������ļ���������ݽṹ
 */
typedef struct
{
	xl_wchar path_name[XLITE_MAX_PATH];			/*!< �������ļ��� */
	xl_uint32 file_size;						/*!< �ļ����ֽ��� */
	xl_bool is_folder;							/*!< �Ƿ�ΪĿ¼ */
	xl_uint16 number_index;				/*!<�ҵ��ĵڼ���*/
} xlite_file_find_info;


typedef struct
{
	xl_wchar path_name[XLITE_MAX_PATH];			/*!< �������ļ��� */
	xl_uint32 file_size;						/*!< �ļ����ֽ��� */
	xlite_date_time create_time;				/*!< ���������� */
	xlite_date_time access_time;				/*!< ���ʵ����� */
	xlite_date_time write_time;				/*!< �޸ĵ����� */
} xlite_file_info;

/*!
 * @brief 
 * @note ����ص���������XL_TRUE����������һ�������������ļ�,�����ж�����
 */
typedef xl_bool(* xlite_file_find_callback)(const xlite_file_find_info* ffi);

//////////////////////////////////////////////////////////////////////////
// xlite_socket.h
//////////////////////////////////////////////////////////////////////////

//�����ɹ�
#define XLITE_SOCKET_SUCCESS				(0)
//����ʧ��
#define XLITE_SOCKET_ERROR					(-1)
//��������ȴ�
#define XLITE_SOCKET_WOULDBLOCK				(-2)
//�����У�������
#define XLITE_SOCKET_IN_PROGRESS			(-3)
//socket�Ƿ�
#define XLITE_SOCKET_INVALID_SOCKET			(-4)
//�Ƿ�host��ַ
#define XLITE_SOCKET_INVALID_ADDR			(-5)
//#define XLITE_SOCKET_OPNOTSUPP				(-8)		
//#define XLITE_SOCKET_CONNABORTED			(-9)
//#define XLITE_SOCKET_INVAL					(-10)
//#define XLITE_SOCKET_PIPE					(-11)
//#define XLITE_SOCKET_NOTCONN				(-12)
//#define XLITE_SOCKET_MSGSIZE				(-13)
//#define XLITE_SOCKET_BEARER_FAIL			(-14)
//#define XLITE_SOCKET_CONNRESET				(-15)

#define XLITE_SOCKET_MAX_OPEN_LIMITED		(-100)
#define XLITE_SOCKET_CANT_FIND_IN_SLOT		(-101)

#define XLITE_INVALID_SOCKET				(-1)

typedef enum 
{
	xlite_socket_pf_inet	= 0			//PF_INET,
} xlite_socket_domain;

typedef enum
{
	xlite_socket_stream		= 0,			// SOCK_STREAM
	xlite_socket_dgram		= 1,			// SOCK_DGRAM
	xlite_socket_sms		= 2,			// SOCK_SMS
	xlite_socket_raw		= 3				// SOCK_RAW
} xlite_socket_type;

typedef enum
{
	xlite_socket_ip			= 0,
	xlite_socket_tcp		= 6,
	xlite_socket_udp		= 17
} xlite_socket_protocol;

typedef enum
{
	xlite_socket_sd_receive = 0x01,
	xlite_socket_sd_send = 0x02,
	xlite_socket_sd_both = (xlite_socket_sd_receive | xlite_socket_sd_send)
} xlite_socket_shutdown_flag;


typedef enum
{
	xlite_socket_opt_nbio	= 0x04,
	xlite_socket_opt_async	= 0x08
} xlite_socket_option;

typedef enum
{
	xlite_socket_event_read		= 0x01,
	xlite_socket_event_write	= 0x02,
	xlite_socket_event_accept	= 0x04,
	xlite_socket_event_connect	= 0x08,
	xlite_socket_event_close	= 0x10
} xlite_socket_event;

typedef struct  
{
	xl_uint32 sec;
	xl_uint32 usec;		// micro-secont
} xlite_socket_timeval;


/*
 * @brief �¼�������
 * @param ptr xlite_socket_handle ָ��
 * @param e �¼�
 */
typedef xl_void(* xlite_socket_event_handler)(xlite_socket_event evt,xl_int32 error_no,xl_void* user_param);




typedef xl_int32						xlite_socket;

#define XLITE_MAX_SOCK_ADDR_LEN 28

typedef struct 
{
    xl_int16	addr_len;
    xl_uint16	port;
    xl_uint8	addr[XLITE_MAX_SOCK_ADDR_LEN];
} xlite_socket_sockaddr_struct;

//ͬʱ���Դ򿪵�����socket��
#define XLITE_MAX_SOCKET_NUM 6

typedef struct
{
   xl_uint8	fds_bits[XLITE_MAX_SOCKET_NUM];
} xlite_fd_set;


/*!
 * @brief get host by name event handle
 */
typedef xl_void(* xlite_socket_gethostbyname_event_handler)(xlite_socket_sockaddr_struct* sock_addr,xl_int32 request_id,xl_int32 result,xl_void* handler_param);


//////////////////////////////////////////////////////////////////////////
// xlite_drawtext.h
//////////////////////////////////////////////////////////////////////////
typedef enum {
	xlite_font_size_small		= 0,
	xlite_font_size_medium,
	xlite_font_size_large
} xlite_font_size;


//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// xLite_E_input_screen.h
//////////////////////////////////////////////////////////////////////////
#define XLITE_INPUT_SCREEN_OK					XL_TRUE
#define XLITE_INPUT_SCREEN_CANCEL				XL_FALSE

#define XLITE_INPUT_SCREEN_TYPE_NONE							0
#define XLITE_INPUT_SCREEN_TYPE_NUMBERIC						1
#define XLITE_INPUT_SCREEN_TYPE_ALPHANUMBERIC_UPPERCASE			2
#define XLITE_INPUT_SCREEN_TYPE_ALPHANUMBERIC_LOWERCASE			3
#define XLITE_INPUT_SCREEN_TYPE_ALPHANUMBERIC_SENTENCECASE		4
#define XLITE_INPUT_SCREEN_TYPE_NUMBERIC_PASSWORD				5
#define XLITE_INPUT_SCREEN_TYPE_ALPHANUMBERIC_PASSWORD			6




typedef xl_void (* xlite_input_screen_callback)(xl_void* user_param,xl_uint32 ctrl_id,xl_int32 ok_cancel);

// ����xlite_E_input_screen_show�Ĳ���
typedef struct  
{
	
	xl_int16  type;
	xl_uint16 id;		// �����������ʲô�����,������0
	xl_uint8* buffer;
	xl_uint32 buf_len;
	
	xlite_input_screen_callback callback;
	xl_void* callback_param;
} xlite_input_screen_param;

//////////////////////////////////////////////////////////////////////////
// xlite_audio.h
//////////////////////////////////////////////////////////////////////////

typedef xl_int32 xlite_audio_handle;

//////////////////////////////////////////////////////////////////////////
// xlite_sensor.h
//////////////////////////////////////////////////////////////////////////

#define XLITE_SENSOR_TYPE_NONE	0
#define XLITE_SENSOR_TYPE_XY		2
#define XLITE_SENSOR_TYPE_XYZ		3

#define XLITE_SENSOR_AXIS_NOFLIP 1
#define XLITE_SENSOR_AXIS_FLIP (-1)

//value range, don't edit it, by wxb
#define XLITE_SENSOR_VALUE_RANGE (100)
#define XLITE_SENSOR_ROTATE_RANGE (360)

//////////////////////////////////////////////////////////////////////////
// xlite_log.h
//////////////////////////////////////////////////////////////////////////

/*!
 * @brief ��־����ȼ�
 */
typedef enum
{
	xlite_log_message,
	xlite_log_warning,
	xlite_log_error,
	xlite_log_misc
} xlite_log_level;

//////////////////////////////////////////////////////////////////////////
// xlite_assert.h
//////////////////////////////////////////////////////////////////////////

typedef enum
{
	XLITE_ASSERT_LEVEL1, //��Զ���رյĻᵼ��ϵͳ�����Ĵ���
	XLITE_ASSERT_LEVEL2,
	XLITE_ASSERT_LEVEL3,
	XLITE_ASSERT_LEVEL4
} xlite_assert_level;

#endif


