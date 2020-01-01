#if defined(__ZYUE_ENGINE__)
#ifndef PBK_PLATFORM_DEFINE_H
#define PBK_PLATFORM_DEFINE_H

//ֻ�����궨�壬���Ͷ��壬�ṹ�壬ö�ٵ�

#define PBK_PLATFORM_V6000 //�汾���ƺ�
#define PBK_PLATFORM_V6100

//c type
typedef unsigned char       c_uint8;
typedef unsigned short      c_uint16;
typedef unsigned int        c_uint32;
#ifdef WIN32
typedef unsigned __int64    c_uint64;
#else
typedef unsigned long long  c_uint64;
#endif
typedef signed char         c_int8;
typedef signed short        c_int16;
typedef signed int          c_int32;
typedef unsigned short      c_wchar;

#ifndef WIN32
/*
typedef c_int32 *va_list[1];
#define va_start(ap, parmN) (void)(*(ap) = __va_start(parmN))
#define va_arg(ap, type) __va_arg(*(ap), type)
#define va_copy(dest, src) ((void)(*(dest) = *(src)))
#define va_end(ap) ((void)(*(ap) = 0))
*/
#include "stdarg.h"
#else
#include <windows.h>
#endif

#ifndef WIN32
#define PBK_ALIGN __align(4)
#else
#define PBK_ALIGN
#endif

//common
//http://hi.baidu.com/nettechfans/blog/item/655449d83adc992a11df9bf9.html
#define PBK_INT_ALIGN(d, a) (((d) + (a - 1)) & ~(a - 1))
#define PBK_ABS(x) ((x) >= 0 ? (x) : -(x))
#define PBK_MAX(a,b) ((a)>(b)?(a):(b))
#define PBK_MIN(a,b) ((a)<(b)?(a):(b))
#define PBK_RGB_2_565(c) (((c & 0xf80000)>>8)|((c&0xfc00)>>5)|((c&0xf8)>>3))
#define PBK_RGB_2_565_2(r, g, b)  ((((c_uint16)r << 8) & 0xF800) | (((c_uint16)g << 3) & 0x07E0) |(((c_uint16)b >> 3) & 0x001F))
#define PBK_565_R(c) ((c & 0xF800) >> 8)
#define PBK_565_G(c) ((c & 0x07E0) >> 3)
#define PBK_565_B(c) ((c & 0x001F) << 3)
#define PBK_RGB_888_R(c) (c & 0x000000FF)
#define PBK_RGB_888_G(c) ((c & 0x00FF00) >> 8)
#define PBK_RGB_888_B(c) ((c & 0xFF0000) >> 16)

#define PBK_RGB_2_888(c)(VEN_MAKE_RGB888((PBK_RGB_888_B(c)),(PBK_RGB_888_G(c)),(PBK_RGB_888_R(c))))

#if defined(PBK_LOG_ON)
#define PBK_TRACE(ARG)  (pbk_log ARG)
#else
#define PBK_TRACE(ARG) ((void)0)
#endif


/***********************************************
//0: platform ex api
//ƽ̨�����չ
************************************************/
#ifdef PBK_PLATFORM_V6000
typedef struct __PBK_NAME_VALUE
{
    char* name;
    char* value;
}PBK_NAME_VALUE;
#endif

/***********************************************
//1: standard c
//��׼c�ⲿ�ֺ���
************************************************/
#ifdef PBK_PLATFORM_V6000
#endif

/***********************************************
//2: encoding unicode
//�ַ�����ת����unicode�ַ�������
************************************************/
#ifdef PBK_PLATFORM_V6000
typedef enum __PBK_STR_ENCODE_TYPE
{
    PBK_STR_ENCODE_GB2312 = 1,  //liuwp20100424
    PBK_STR_ENCODE_UNICODE,
    PBK_STR_ENCODE_UTF8,

    PBK_STR_ENCODE_TYPE_MAX
}PBK_STR_ENCODE_TYPE;
#endif

/***********************************************
//3: memory
//�ڴ�
************************************************/



/***********************************************
//4: file
//�ļ�ϵͳ
************************************************/
#ifdef PBK_PLATFORM_V6000
#define PBK_FILE_SEEK_BEGIN 0
#define PBK_FILE_SEEK_CUR 1
#define PBK_FILE_SEEK_END 2

#define PBK_FILE_ATTR_READ_ONLY 0x01
#define PBK_FILE_ATTR_HIDDEN        0x02
#define PBK_FILE_ATTR_SYSTEM        0x04
#define PBK_FILE_ATTR_VOLUME        0x08
#define PBK_FILE_ATTR_DIR           0x10
#define PBK_FILE_ATTR_ARCHIVE       0x20
#define PBK_FILE_ATTR_LONGNAME  0x0F

