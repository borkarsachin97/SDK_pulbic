#ifndef MCR_OS_CONFIG_H
#define MCR_OS_CONFIG_H

#ifdef __cplusplus   
extern "C"{   
#endif // __cplusplus

//#define MCR_DEBUG
//#define MCR_APPMGR_TRACE
//ƽ̨���̱��ʶ

#define __MMI_TOUCH_SCREEN__

#ifdef WIN32
#define FIRM_SIMULATOR_FREE_DLL
#endif

// ƽ̨��ʶ
#define PROTOCOL_PLATFORMID_MTK					(0)
#define PROTOCOL_PLATFORMID_MCARE				(1)
#define PROTOCOL_PLATFORMID_KJAVA				(2)
#define PROTOCOL_PLATFORMID_S60V2				(3)
#define PROTOCOL_PLATFORMID_S60V3				(4)
#define PROTOCOL_PLATFORMID_S60V5				(5)
#define PROTOCOL_PLATFORMID_WM					(6)
#define PROTOCOL_PLATFORMID_LINUX				(7)
#define PROTOCOL_PLATFORMID_ANDRIOD				(8)
#define PROTOCOL_PLATFORMID_IPHONE				(9)
#define PROTOCOL_PLATFORMID_SPREADTRUM  		(10)
#define PROTOCOL_PLATFORMID_MSTAR         		(11)
#define PROTOCOL_PLATFORMID_MCARE_MTK6223       (0x100)
#define PROTOCOL_PLATFORMID_MCARE_MTK6225       (0x101)
#define PROTOCOL_PLATFORMID_MCARE_MTK6226       (0x102)
#define PROTOCOL_PLATFORMID_MCARE_MTK6228       (0x103)
#define PROTOCOL_PLATFORMID_MCARE_MTK6235       (0x104)
#define PROTOCOL_PLATFORMID_MCARE_MTK6253       (0x105)
#define PROTOCOL_PLATFORMID_UNKNOWN				(0xffff)

// �ڴ�����
#define PROTOCOL_MEMTYPE_STATIC					(0)
#define PROTOCOL_MEMTYPE_ASM					(1)
#define PROTOCOL_MEMTYPE_MMEDIA					(2)
#define PROTOCOL_MEMTYPE_UNKNOWN				(3)

// �ֱ��ʣ�λ�룩
#define PROTOCOL_RESOLUTION_128_128				(1<<0)
#define PROTOCOL_RESOLUTION_128_160				(1<<1)
#define PROTOCOL_RESOLUTION_160_128				(1<<2)
#define PROTOCOL_RESOLUTION_176_144				(1<<3)
#define PROTOCOL_RESOLUTION_144_176				(1<<4)
#define PROTOCOL_RESOLUTION_176_208				(1<<5)
#define PROTOCOL_RESOLUTION_208_176				(1<<6)
#define PROTOCOL_RESOLUTION_176_220				(1<<7)
#define PROTOCOL_RESOLUTION_220_176				(1<<8)
#define PROTOCOL_RESOLUTION_208_208				(1<<9)
#define PROTOCOL_RESOLUTION_240_320				(1<<10)
#define PROTOCOL_RESOLUTION_320_240				(1<<11)
#define PROTOCOL_RESOLUTION_320_400				(1<<12)
#define PROTOCOL_RESOLUTION_400_320				(1<<13)
#define PROTOCOL_RESOLUTION_240_400				(1<<14)
#define PROTOCOL_RESOLUTION_UNKNOWN				(1<<30)
#define PROTOCOL_RESOLUTION_AUTO				(1<<31)

// �������ͣ�λ�룩
#define PROTOCOL_KEYTYPE_QWERTY_KEYPAD			(1<<0)
#define PROTOCOL_KEYTYPE_NORMAL_KEYPAD			(1<<1)
#define PROTOCOL_KEYTYPE_TOUCHPAD				(1<<2)
#define PROTOCOL_KEYTYPE_REDUCED				(1<<3)
#define PROTOCOL_KEYTYPE_UNKNOWN				(1<<6)

/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
#define ____begin_customer_config_specific__
/* ѡ���Ӧ��MTKƽ̨ */
//#define MCR_MTK_VER		812
//#define MCR_MTK_VER		816
//#define MCR_MTK_VER		828
#define MCR_MTK_VER		840
//#define MCR_MTK_VER		912
//#define MCR_MTK_VER		932
//#define MCR_MTK_VER		952

#define CUSTOMER_TERMINALTYPE           "a1068_0952"
#define CUSTOMER_CHANNEL                "70036"
#define CUSTOMER_PLATFORM               PROTOCOL_PLATFORMID_MSTAR
#define CUSTOMER_RESOLUTION             PROTOCOL_RESOLUTION_240_400
#define CUSTOMER_FIRM_PORTINGID         (1)

#define ____end_customer_config_specific__
/******************************************************************************/
/******************************************************************************/
/******************************************************************************/



/* ������ */
#define	MCR_IS_SUPPORT_ARM9



/* �ڴ���� */
#define MCR_MEM_DEBUG_MOD

#define MCR_REQUIRE_MEM_SIZE  (650*1024) //min mem size

/* ��ͬ��ƽ̨ʹ�ò�ͬ���ڴ� */
#if (MCR_MTK_VER==812)

//#define MCR_USE_STATIC_MEM	/* ��̬�ڴ� */
#define MCR_USE_ASM_MEM 		/* APP_MEM */
#define MCR_MAX_MEM_LEN		(650*1024)
#define MCR_MAX_MED_RESERVE_MEM_LEN         (150*1024)

#elif (MCR_MTK_VER == 840 || MCR_MTK_VER == 952)

#define MCR_USE_MEDIA_MEM	/* ��ý���ڴ�*/
#define MCR_MAX_MEM_LEN		(1500*1024)
//#define MCR_USE_ASM_MEM 		/* APP_MEM */
//#define MCR_MAX_MEM_LEN		(650*1024)
#define MCR_MAX_MED_RESERVE_MEM_LEN         (300*1024)

#else
#error "Define MCR_MTK_VER first!!"
#endif


/* ��ͬ��GDI */
#if (MCR_MTK_VER<652)
#define MCR_PIXTEL_UI_XXX
#else
#define MCR_GUI_XXX
#endif



/* �Ƿ�֧�ֵ����ֻ����ص�WAP����� */
#define	MCR_SUPPORT_WAP_BROWSER

#ifndef MCR_SUPPORT_WAP_BROWSER
#define _MCR_HTTPDOWN_SUPPORT_
#endif

/* �Ƿ�֧���� */
#define MCR_SUPPORT_VIBRATE

/* ������� */
#if (MCR_MTK_VER>=828)
#define MCR_USE_CBM_SOCKET
#endif


#define MCR_SUPPORT_CUSTOMIZE_NETWORK

/* ֧��QQ �һ�ͼ�� */
#define MCR_QQ_SUPPORT_IDLE_ICON



// �ü�...
#define MCR_LOW_PROFILING 		(0)

#define _MCF_PRECISE_TIMER_


#define MCARE_STAT_CRYPT

#define MCR_MAX_URL_LEN     (512)
#define MCR_MAX_URL_SIZE     (MCR_MAX_URL_LEN+1) //384
#define MCR_QQ_BRW_DL_FOLDER_NAME       L"QQDownload"
#if 1
#define MCR_MSTAR_BRW_DL_FOLDER_NAME       L"Download"  //only for mstar
#endif


#define MCR_RESERVED_MEM_SIZE		(50*1024)


#ifdef __cplusplus   
}   
#endif // __cplusplus
#endif // MCR_OS_CONFIG_H
