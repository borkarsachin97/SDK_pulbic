#ifndef MCR_TYPEDEF_H
#define MCR_TYPEDEF_H

#ifdef __cplusplus   
extern "C"{   
#endif // __cplusplus


#include <ctype.h>
#include "stddef.h"
#include "string.h"
#include "stdio.h"
#include "stdarg.h"
#include "stdlib.h"

#include "mcr_errordef.h"

//================================ �����������Ͷ��� ========================================//
#ifndef QQNULL
typedef char				QQCHAR;
typedef unsigned char		QQBYTE;
typedef unsigned short		QQWCHAR;
typedef signed short		QQSHORT;
typedef unsigned short		QQUSHORT;
typedef signed long 		QQLONG;
typedef unsigned long 		QQULONG;
typedef signed int 			QQINT;
typedef unsigned int 		QQUINT;
typedef unsigned char 		QQBOOL;
typedef void 				QQVOID;

#define QQFALSE  			0
#define QQTRUE  			1
#define QQNULL				((void*)0)
#endif

#ifndef MNULL
#define MFALSE  (0)
#define MTRUE   (1)
#define MNULL   ((void*)0)

//base type
typedef unsigned char       MBOOL;
typedef void                MVOID;
typedef char                MCHAR;//
typedef unsigned char       MBYTE;
typedef unsigned short      MWCHAR;
typedef signed short        MSHORT;
typedef unsigned short      MUSHORT;
typedef signed long         MLONG;
typedef unsigned long       MULONG;
typedef signed int          MINT;
typedef unsigned int        MUINT;
#if defined(__X86LINUXGCC__)
typedef unsigned long       MU64;
typedef long long           MS64;
#else
typedef unsigned __int64    MU64;
typedef __int64             MS64;
#endif
#endif

#ifndef txmax
#define txmax(a,b)    (((a) > (b)) ? (a) : (b))
#endif

#ifndef txmin
#define txmin(a,b)    (((a) < (b)) ? (a) : (b))
#endif

/* ���� */
typedef struct
{
	QQINT		m_nParam1;
	QQINT		m_nParam2;
	QQINT		m_nParam3;
	QQUINT		m_nParam4;
	QQVOID*		m_pParam1;
	QQVOID*		m_pParam2;
	QQVOID**	m_ppParam;
}TParam;


/* ·������ */
#define __MCR_MAX_PATH_LENGTH__		(600)//(50) MSTAR isn't enough. KELs

/* �ļ������� */
#define __MCR_MAX_FILE_NAME_LENGTH__	(128)

/* trace�Ļ��峤�� */
#define __MCR_MAX_TRACE_BUF_LENGTH__	(256)

/* IMEI, IMSI��󳤶�*/
#define __MCR_MAX_IMEI_IMSI_LENGTH__	(20)

/* APN��󳤶� */
#define __MCR_MAX_APN_LENGTH__			(20)

/* LC��󳤶� */
#define __MCR_MAX_LC_LENGTH__			(20)

/* TerminalType��󳤶� */
#define __MCR_MAX_TERMINALTYPE_LENGTH__			(20)

/* �汾����󳤶� */
#define __MCR_MAX_VER_LENGTH__			(50)

/*appid����󳤶�*/
#define __MCR_MAX_APPID_LENGTH__            (10)

#if 0
/* ���� */
typedef enum
{
	MCR_KEY_0 = 0x0,
	MCR_KEY_1,
	MCR_KEY_2,
	MCR_KEY_3,
	MCR_KEY_4,
	MCR_KEY_5,
	MCR_KEY_6,
	MCR_KEY_7,
	MCR_KEY_8,
	MCR_KEY_9,

	MCR_KEY_LSK,
	MCR_KEY_RSK,
	MCR_KEY_ENTER,

	MCR_KEY_UP_ARROW,
	MCR_KEY_DOWN_ARROW,
	MCR_KEY_LEFT_ARROW,
	MCR_KEY_RIGHT_ARROW,

	MCR_KEY_END,
	MCR_KEY_STAR,
	MCR_KEY_POUND,

	MCR_KEY_SEND1,
	MCR_KEY_SEND2,

	MCR_MAX_KEYS 
}TMCRKEY;

/* ���� */
typedef enum
{
	MCR_KEYEVT_DOWN = 0x0,//0x100,
	MCR_KEYEVT_UP,
	MCR_KEYEVT_REPEAT,
	MCR_KEYEVT_LONGPRESS,
	MCR_KEYEVT_MAX
}TMCRKEYEVENT;

/* ���� */
typedef enum
{
	MCR_PENEVT_DOWN = 0x200,
	MCR_PENEVT_UP,
	MCR_PENEVT_MOVE
}TMCRPENEVENT;
#endif
/* ʱ�� */
typedef struct 
{
	QQUSHORT	m_nYear;
	QQBYTE		m_nMonth;
	QQBYTE		m_nDay;
	QQBYTE		m_nHour;
	QQBYTE		m_nMinute;
	QQBYTE		m_nSecond;
	QQBYTE		m_nWeekday;	// ���ڼ���0: Sunday, 1: Monday, ...
}McfTime;
#define TMCRTIME McfTime


/* SIM�� */
typedef enum
{
	MCR_SIM_DUALCARD = 0x0,
	MCR_SIM_CARD1,
	MCR_SIM_CARD2,
	MCR_SIM_NONE
}EMcrSimCard;
#define TMCRSIMCARD EMcrSimCard

/* ���ʵ� */
typedef struct  
{
	QQSHORT		m_nX;
	QQSHORT		m_nY;
}TMCRPENPOINT;

/* ��ɫ */
typedef QQULONG McrIntColor;
#define TMCRCOLOR McrIntColor

/* �������� */
#define MCR_FONT_ATTR_NORMAL			(1 << 1)	// ����
#define MCR_FONT_ATTR_BOLD				(1 << 2)	// ����
#define MCR_FONT_ATTR_ITALIC			(1 << 3)	// б��
#define MCR_FONT_ATTR_UNDERLINE			(1 << 4)	// �»���
//#define MCR_FONT_ATTR_STRIKETHROUGH		(1 << 5)	// ɾ����

/* �����С */
#define MCR_FONT_SIZE_SMALL				(1 << 1)	// С����
#define MCR_FONT_SIZE_MEDIUM			(1 << 2)	// ������
#define MCR_FONT_SIZE_LARGE				(1 << 3)	// ������

/* ���� */
typedef struct
{
	QQUINT		m_nAttr;	// ����
	QQUINT		m_nSize;	// ��С
}TMCRFONT;

/* �� */
typedef struct
{
	QQINT		m_nX;
	QQINT		m_nY;
}TMCRPOINT;

/* ��С */
typedef struct
{
	QQINT		m_nWidth;
	QQINT		m_nHeight;
}TMCRSIZE;

typedef struct  
{
	QQINT		m_nX1;
	QQINT		m_nY1;
	QQINT		m_nX2;
	QQINT		m_nY2;
}TMCRRECT;

typedef struct
{
	QQINT		m_nX;
	QQINT		m_nY;
	QQINT		m_nRadius;
}TMCRCIRCLE;


/* gc */
typedef QQINT McfGc;

/* �ļ� */
typedef QQINT McfFd;

/*soc*/
typedef QQINT McrSocHd;

/* ���� */
typedef enum
{
	MCR_RADIX_2 = 2,
	MCR_RADIX_8 = 8,
	MCR_RADIX_10 = 10,
	MCR_RADIX_16 = 16
}TMCRRADIX;

//=================================================================

/* ������������ */
#ifdef WIN32
#define __MCR_EXPORT__		__declspec(dllexport)
#else
#define __MCR_EXPORT__
#endif

//===========================================================================
/*
	MS VC++ 9.0 _MSC_VER = 1500
	MS VC++ 8.0 _MSC_VER = 1400
	MS VC++ 7.1 _MSC_VER = 1310
	MS VC++ 7.0 _MSC_VER = 1300
	MS VC++ 6.0 _MSC_VER = 1200
	MS VC++ 5.0 _MSC_VER = 1100
*/

#if defined(WIN32)

#define __MCR_INLINE__		__inline
#if _MSC_VER > 1200
#define __MCR_FUNCTION__	__FUNCTION__
#else
#define __MCR_FUNCTION__	""
#endif // _MSC_VER

#elif defined(__ARMCC_VERSION) // or __CC_ARM

#define __MCR_INLINE__		__inline
#define __MCR_FUNCTION__	__FILE__ //""

#elif defined(__GNUC__)

#define __MCR_INLINE__		inline
#define __MCR_FUNCTION__	__FUNCTION__

#else

#define __MCR_INLINE__
#define __MCR_FUNCTION__

#endif // WIN32

//===========================================================================

typedef QQVOID (*_fFuncPtr)(QQVOID);
typedef QQVOID (*_fPsExtFuncPtr)(QQVOID*, QQINT);
typedef QQVOID (*_fFuncPtrU32)(QQUINT);
typedef QQVOID (*_fPsFuncPtr)(QQVOID *);
typedef QQBYTE (*_fPsIntFuncPtr)(QQVOID *);
typedef QQVOID (*_fKeyHandlerFuncPtr)(QQVOID);
typedef QQVOID (*_fmmi_pen_hdlr)(TMCRPENPOINT pos);
typedef QQVOID (*_fPsFuncPtrU16)(QQVOID*, QQUINT, QQUSHORT);







//end of sound player
#ifdef __cplusplus   
}   
#endif // __cplusplus
#endif // MCR_TYPEDEF_H