#define PBK_FILE_FULL_PATH_LEN_MAX   254
typedef struct __PBK_FILE_FIND_INFO
{
     c_uint8 file_name[PBK_FILE_FULL_PATH_LEN_MAX+2];
     c_uint32 attr;
     c_uint32 size;
}PBK_FILE_FIND_INFO;

typedef struct __PBK_DISK_INFO
{
     c_uint32 disk_count;
     char disk_letter[7]; //���7��������
     char sys_letter; //ϵͳ ���ɼ�����
}PBK_DISK_INFO;

#endif

/***********************************************
//5: timer
//��ʱ��
************************************************/
#ifdef PBK_PLATFORM_V6000
typedef void (*PBK_TIMER_CALLBACK)(void* param);
#endif


/***********************************************
//6: gui
//ͼ��ͼ��
************************************************/
#ifdef PBK_PLATFORM_V6000

//ͼ�����
typedef struct __PBK_FONT_INFO
{
    c_int32         ascii_char_h;/* ascii�ַ��ĸ߶� */
    c_int8          ascii_char_w[256];/* ascii�ַ��Ŀ�� */
    c_int32         ascii_char_w_max;/* ascii�ַ��Ŀ������� */
    c_int32     cn_char_h;/* �����ַ��ĸ߶� */
    c_int32     cn_char_w;/* �����ַ��Ŀ�� */
    c_uint32        curr_font_type;/* ��ǰ������ */

    c_uint8*     fonts_cache_data;/* �ܵ�fonts��ģ�ڴ�ָ�� */

    c_uint8*    ascii_fonts_data;     /*ascii  ��ģ����*/
    c_int32      ascii_fonts_bytes;   /*һ��ascii  ��ģ����ռ�ݵĴ�С*/

    c_uint8*    cn_fonts_data;           /* ������ģ����*/
    c_int32      cn_fonts_bytes;     /*һ��������ģ����ռ�ݵĴ�С*/

    c_uint16*   fonts_data_hash;   /* �������ݵ�hash�� */

    c_uint32    font_file_id;       /* �ֿ��ļ���� */
}PBK_FONT_INFO;

typedef enum __PBK_FONT_TYPE
{
    PBK_FONT_TYPE_DEFAULT = 1, /* ϵͳĬ������ */
    PBK_FONT_TYPE_SMALL,  /* 16X16  ����С����*/
    PBK_FONT_TYPE_RESVERD1,  /* Ԥ�� */
    PBK_FONT_TYPE_RESVERD2,  /* Ԥ�� */

    PBK_FONT_TYPE_MAX
}PBK_FONT_TYPE;

//����j2me�� �����ĵ㣬��ֱ����˳ʱ����ת
typedef enum __PBK_TRANS_TYPE
{
    PBK_TRANS_MIRROR = 2,
    PBK_TRANS_MIRROR_ROT180 = 1,
    PBK_TRANS_MIRROR_ROT270 = 4,
    PBK_TRANS_MIRROR_ROT90 = 7,
    PBK_TRANS_NONE = 0,
    PBK_TRANS_ROT180 = 3,
    PBK_TRANS_ROT270 = 6,
    PBK_TRANS_ROT90 = 5
}PBK_TRANS_TYPE;

typedef struct __PBK_GUI_LAYER
{
    c_uint32 id;
    c_int32 w; //��
    c_int32 h; //��
    c_uint8* buf; //λͼ�ڴ���

    c_uint32 cur_color; //��ǰ��ɫ
    c_uint32 trans_color; //͸��ɫ

    //��ǰ�ü���
    c_int32 x1;
    c_int32 y1;
    c_int32 x2;
    c_int32 y2;
}PBK_GUI_LAYER;
typedef struct __PBK_GUI_RECT
{
    c_int16 x1;
    c_int16 y1;
    c_int16 x2;
    c_int16 y2;
}PBK_GUI_RECT;

#endif

/***********************************************
//7: socket
//����ͨѶ
************************************************/
#ifdef PBK_PLATFORM_V6000
typedef struct __PBK_SOC_EVENT
{
    c_int32   result;
    c_uint32 event_type;
    c_uint32 l_param;
}PBK_SOC_EVENT;

typedef void (*PBK_SOC_EVENT_CALLBACK)(PBK_SOC_EVENT* soc_event);

typedef struct __PBK_SOC_GET_HOST_EVENT
{
    c_int32 result;
    c_int32 addr_len;
    c_uint8 addr[16];
    c_uint32 l_param;
}PBK_SOC_GET_HOST_EVENT;
typedef void(*PBK_SOC_GET_HOST_CALLBACK)(PBK_SOC_GET_HOST_EVENT* get_host_event);

typedef struct __PBK_GPRS_ACCOUNT
{
    c_int32 present;   //�Ƿ���Ч
    c_uint8 account_name[32];  //���� unicode
    c_uint8 APN[32];    //APN unicode
    c_int32 auth_type;   /* Authentication Type */
    char user_name[16];  /* User of a Data Account */
    char password[16];   /* Password for a Data Account */
    c_uint8 dns_addr[4]; /* DNS IP Address */

    c_uint8 proxy_ip[4];
    c_uint32 proxy_port;
    c_int32 account_dcs;
    c_uint32 reserved;
}PBK_GPRS_ACCOUNT;

typedef enum __PBK_NET_TYPE
{
    PBK_NET_TYPE_CMWAP = 0, //cmwap��ʽ
    PBK_NET_TYPE_CMNET = 1, //cmnet��ʽ
    PBK_NET_TYPE_UNIWAP = 2, //��ͨ ����cmwap
    PBK_NET_TYPE_WIFI = 3, //wifi
    PBK_NET_TYPE_3G_CMWAP = 4, 
    PBK_NET_TYPE_3G_CMNET = 5,
    PBK_NET_TYPE_4G_CMWAP = 6, 
    PBK_NET_TYPE_4G_CMNET = 7, 
    PBK_NET_TYPE_UNINET  = 8, //��ͨ ��uninet��ʽ
    PBK_NET_TYPE_CTWAP  = 9, //���� ��ctwap��ʽ
    PBK_NET_TYPE_CTNET    = 10, //���� ��ctnet��ʽ
    
    PBK_NET_TYPE_MAX
}PBK_NET_TYPE;

//socket�Ϸ������¼�����
typedef enum __PBK_SOC_EVENT_TYPE
{
    PBK_SOC_EVENT_CONNECTING = 1, //��ʼ����
    PBK_SOC_EVENT_CONNECT,  //���ӽ���
    PBK_SOC_EVENT_DISCONNECT, //���ӶϿ�
    PBK_SOC_EVENT_SEND, //�ɷ���
    PBK_SOC_EVENT_RECV, //�ɽ���
    PBK_SOC_EVENT_ERROR, //����
    PBK_SOC_EVENT_MAX,
    PBK_SOC_EVENT_PUSH_0
}PBK_SOC_EVENT_TYPE;

//����������ǰ��ȡ��״̬
typedef enum __PBK_SOCKET_PEEK_STATE
{
    PBK_SOCKET_PEEK_NO = 0,  //û����ȡ����
    PBK_SOCKET_PEEK_START, //��һ����ȡ����Ҫ�ϲ��ס����ͷ��
    PBK_SOCKET_PEEK_CONTINUE, //�м���ȡ
    PBK_SOCKET_PEEK_END, //���һ����ȡ������

    PBK_SOCKET_PEEK_STATE_MAX
}PBK_SOCKET_PEEK_STATE;



//http
typedef enum __PBK_HTTP_REQ_TYPE
{
    PBK_HTTP_REQ_GET = 0, //get��ʽ����
    PBK_HTTP_REQ_POST,    //post��ʽ����

    PBK_HTTP_REQ_TYPE_MAX
}PBK_HTTP_REQ_TYPE;

typedef enum __PBK_HTTP_EVENT
{
    PBK_HTTP_START = 1, //��������
    PBK_HTTP_REQUEST, //���������      l:ʣ�����û�� w:�ܹ�Ҫ���Ͷ���
    PBK_HTTP_RESP, //��������           l:Ŀǰ���ճ��� w:�ܹ�Ҫ���յĳ���
    PBK_HTTP_PEEK, //ת�ƻ��������� l:���ݻ����� w:���ݳ���
    PBK_HTTP_END, //������� l:���ݻ����� w:���ݳ���
    PBK_HTTP_ERROR, //����
    PBK_HTTP_TIMEOUT, //����ʱ

    PBK_HTTP_EVENT_MAX
}PBK_HTTP_EVENT;

typedef struct __PBK_HTTP_REQ_INFO
{
    char* host;
    char* url; //����url
    char* ref_url; //referer�������ַ������Ҫ�ӻ��н�����
    char* ua; //User-Agent�������ַ������Ҫ�ӻ��н�����
    char* head_param; //��������ͷ�������ַ������Ҫ�ӻ��н�����
    char* get_data; //get��ʽ���ݵ�����
    c_uint8* post_data; //post��ʽ���͵�����
    c_uint32 post_data_length;
    c_uint32 req_type; //PBK_HTTP_REQ_TYPE  0:get 1:post ����ʽ
}PBK_HTTP_REQ_INFO;

typedef enum __PBK_HTTP_CONTENT_TYPE
{
    PBK_MIME_TEXT_HTML = 1,
    PBK_MIME_TEXT_XHTML,
    PBK_MIME_TEXT_WML,
    PBK_MIME_TEXT_PLAIN,
    PBK_MIME_IMAGE_JPEG,
    PBK_MIME_IMAGE_GIF,
    PBK_MIME_IMAGE_PNG,
    PBK_MIME_EBK2_ZLIB_PAGE,
    PBK_MIME_JAVA_JAD,
    PBK_MIME_JAVA_JAR,
    PBK_MIME_SYMBIAN_SIS,
    PBK_MIME_MMS,

    PBK_HTTP_CONTENT_TYPE_MAX
}PBK_HTTP_CONTENT_TYPE;

typedef struct __PBK_HTTP_RESP_INFO
{
    c_uint32 status;            //����״̬
    c_uint32 content_length;    //body����
    c_uint32 content_offset;        //body�ڷ��������е�ƫ��
    c_uint32 content_type;
    c_uint32 is_chunked; //transfer-encoding: chunked
    char* location; //location:
    //char* file_name; //Content-disposition: attachment;filename=""

    c_uint32 charset; //0:utf-8 1:gb2312
}PBK_HTTP_RESP_INFO;

typedef struct __PBK_HTTP_DATA PBK_HTTP_DATA;
typedef void (*PBK_HTTP_EVENT_CALLBACK)(PBK_HTTP_DATA* http_data, c_uint32 event_type, c_uint32 l_param, c_uint32 w_param);

struct __PBK_HTTP_DATA
{
    char* req_head_buf; //����ͷ���ݻ��壬ָ��send_buf
    c_uint32 req_head_length;
    c_uint32 req_head_offset;

    char* resp_head_buf; //����ͷ���ݻ��壬ָ��recv_buf
    c_uint32 resp_head_length;
    c_uint32 resp_head_offset;

    PBK_HTTP_RESP_INFO resp_info; //����ͷ��������Ľ��

    PBK_HTTP_EVENT_CALLBACK event_callback; //֪ͨ�ϲ�Ļص��ӿ�

    char* (*get_url_param)(char* url); //����url��ȡ�������

    //����һ��������ʽ��ʹ�õ�sim����ÿ������ǰ��Ҫ���ã���Ϊ�������������ÿ��ܱ�����Ӧ�øı�
    c_int32 net_type; //���ӷ�ʽ
    c_uint32 net_sim_index; //����sim����ţ�˫��˫������Ч
    c_uint32 timeout_timer_id; //���ڳ�ʱ�����

    void* w_param; //������һ������
    c_uint32 is_net_used; //��ͨ���Ƿ����������

    //socket ����start
    c_int32 soc_id; //ϵͳsocket id
    c_uint32 can_recv; //���ݻ�û���꣬���������ˣ�����������

    c_uint8* send_buf; //���ͻ�����
    c_uint32 send_buf_size; //���ͻ�������С

    c_uint8* recv_buf; //���ջ�����
    c_uint32 recv_buf_size; //�������ݻ�������С

    c_uint32 send_data_length; //�������ݳ���
    c_uint32 recv_data_length; //�������ݳ���

    //c_uint32 once_send_data_length; //����һ��ϵͳ���ͺ��������ͳ�ȥ�����ݳ���
    //c_uint32 once_recv_data_length; //����һ��ϵͳ���պ��������յ����ݳ���

    //��������Ԥ����
    c_uint32 peek_data_length;
    c_uint32 peek_state;
    //socket ����end
};
#endif


/***********************************************
//8: device
//�豸��Ϣ
************************************************/
#ifdef PBK_PLATFORM_V6000
typedef enum __PBK_LCD_TYPE
{
    PBK_LCD_128_128 = 1,
    PBK_LCD_128_160 = 2,
    PBK_LCD_176_220 = 3,
    PBK_LCD_240_320 = 4,
    PBK_LCD_240_400 = 5,
    PBK_LCD_240_432 = 6,
    PBK_LCD_320_240 = 7,
    PBK_LCD_400_240 = 8,
    PBK_LCD_432_240 = 9,
    PBK_LCD_320_480 = 10,
    PBK_LCD_480_320 = 11,
    PBK_LCD_480_800 = 12,
    PBK_LCD_360_480 = 15,
	PBK_LCD_360_640 = 21,
    PBK_LCD_TYPE_MAX
}PBK_LCD_TYPE;
typedef enum __PBK_LCD_DIRECTION
{
    PBK_LCD_ANGLE_0   ,
    PBK_LCD_ANGLE_90  ,
    PBK_LCD_ANGLE_180 ,
    PBK_LCD_ANGLE_270
}PBK_LCD_DIRECTION;

typedef enum __PBK_SIM_TYPE
{
    PBK_SIM_MOBILE = 0, //�ƶ���
    PBK_SIM_UNICOM = 1, //��ͨ��
    PBK_SIM_INVALID = 2, //��Ч��
    PBK_SIM_TELECOM = 3, //���ſ�

    PBK_SIM_MAX
}PBK_SIM_TYPE;

typedef enum __PBK_KEYBOARD_TYPE
{
    PBK_KEYBOARD_COMMON = 0, //����������
    PBK_KEYBOARD_ONLY_TOUCH = 1, //ֻ�д���
    PBK_KEYBOARD_ONLY_KEYBOARD = 2, //ֻ�м���
    PBK_KEYBOARD_QWERTY_KEYBOARD, //ȫ����

    PBK_KEYBOARD_TYPE_MAX
}PBK_KEYBOARD_TYPE;

typedef enum __PBK_LANGUAGE_TYPE
{
    PBK_LANGUAGE_CN = 0, //����
    PBK_LANGUAGE_EN, //Ӣ��

    PBK_LANGUAGE_TYPE_MAX
}PBK_LANGUAGE_TYPE;
typedef enum __PBK_DEVICE_TYPE
{
    PBK_DEVICE_TOUCH_SCREEN,
    PBK_DEVICE_KEYBOARD,
    PBK_DEVICE_DUAL_SIM,
    PBK_DEVICE_FM,
    PBK_DEVICE_TV,
    PBK_DEVICE_CMMP,
    PBK_DEVICE_GPS,
    PBK_DEVICE_BLUETOOTH,
    PBK_DEVICE_WIFI,
    PBK_DEVICE_DIRECT_SENSOR,
    PBK_DEVICE_MOTION,
    PBK_DEVICE_MEM_LARGER_MODE, //���ڴ�
    PBK_DEVICE_MEM_SCREEN, //��Ļ�ڴ�
    PBK_DEVICE_VECTOR_FONT, //ʸ������
    PBK_DEVICE_TRI_SIM,            // sim��3
    PBK_DEVICE_QUAD_SIM,        // sim��4

    PBK_DEVICE_MAX
}PBK_DEVICE_TYPE;

typedef enum __PBK_SYS_FUNC_ID
{
    PBK_SYS_FUNC_ID_TEST = 0, 
    PBK_SYS_FUNC_ID_ZHNAGYUE_DIR = 1, 
    PBK_SYS_FUNC_ID_EBOOK_DIR = 2, 
    PBK_SYS_FUNC_ID_SBAPI = 3, //״̬�����api
    PBK_SYS_FUNC_ID_SIMAPI = 4, //sim�����api
    PBK_SYS_FUNC_ID_6100API = 5, //6100�汾����

    PBK_SYS_FUNC_ID_GUI = 8, //gui��չ
    PBK_SYS_FUNC_ID_6105API = 9, //6.5�汾����Ժ�����API
    
    PBK_SYS_FUNC_ID_EMBED_BOOK = 10,
//#ifdef	PBK_OPEN_EMBED_URL
    PBK_SYS_FUNC_ID_EMBEDURL = 11, //������ҳ
//#endif

    PBK_SYS_FUNC_ID_MAX = 16,
    //
    PBK_SYS_FUNC_ID_DEWAV_FEE_FUN = 1000,
    PBK_SYS_FUNC_ID_DEWAV_EXTRA_FUN = 1001,
    PBK_SYS_FUNC_ID_IS_SUPPORT_SIM_SELECT    = 10000,    
    PBK_SYS_FUNC_ID_UPDATE_ZPP = 10001,            // Ҫ������ ZPP ����
}PBK_SYS_FUNC_ID;

typedef enum __PBK_SYS_DEVICE_ID
{
    PBK_SYS_DEVICE_ID_TEST = 0,

    PBK_SYS_DEVICE_ID_MAX
}PBK_SYS_DEVICE_ID;

typedef enum __PBK_SYS_THIRD_APP_ID
{
    PBK_SYS_THIRD_APP_QQ = 0,

    PBK_SYS_THIRD_APP_ID_MAX
}PBK_SYS_THIRD_APP_ID;
#endif

/***********************************************
//9: system
//ϵͳ��ع��ܵ���
************************************************/
#ifdef PBK_PLATFORM_V6000
typedef struct __PBK_TIME
{
    c_uint16 year;
    c_uint8 month;
    c_uint8 day;
    c_uint8 hour;
    c_uint8 min;
    c_uint8 sec;
    c_uint8 day_index; /* 0=Sunday */
}PBK_TIME;

//input
typedef enum __PBK_INPUT_TYPE
{
    PBK_INPUT_PINYIN = 1, //ƴ��
    PBK_INPUT_NUM = 2, //����
    PBK_INPUT_ABC = 3, //��ĸ

    PBK_INPUT_TYPE_MAX
}PBK_INPUT_TYPE;

typedef enum __PBK_POP_TYPE
{
    PBK_POP_WARNING = 1, //����
    PBK_POP_SUCCESS = 2, //�ɹ�
    PBK_POP_FAILED = 3, //ʧ��

    PBK_POP_TYPE_MAX
}PBK_POP_TYPE;

typedef void (*PBK_SYS_CALLBACK) (c_int32 result, void* data);

#endif


/***********************************************
//10: media
//��ý��
************************************************/
#ifdef PBK_PLATFORM_V6000
enum
{
    PBK_AUDIO_AMR,                  // AMR
    PBK_AUDIO_WAV,                  // WAV
    PBK_AUDIO_MIDI,                 // MIDI
    PBK_AUDIO_MP3,                  // 3GP mp3?
    PBK_AUDIO_WMA,
    PBK_AUDIO_MAX
};

enum
{
    PBK_AUDIO_SPEAKER,
    PBK_AUDIO_MICROPHONE,
    PBK_AUDIO_SPEAKER2,
    PBK_AUDIO_LOUDSPEAKER,
    PBK_AUDIO_SPEAKER_BOTH,
    PBK_AUDIO_BT_HEADSET,
    PBK_AUDIO_DEVICE_MAX
};
enum
{
    PBK_TONE_RING,
    PBK_TONE_POWERON,
    PBK_TONE_POWER_OFF,
    PBK_TONE_MESSAGE,
    PBK_TONE_KEYPAD,
    PBK_TONE_ALARM,
    PBK_TONE_CARD2_RING,
    PBK_TONE_CARD2_MESSAGE,
    PBK_TONE_MAX
};
#endif


/***********************************************
//11: zpp
//��������
************************************************/
#ifdef PBK_PLATFORM_V6000
typedef enum __PBK_WM_ID
{
//app
    PBK_WM_START = 1,
    PBK_WM_PAUSE,
    PBK_WM_RESUME,
    PBK_WM_EXIT,

//key
    PBK_WM_KEY_DOWN,
    PBK_WM_KEY_UP,
    PBK_WM_KEY_REPEAT,
    PBK_WM_KEY_LONG_PRESS,
    PBK_WM_KEY_HALF_PRESS_DOWN,
    PBK_WM_KEY_HALF_PRESS_UP,
//mouse
    PBK_WM_MOUSE_DOWN,
    PBK_WM_MOUSE_UP,
    PBK_WM_MOUSE_MOVE,

//input
    PBK_WM_CHAR, //�����ַ�

    PBK_WM_DRAW,

    PBK_WM_WIN, //ֱ�ӷ����ؼ�
//timer
    PBK_WM_TIMER,
//t card
    PBK_WM_TCARD_INSERT,
    PBK_WM_TCARD_REJECT,
//usb cable

//sms
    PBK_WM_SMS_DELIVER,
    PBK_WM_SMS_SEND_RESULT,
    PBK_WM_SOCKET,

//motion
    PBK_WM_MOTION,
    PBK_WM_LONG_PRESS_KEY, //chenjinlei 20100610
//fee
    PBK_WM_FEE_RESULT, 
//net type
    PBK_WM_NET_STATUS_UPDATE,     // ���� GPRS WIFI ��
//lcd switch
    PBK_WM_LCD_SWITCH,        // LCD ��ת��������μ� PBK_LCD_DIRECTION
    PBK_WM_MOUSE_LONG_PRESS, 
    PBK_WM_MOUSE_DOUBLE_PRESS, 

	PBK_WM_FEE_RESULT_SYNC, //liuwp �첽֪ͨ
	PBK_WM_FEE_REQ, //�Ʒ�����
	PBK_WM_CONFIRM_REQ, //
	
//fm
//audio
//tv
//cmmb
//bt
    //liuwp 20101105
    PBK_WM_SYS_MIN_ID = 100, //ϵͳ��Ϣ��100��ʼ
    PBK_WM_SYS_RUN, //����
    PBK_WM_SYS_RUN_CHANGE, //�л�������һ���Ѿ�������app����
    PBK_WM_SYS_DESTORY, //����
    PBK_WM_SYS_DESTORY_ALL, //��������app


    PBK_WM_MAX
}PBK_WM_ID;

//key define
typedef enum __PBK_KEY_DEF
{
    C_KEY_0 = 0,
    C_KEY_1,
    C_KEY_2,
    C_KEY_3,
    C_KEY_4,
    C_KEY_5,
    C_KEY_6,
    C_KEY_7,
    C_KEY_8,
    C_KEY_9,
    C_KEY_LEFT_SOFTKEY,
    C_KEY_RIGHT_SOFTKEY,
    C_KEY_CENTER_SOFTKEY,
    C_KEY_UP_ARROW,
    C_KEY_DOWN_ARROW,
    C_KEY_LEFT_ARROW,
    C_KEY_RIGHT_ARROW,
    C_KEY_SEND,
    C_KEY_END,
    C_KEY_CLEAR,    //clr
    C_KEY_STAR,     //*
    C_KEY_POUND,    //#
    C_KEY_VOL_UP,
    C_KEY_VOL_DOWN,
    C_KEY_CAMERA,
    C_KEY_ENTER,
    C_KEY_OK = C_KEY_ENTER,
    C_KEY_EXTRA_1,
    C_KEY_EXTRA_2,
    C_KEY_PLAY_STOP,
    C_KEY_FWD,
    C_KEY_BACK,
    C_KEY_POWER,                    // power �� end �е���Ŀ����ͬһ����
    C_KEY_EXTRA_A,
    C_KEY_EXTRA_B,

    C_KEY_MAX
}PBK_KEY_DEF;

typedef struct __PBK_APP_INFO
{
    //c_uint32 name_id; //app���
    c_uint32 version;  //�汾
    c_uint32 build_time; //����ʱ��
    c_uint32 file_size;  //�ļ���С
    c_uint8 name[32];           // ���� unicode
    c_uint8 description[256];   // ��� unicode
    //c_uint8 icon_data[2 * 1024];
    c_uint32 icon_offset;
    c_uint32 icon_size;
}PBK_APP_INFO;

typedef c_uint32 (*PBK_APP_MSG_PROCESS_FUNC)(c_uint32 msg_id, c_uint32 from_app_id, c_uint32 l_param, c_uint32 w_param); //from_app_idΪ���ʹ���Ϣ��app_id

//image type
typedef enum __PBK_RES_TYPE
{
    PBK_RES_TYPE_STR,           // string, text, html, zlib compress
    PBK_RES_TYPE_UNICODE,       // string, text, html,
    PBK_RES_TYPE_TXT,           // string, text, html, zlib compress
    PBK_RES_TYPE_BMP,           // BMP
    PBK_RES_TYPE_LZ,            // 16BIT LZCSS
    PBK_RES_TYPE_GIF,           // GIF
    PBK_RES_TYPE_PNG,           // PNG
    PBK_RES_TYPE_JPG,           // JPG
    PBK_RES_TYPE_BIN,           // �Զ���,��������
    PBK_RES_TYPE_BITMAP,        // 16BIT LZCSS ��ѹ֮���λͼ
    PBK_RES_TYPE_MAX
}PBK_RES_TYPE;

#define PBK_IMG_TYPE_BMP    PBK_RES_TYPE_BMP
#define PBK_IMG_TYPE_LZ     PBK_RES_TYPE_LZ
#define PBK_IMG_TYPE_GIF    PBK_RES_TYPE_GIF
#define PBK_IMG_TYPE_JPEG   PBK_RES_TYPE_JPG
#define PBK_IMG_TYPE_PNG    PBK_RES_TYPE_PNG
#define PBK_IMG_TYPE_BITMAP PBK_RES_TYPE_BITMAP
#define PBK_IMG_TYPE_UNKOWN 0xffffffff

typedef struct __PBK_IMAGE
{
    c_int32 w;
    c_int32 h;
    c_uint8* data;
    c_uint32 data_size;
    c_uint32 type;              //PBK_IMAGE_TYPE, ���� bitmap �ṹ
}PBK_IMAGE;

/*
typedef struct __PBK_BITMAP
{
    c_int32 w;
    c_int32 h;
    c_uint8* data;
    c_uint32 data_size;
}PBK_BITMAP;
*/
#endif

/***********************************************
//12: 
************************************************/
#ifdef PBK_PLATFORM_V6100
#define PBK_FEE_ENTER_TAG (0x5a504159) //������ݱ�ʶZPAY

typedef struct __PBK_FEE_CALLBACK_DATA
{
    char fee_key[32];
    void* callback_data;
}PBK_FEE_CALLBACK_DATA;

typedef struct __PBK_FEE_ENTER_DATA
{
    c_uint32 tag;
    char* app_name;
    c_uint32 app_name_id;
    c_uint32 app_run_id;
    c_uint32 res_id; 
    c_uint32 fee_num; 
    char* app_info;
    char* tip_info; 
    PBK_SYS_CALLBACK result_callback; 
    void* callback_data;

    c_uint8* body_buf;
    c_uint32 body_length;
    c_uint32 reserverd[4];
}PBK_FEE_ENTER_DATA;

typedef struct __PBK_SMS_CONFIRM_ENTER_DATA
{
    char* addr;
    c_uint8* content;
    void* confirm_item;
    c_uint32 reserverd[4];
}PBK_SMS_CONFIRM_ENTER_DATA;
#endif

typedef enum __PBK_APP_UPDATE_EVENT_TYPE
{
    PBK_APP_UPDATE_EVENT_START = 0, //��ʼ����
    PBK_APP_UPDATE_EVENT_END, //�������
    PBK_APP_UPDATE_EVENT_PROCESS, //l_param:�ļ����ֽ���   w_param:��ǰ�Ѿ����ص��ֽ���
    PBK_APP_UPDATE_EVENT_ERROR, //����ʧ�ܣ�l_param:������

    PBK_APP_UPDATE_EVENT_TYPE_MAX
}PBK_APP_UPDATE_EVENT_TYPE;

//type 0: fail  1: success  2: process, file_size & curr_size available
typedef void (*PBK_APP_UPDATE_CALLBACK)(c_uint32 evnet_type, c_uint32 l_param, c_uint32 w_param);

typedef enum __PBK_APP_UPDATE_TIP_TYPE
{
    PBK_APP_UPDATE_TIP_NONE = 0, //����ʾ��Ӧ���Լ����ݻص�����
    PBK_APP_UPDATE_TIP_DOWNLOAD, //������ʾ
    PBK_APP_UPDATE_TIP_UPDATE, //������ʾ
    PBK_APP_UPDATE_TIP_APP, //ƽ̨�ڲ���

    PBK_APP_UPDATE_TIP_MAX
}PBK_APP_UPDATE_TIP_TYPE;



//״̬��api
typedef enum __PBK_SBAPI_FUNC_ID
{
    PBK_SBAPI_FUNC_ID_BAR_HEIGHT = 0, //��ȡ�߶�
    PBK_SBAPI_FUNC_ID_DRAW = 1, //�����ֻ�״̬��

    PBK_SBAPI_FUNC_ID_MAX = 8
}PBK_SBAPI_FUNC_ID;
    
//sim�����api
typedef enum __PBK_SIMAPI_FUNC_ID
{
    PBK_SIMAPI_FUNC_ID_SIM_NUM = 0,        //��ȡsim ������ 
    PBK_SIMAPI_FUNC_ID_SIM3_VALID = 1, //sim��3�Ƿ���Ч
    PBK_SIMAPI_FUNC_ID_SIM4_VALID = 2, //sim��4�Ƿ���Ч
    PBK_SIMAPI_FUNC_ID_SIM3_TYPE = 3, //sim��3����
    PBK_SIMAPI_FUNC_ID_SIM4_TYPE = 4, //sim��4����

    PBK_SIMAPI_FUNC_ID_MAX = 8
}PBK_SIMAPI_FUNC_ID;

//6100����
typedef enum __PBK_6100API_FUNC_ID
{
	PBK_6100API_FUNC_ID_GET_UID = 0, 
	PBK_6100API_FUNC_ID_GET_PHONE_NUM = 1, 
	PBK_6100API_FUNC_ID_SET_PHONE_NUM = 2, 
	PBK_6100API_FUNC_ID_CHECK_DATA_CLEAR = 3, 
	PBK_6100API_FUNC_ID_GET_CHECK_DATA = 4, 
	PBK_6100API_FUNC_ID_GET_URL_PARAM = 5, 
	PBK_6100API_FUNC_ID_UPLOAD_INFO_ADD = 6, 
	PBK_6100API_FUNC_ID_UPLOAD_INFO_UPLOAD = 7, 
	PBK_6100API_FUNC_ID_GET_PARENT_APP_ID = 8, 
	PBK_6100API_FUNC_ID_FEE_ABORT_AS_SERVER = 9, 
	PBK_6100API_FUNC_ID_GET_CUSTOM_STR = 10, 
	PBK_6100API_FUNC_ID_FLIP2_SIMPLE_LEFT = 11, //��������
	PBK_6100API_FUNC_ID_FLIP2_SIMPLE_RIGHT = 12, //��������
	PBK_6100API_FUNC_ID_FEE_SET_FAIL_TYPE = 13, 
	PBK_6100API_FUNC_ID_FEE_GET_FAIL_TYPE = 14, 

	PBK_6100API_FUNC_ID_MAX = 16
}PBK_6100API_FUNC_ID;

//#ifdef PBK_OPEN_EMBED_URL
typedef enum __PBK_EMBED_URL_FUNC_ID
{
	PBK_EMBED_URL_FUNC_GET_URL = 0,	 // ��ȡURL���ӵ�ַ
	PBK_EMBED_URL_FUNC_GET_DATA = 1, // ��ȡURLҳ������
	PBK_EMBED_URL_FUNC_GET_DATALEN = 2,
		
	PBK_EMBED_URL_FUNC_ID_MAX = 16
}PBK_EMBED_URL_FUNC_ID;
//#endif

#endif
#endif
