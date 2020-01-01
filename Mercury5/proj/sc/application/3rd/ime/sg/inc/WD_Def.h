//////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                          WDXT Software System                             //
//                                                                           //
//            Copyright (c) 1999-2004 by Netone Technology Inc.              //
//                        All Rights Reserved                                //
//                                                                           //
//  Model    :	WD_Def.h                                                     //
//                                                                           //
//  Purpose  :	���ⲿʹ�õ����뷨�Ĺ�������                                 //
//                                                                           //
//  Designer :	Rocky Y. Zhang                                               //
//                                                                           //
// --------------------------------------------------------------------------//
//                                                                           //
//  $Author: nyf $    //
//  $Archive:: /���뷨/WdxtIme52/include/WD_Def.h                       $    //
//  $Workfile:: WD_Def.h                                                $    //
//  $Date: 2007/01/10 06:15:25 $    //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#ifndef WD_COMMON_DEF_H_
#define WD_COMMON_DEF_H_

#include "WD_Common.h"
#include "sg_common_public.h"

/***************************** ���尴����ֵ ******************************/
/* a�����ּ���0 ~ 9 */
#define WDK_NORMAL_0		0x10	/* ������������ѡ��                */
#define WDK_NORMAL_1		0x11
#define WDK_NORMAL_2		0x12
#define WDK_NORMAL_3		0x13
#define WDK_NORMAL_4		0x14
#define WDK_NORMAL_5		0x15
#define WDK_NORMAL_6		0x16
#define WDK_NORMAL_7		0x17
#define WDK_NORMAL_8		0x18
#define WDK_NORMAL_9		0x19

/* a��ȫ��ĸ���������ԣ���ͬ��ĸ��Ӧ�����뷨��ֵ����ο������뷨��Ӧ�ļ�ֵ����˵���ĵ� */

#define WDK_NORMAL_LETTER   0xB0					    //��0xB0��ʼΪ��ĸ��
#define WDK_NORMAL_A		(WDK_NORMAL_LETTER+0x01)	//  1
#define WDK_NORMAL_B		(WDK_NORMAL_LETTER+0x02)    //  2
#define WDK_NORMAL_C		(WDK_NORMAL_LETTER+0x03)    //  3
#define WDK_NORMAL_D		(WDK_NORMAL_LETTER+0x04)	//  4
#define WDK_NORMAL_E		(WDK_NORMAL_LETTER+0x05)    //  5
#define WDK_NORMAL_F		(WDK_NORMAL_LETTER+0x06)	//  6
#define WDK_NORMAL_G		(WDK_NORMAL_LETTER+0x07)	//  7
#define WDK_NORMAL_H		(WDK_NORMAL_LETTER+0x08)	//  8
#define WDK_NORMAL_I		(WDK_NORMAL_LETTER+0x09)	//  9
#define WDK_NORMAL_J		(WDK_NORMAL_LETTER+0x0A)	//  10
#define WDK_NORMAL_K		(WDK_NORMAL_LETTER+0x0B)	//  11
#define WDK_NORMAL_L		(WDK_NORMAL_LETTER+0x0C)	//  12
#define WDK_NORMAL_M		(WDK_NORMAL_LETTER+0x0D)	//  13
#define WDK_NORMAL_N		(WDK_NORMAL_LETTER+0x0E)	//  14
#define WDK_NORMAL_O		(WDK_NORMAL_LETTER+0x0F)	//  15
#define WDK_NORMAL_P		(WDK_NORMAL_LETTER+0x10)	//  16
#define WDK_NORMAL_Q		(WDK_NORMAL_LETTER+0x11)	//  17
#define WDK_NORMAL_R		(WDK_NORMAL_LETTER+0x12)	//  18
#define WDK_NORMAL_S		(WDK_NORMAL_LETTER+0x13)	//  19
#define WDK_NORMAL_T		(WDK_NORMAL_LETTER+0x14)	//  20
#define WDK_NORMAL_U		(WDK_NORMAL_LETTER+0x15)	//  21
#define WDK_NORMAL_V		(WDK_NORMAL_LETTER+0x16)	//  22
#define WDK_NORMAL_W		(WDK_NORMAL_LETTER+0x17)	//  23
#define WDK_NORMAL_X		(WDK_NORMAL_LETTER+0x18)	//  24
#define WDK_NORMAL_Y		(WDK_NORMAL_LETTER+0x19)	//  25
#define WDK_NORMAL_Z		(WDK_NORMAL_LETTER+0x1A)    //  26

#define WDK_NORMAL_A1		(WDK_NORMAL_LETTER+0x1B)	//  27
#define WDK_NORMAL_B1		(WDK_NORMAL_LETTER+0x1C)	//  28
#define WDK_NORMAL_C1		(WDK_NORMAL_LETTER+0x1D)	//  29
#define WDK_NORMAL_D1		(WDK_NORMAL_LETTER+0x1E)	//  30
#define WDK_NORMAL_E1		(WDK_NORMAL_LETTER+0x1F)	//  31
#define WDK_NORMAL_F1		(WDK_NORMAL_LETTER+0x20)	//  32
#define WDK_NORMAL_G1		(WDK_NORMAL_LETTER+0x21)	//  33
#define WDK_NORMAL_H1		(WDK_NORMAL_LETTER+0x22)	//  34
#define WDK_NORMAL_I1		(WDK_NORMAL_LETTER+0x23)	//  35
#define WDK_NORMAL_J1		(WDK_NORMAL_LETTER+0x24)	//  36
#define WDK_NORMAL_K1		(WDK_NORMAL_LETTER+0x25)	//  37
#define WDK_NORMAL_L1		(WDK_NORMAL_LETTER+0x26)	//  38
#define WDK_NORMAL_M1		(WDK_NORMAL_LETTER+0x27)	//  39
#define WDK_NORMAL_N1		(WDK_NORMAL_LETTER+0x28)	//  40
#define WDK_NORMAL_O1		(WDK_NORMAL_LETTER+0x29)	//	41
#define WDK_NORMAL_P1		(WDK_NORMAL_LETTER+0x2A)	//	42
#define WDK_NORMAL_Q1		(WDK_NORMAL_LETTER+0x2B)	//	43
#define WDK_NORMAL_R1		(WDK_NORMAL_LETTER+0x2C)	//	44
#define WDK_NORMAL_S1		(WDK_NORMAL_LETTER+0x2D)	//	45
#define WDK_NORMAL_T1		(WDK_NORMAL_LETTER+0x2E)	//	46
#define WDK_NORMAL_U1		(WDK_NORMAL_LETTER+0x2F)	//	47
#define WDK_NORMAL_V1		(WDK_NORMAL_LETTER+0x30)	//	48
#define WDK_NORMAL_W1		(WDK_NORMAL_LETTER+0x31)	//	49
#define WDK_NORMAL_X1		(WDK_NORMAL_LETTER+0x32)	//	50
#define WDK_NORMAL_Y1		(WDK_NORMAL_LETTER+0x33)	//	51
#define WDK_NORMAL_Z1		(WDK_NORMAL_LETTER+0x34)    //	52 //0XE4

#define WDK_NORMAL_A2		(WDK_NORMAL_LETTER+0x35)	//  53	//0XE5
#define WDK_NORMAL_B2		(WDK_NORMAL_LETTER+0x36)	//  54
#define WDK_NORMAL_C2		(WDK_NORMAL_LETTER+0x37)	//  55
#define WDK_NORMAL_D2		(WDK_NORMAL_LETTER+0x38)	//  56
#define WDK_NORMAL_E2		(WDK_NORMAL_LETTER+0x39)	//  57
#define WDK_NORMAL_F2		(WDK_NORMAL_LETTER+0x3A)	//  58
#define WDK_NORMAL_G2		(WDK_NORMAL_LETTER+0x3B)	//  59
#define WDK_NORMAL_H2		(WDK_NORMAL_LETTER+0x3C)	//  60
#define WDK_NORMAL_I2		(WDK_NORMAL_LETTER+0x3D)	//  61
#define WDK_NORMAL_J2		(WDK_NORMAL_LETTER+0x3E)	//  62
#define WDK_NORMAL_K2		(WDK_NORMAL_LETTER+0x3F)	//  63	//0xef
#define WDK_NORMAL_L2		(WDK_NORMAL_LETTER+0x40)	//  64
#define WDK_NORMAL_M2		(WDK_NORMAL_LETTER+0x41)	//  65
#define WDK_NORMAL_N2		(WDK_NORMAL_LETTER+0x42)	//  66
#define WDK_NORMAL_O2		(WDK_NORMAL_LETTER+0x43)	//	67
#define WDK_NORMAL_P2		(WDK_NORMAL_LETTER+0x44)	//	68
#define WDK_NORMAL_Q2		(WDK_NORMAL_LETTER+0x45)	//	69
#define WDK_NORMAL_R2		(WDK_NORMAL_LETTER+0x46)	//	70
#define WDK_NORMAL_S2		(WDK_NORMAL_LETTER+0x47)	//	71
#define WDK_NORMAL_T2		(WDK_NORMAL_LETTER+0x48)	//	72
#define WDK_NORMAL_U2		(WDK_NORMAL_LETTER+0x49)	//	73
#define WDK_NORMAL_V2		(WDK_NORMAL_LETTER+0x4A)	//	74 //0xfa
#define WDK_NORMAL_W2		(WDK_NORMAL_LETTER+0x4B)	//	75
#define WDK_NORMAL_X2		(WDK_NORMAL_LETTER+0x4C)	//	76
#define WDK_NORMAL_Y2		(WDK_NORMAL_LETTER+0x4D)	//	77	//0xfd
#define WDK_NORMAL_A3		(WDK_NORMAL_LETTER+0x4E)	//  53	//0XE5
#define WDK_NORMAL_B3		(WDK_NORMAL_LETTER+0x4F)	//  54
#define WDK_NORMAL_C3		(WDK_NORMAL_LETTER+0x50)	//  55
#define WDK_NORMAL_D3		(WDK_NORMAL_LETTER+0x51)	//  56
#define WDK_NORMAL_E3		(WDK_NORMAL_LETTER+0x52)	//  57
#define WDK_NORMAL_F3		(WDK_NORMAL_LETTER+0x53)	//  58
#define WDK_NORMAL_G3		(WDK_NORMAL_LETTER+0x54)	//  59
#define WDK_NORMAL_H3		(WDK_NORMAL_LETTER+0x55)	//  60
#define WDK_NORMAL_I3		(WDK_NORMAL_LETTER+0x56)	//  61
#define WDK_NORMAL_J3		(WDK_NORMAL_LETTER+0x57)	//  62
#define WDK_NORMAL_K3		(WDK_NORMAL_LETTER+0x58)	//  63	//0xef
#define WDK_NORMAL_L3		(WDK_NORMAL_LETTER+0x59)	//  64
#define WDK_NORMAL_M3		(WDK_NORMAL_LETTER+0x5A)	//  65
#define WDK_NORMAL_N3		(WDK_NORMAL_LETTER+0x5B)	//  66
#define WDK_NORMAL_O3		(WDK_NORMAL_LETTER+0x5C)	//	67
#define WDK_NORMAL_P3		(WDK_NORMAL_LETTER+0x5D)	//	68
#define WDK_NORMAL_Q3		(WDK_NORMAL_LETTER+0x5E)	//	69
#define WDK_NORMAL_R3		(WDK_NORMAL_LETTER+0x5F)	//	70
#define WDK_NORMAL_S3		(WDK_NORMAL_LETTER+0x60)	//	71
#define WDK_NORMAL_T3		(WDK_NORMAL_LETTER+0x61)	//	72
#define WDK_NORMAL_U3		(WDK_NORMAL_LETTER+0x62)	//	73
#define WDK_NORMAL_V3		(WDK_NORMAL_LETTER+0x63)	//	74 //0xfa
#define WDK_NORMAL_W3		(WDK_NORMAL_LETTER+0x64)	//	75
#define WDK_NORMAL_X3		(WDK_NORMAL_LETTER+0x65)	//	76
#define WDK_NORMAL_Y3		(WDK_NORMAL_LETTER+0x66)	//	77	//0xfd
#define WDK_NORMAL_Z3		(WDK_NORMAL_LETTER+0x67)
#define WDK_NORMAL_A4		(WDK_NORMAL_LETTER+0x68)	//  53	//0XE5
#define WDK_NORMAL_B4		(WDK_NORMAL_LETTER+0x69)	//  54
#define WDK_NORMAL_C4		(WDK_NORMAL_LETTER+0x6a)	//  55
#define WDK_NORMAL_D4		(WDK_NORMAL_LETTER+0x6b)	//  56
#define WDK_NORMAL_E4		(WDK_NORMAL_LETTER+0x6c)	//  57
#define WDK_NORMAL_F4		(WDK_NORMAL_LETTER+0x6d)	//  58
#define WDK_NORMAL_G4		(WDK_NORMAL_LETTER+0x6e)	//  59
#define WDK_NORMAL_H4		(WDK_NORMAL_LETTER+0x6f)	//  60
#define WDK_NORMAL_I4		(WDK_NORMAL_LETTER+0x70)	//  61
#define WDK_NORMAL_J4		(WDK_NORMAL_LETTER+0x71)	//  62
#define WDK_NORMAL_K4		(WDK_NORMAL_LETTER+0x72)	//  63	//0xef
#define WDK_NORMAL_L4		(WDK_NORMAL_LETTER+0x73)	//  64
#define WDK_NORMAL_M4		(WDK_NORMAL_LETTER+0x74)	//  65
#define WDK_NORMAL_N4		(WDK_NORMAL_LETTER+0x75)	//  66
#define WDK_NORMAL_O4		(WDK_NORMAL_LETTER+0x76)	//	67
#define WDK_NORMAL_P4		(WDK_NORMAL_LETTER+0x77)	//	68
#define WDK_NORMAL_Q4		(WDK_NORMAL_LETTER+0x78)	//	69
#define WDK_NORMAL_R4		(WDK_NORMAL_LETTER+0x79)	//	70
#define WDK_NORMAL_S4		(WDK_NORMAL_LETTER+0x7a)	//	71
#define WDK_NORMAL_T4		(WDK_NORMAL_LETTER+0x7b)	//	72
#define WDK_NORMAL_U4		(WDK_NORMAL_LETTER+0x7c)	//	73
#define WDK_NORMAL_V4		(WDK_NORMAL_LETTER+0x7d)	//	74 //0xfa
#define WDK_NORMAL_W4		(WDK_NORMAL_LETTER+0x7e)	//	75
#define WDK_NORMAL_X4		(WDK_NORMAL_LETTER+0x7f)	//	76
#define WDK_NORMAL_Y4		(WDK_NORMAL_LETTER+0x80)	//	77	//0xfd
#define WDK_NORMAL_Z4		(WDK_NORMAL_LETTER+0x81)

/* b�����ܼ�,����ÿ�����ϵĹ��ܶ�����ο������뷨���ܰ��������б�.xls�� */
#define	WDK_STAR			0x1A	/* "*" ��                           */
#define	WDK_SHARP			0x1B	/* "#" ��                           */
#define WDK_UP				0x1C	/* �����                           */
#define WDK_DOWN			0x1D	
#define WDK_LEFT			0x1E		
#define WDK_RIGHT			0x1F
#define WDK_C				0x20	/* ɾ����	                         */
#define WDK_OK				0x21	/* ȷ�ϼ�������ȷ�ϵ�ǰ��ѡ����      */
#define WDK_MENU			0x22	/* ȫ����ʱ��ִ��FN������            */
#define WDK_SOFTLEFT		0x23	/* �������ȫ����ʱ��ִ�пո������  */
#define WDK_SOFTRIGHT		0x24	/* �������                          */
#define WDK_SHIFT			0x3A	/* Shift                             */
#define WDK_CAPLOCK			0x3B	/* ��Сд�л���                      */
#define WDK_SEPERATER		0x3C	/* �ָ�                              */
#define WDK_FUNC			0x3D	/* FN��                              */
#define WDK_ENTER			0x3E	/* �س�                              */
#define WDK_ALT 			0x3F	/* Alt                               */
#define WDK_CTRL			0x40	/* Ctrl                              */
#define WDK_SPACE			0x41    /*�ո�*/
/* c���������ּ���0 ~ 9	*/
#define WDK_LONG_0			0x25	/* �������ּ���������ֱ��ѡ��        */
#define WDK_LONG_1			0x26
#define WDK_LONG_2			0x27
#define WDK_LONG_3			0x28
#define WDK_LONG_4			0x29
#define WDK_LONG_5			0x2A
#define WDK_LONG_6			0x2B
#define WDK_LONG_7			0x2C
#define WDK_LONG_8			0x2D
#define WDK_LONG_9			0x2E

/* d���������ܼ� */
#define WDK_LONG_STAR		0x2F	/* ����"#" ����						 */
#define	WDK_LONG_SHARP		0x30	/* ����"*" ����                      */
#define WDK_LONG_UP			0x31	/* �����ϼ� 		                 */
#define WDK_LONG_DOWN		0x32	/* �����¼� 		                 */
#define WDK_LONG_LEFT		0x33	/* �������                          */
#define WDK_LONG_RIGHT		0x34	/* �����Ҽ�                          */
#define WDK_LONG_C			0x35	/* ������C������������ɾ��ȫ������	 */
#define WDK_LONG_OK         0X36	/* ������OK������������ȷ��ȫ���ִ�	 */
#define WDK_LONG_MENU       0X37	/* ����                              */
#define WDK_LONG_SOFTLEFT	0x38	/* �����������                      */
#define WDK_LONG_SOFTRIGHT	0x39	/* �����������                      */
/***************************** ���尴����ֵ ******************************/


/* ��������״̬ */
#define WD_STATUS_CHINESE_NORMAL		 0		/* ���ĳ�ʼ״̬          */
#define WD_STATUS_CHINESE_INPUT			 1		/* ������������״̬      */
#define WD_STATUS_CHINESE_SELECTPINYIN   2		/* ���Ĵ�ƴѡ��״̬      */
#define WD_STATUS_CHINESE_SELECTTONE	 3		/* ����ѡ������״̬      */
#define WD_STATUS_CHINESE_SELECT		 4		/* ����ѡ��״̬          */
#define WD_STATUS_CHINESE_LEGEND		 5		/* ��������״̬          */
#define WD_STATUS_CHINESE_USERDICT	  	 6		/* ���������״̬        */

#define WD_STATUS_FOREIGN_NORMAL		 7		/* ���ĳ�ʼ״̬          */
#define WD_STATUS_FOREIGN_INPUT			 8		/* ������������״̬      */
#define WD_STATUS_FOREIGN_SELECTLETTER	 9		/* ���Ĳ��ֺ͸���״̬    */
#define WD_STATUS_FOREIGN_PREPOSTFIX	 10		/* ����ǰ��׺״̬        */
#define WD_STATUS_FOREIGN_SELECT		 11		/* ����ѡ��״̬          */
#define WD_STATUS_FOREIGN_LEGEND		 12		/* ��������״̬          */
#define WD_STATUS_FOREIGN_USERDICT	     13		/* ���������״̬        */
#define WD_STATUS_ABC_NORMAL			 14		/* ��ĸABC�����ʼ״̬   */
#define	WD_STATUS_ABC_INPUT				 15		/* ��ĸABC����״̬       */
#define WD_STATUS_FOREIGN_TONE			 16		/* ������������״̬      */

#define WD_STATUS_SYMBOL_TABLE			 17		/* ���Ų˵�״̬          */
#define WD_STATUS_SYMBOL_GROUP			 18		/* ������״̬            */
#define WD_STATUS_DIGIT_INPUT			 19		/* ��������״̬          */
#define WD_STATUS_IME_CHANGE			 20		/* ���뷨�л�״̬        */
#define WD_STATUS_HELP					 21		/* ���뷨�л�״̬        */
#define WD_STATUS_CONFIG				 22		/* ���뷨����״̬        */
#define WD_STATUS_USERDICT_MANAGE		 23		/* ���뷨����ʹ���״̬  */

#define WD_STATUS_HOTKEY_SYMBOL		 	 24		/* �ȼ�����״̬          */
#define WD_STATUS_HOTKEY_FACE			 25		/* �Ƚ��������״̬      */
#define WD_STATUS_LETTERMODE			 26		/* ��ĸ״̬              */





/**************************** �������뷨���� ********************************************/
/*ͨ��ɾ������Ҫ�����뷨ǰ���ע�ͷ���ѡ�����뷨�����ֺͷ����Ǳ����					*/
#define WDI_DIGIT			0x01	/* ����												*/


//���6 �֡�
#define WDI_CN_CPINYIN		0x03	/* ��ƴ��											*/
#define WDI_CN_BIHUA		0x07	/* �ʻ�												*/

//��ʱ�ѹ��������뷨����֧��һ�¼����������뷨
#define WDI_CN_SPINYIN		0x04	/* ����ƴ��											*/
#define WDI_CN_FULLPINYIN	0x05	/* ȫ��ĸƴ������									*/
#define WDI_CN_ZHUYIN		0x06	/* ̨��ע�����������ּ�								*/
#define WDI_CN_BUJIAN		0x08	/* �ʻ�����											*/
#define WDI_CN_BIHUAF       0x0a    /*����ʻ�											*/ 



#define WDI_CN_HKPINYIN		0x0b    /*���ƴ��											*/
#define WDI_CN_FULLZHUYIN   0x0c    /*ȫ��ĸע��������ȫ��ĸ����						*/
#define	WDI_CN_MULTI_ZHUYIN	0x0e	/*MULTI ע�����뷨									*/
#define	WDI_JAPANESE		0x0d	/*��������											*/


#define WDI_FOREIGN_BEGIN   0x20	/* ���ģ�ƴ�����֣��Ŀ�ʼλ��						*/
#define WDI_HANDWRITE_BEGIN 0x80

#define WDI_MULTIABC_BEGIN	0xA0   //��ĸ���뷨����ʼλ��

//�й������������ԣ�6 ��
#define WDI_UIGHUR			WDI_FOREIGN_BEGIN + 0x09	/* ����ά�����					*/
#define WDI_KAZAK			WDI_FOREIGN_BEGIN + 0x0A	/* ���ܹ�������					*/
#define WDI_KELKZ			WDI_FOREIGN_BEGIN + 0x0B	/* ���ܿ¶�������				*/
#define WDI_TIBETAN			WDI_FOREIGN_BEGIN + 0x0C	/* ���ܲ���						*/
#define WDI_MONGAL			WDI_FOREIGN_BEGIN + 0x0D	/* ��������						*/
#define WDI_CNKOREAN		WDI_FOREIGN_BEGIN + 0x0E	/* ���ܳ�����					*/
#define WDI_CHNDAI			WDI_FOREIGN_BEGIN + 0x0F    /* ���ܴ���						*/
#define	WDI_YI   			WDI_FOREIGN_BEGIN + 0x06	/* ��������						*/
#define	WDI_MIAO		    WDI_FOREIGN_BEGIN + 0x07	/* ��������	WANGHUI					*/
#define WDI_CHNZHUANG		WDI_FOREIGN_BEGIN + 0x08	/* ����׳��						*/
#define WDI_CHNDONG			WDI_FOREIGN_BEGIN + 0x09	/* ���ܶ���						*/

//ŷ�����ԣ���30 �֡�
#define WDI_ENGLISH			WDI_FOREIGN_BEGIN + 0x10	/* ����Ӣ��					    */
#define WDI_FRENCH			WDI_FOREIGN_BEGIN + 0x11	/* ���ܷ���					    */
#define WDI_GERMAN			WDI_FOREIGN_BEGIN + 0x12	/* ���ܵ���					    */
#define WDI_ITALIAN			WDI_FOREIGN_BEGIN + 0x13	/* �����������				    */
#define WDI_SPANISH			WDI_FOREIGN_BEGIN + 0x14	/* ������������				    */
#define WDI_PORTUGUESE		WDI_FOREIGN_BEGIN + 0x15	/* ������������				    */
#define WDI_DUTCH			WDI_FOREIGN_BEGIN + 0x16	/* ���ܺ�����				    */
#define WDI_CATALAN			WDI_FOREIGN_BEGIN + 0x17	/* ���ܼ�̩¡��				    */
#define WDI_SWEDISH			WDI_FOREIGN_BEGIN + 0x18	/* ���������				    */
#define WDI_DANISH			WDI_FOREIGN_BEGIN + 0x19	/* ���ܵ�����		            */
#define WDI_FINNISH			WDI_FOREIGN_BEGIN + 0x1A	/* ���ܷ�����			        */
#define WDI_NORWEGIAN		WDI_FOREIGN_BEGIN + 0x1B	/* ����Ų����				    */
#define WDI_ICELANDIC		WDI_FOREIGN_BEGIN + 0x1C	/* ���ܱ�����					*/
#define WDI_GREEK			WDI_FOREIGN_BEGIN + 0x1D	/* ����ϣ����				    */
#define WDI_TURKISH			WDI_FOREIGN_BEGIN + 0x1E	/* ������������				    */
#define WDI_ESTONIAN		WDI_FOREIGN_BEGIN + 0x1F	/* ���ܰ�ɳ������				*/
#define WDI_LATVIAN			WDI_FOREIGN_BEGIN + 0x20	/* ��������ά����				*/
#define WDI_LITHUANIAN		WDI_FOREIGN_BEGIN + 0x21	/* ������������					*/
#define WDI_SLOVENIAN		WDI_FOREIGN_BEGIN + 0x22	/* ����˹����������				*/
#define WDI_SERBIAN			WDI_FOREIGN_BEGIN + 0x23	/* ��������ά������				*/
#define WDI_CROATIAN		WDI_FOREIGN_BEGIN + 0x24	/* ���ܿ��޵�������				*/
#define WDI_RUSSIAN			WDI_FOREIGN_BEGIN + 0x25	/* ���ܶ���						*/
#define WDI_UKRAINIAN		WDI_FOREIGN_BEGIN + 0x26	/* �����ڿ�����					*/
#define WDI_HUNGARIAN		WDI_FOREIGN_BEGIN + 0x27	/* ������������					*/
#define WDI_POLISH			WDI_FOREIGN_BEGIN + 0x28	/* ���ܲ�����					*/
#define WDI_BULGARIAN		WDI_FOREIGN_BEGIN + 0x29	/* ���ܱ���������				*/
#define WDI_CZECH			WDI_FOREIGN_BEGIN + 0x2A	/* ���ܽݿ���					*/
#define WDI_SLOVAK			WDI_FOREIGN_BEGIN + 0x2B	/* ����˹�工����				*/
#define WDI_ROMANIAN		WDI_FOREIGN_BEGIN + 0x2C	/* ��������������				*/
#define WDI_LATIN			WDI_FOREIGN_BEGIN + 0x2D	/* ����������					*/

#define WDI_KOREAN			WDI_FOREIGN_BEGIN + 0x31	/* ���ܺ���						*/
#define WDI_THAI			WDI_FOREIGN_BEGIN + 0x32	/* ����̩����					*/
#define WDI_INDONESIAN		WDI_FOREIGN_BEGIN + 0x33	/* ����ӡ����					*/
#define WDI_MALAY			WDI_FOREIGN_BEGIN + 0x34	/* ����������					*/
#define WDI_TACALUE			WDI_FOREIGN_BEGIN + 0x35	/* ����̩������					*/
#define WDI_VIETNAMESE	    WDI_FOREIGN_BEGIN + 0x36	/* ����Խ����					*/
#define WDI_LAO				WDI_FOREIGN_BEGIN + 0x37	/* ����������					*/
#define WDI_CAMBODIAN		WDI_FOREIGN_BEGIN + 0x38	/* ���ܼ���կ��					*/
#define WDI_BURMESE			WDI_FOREIGN_BEGIN + 0x39	/* ���������					*/
#define WDI_ARABIC			WDI_FOREIGN_BEGIN + 0x3A	/* ���ܰ�������					*/
#define WDI_PERSIAN			WDI_FOREIGN_BEGIN + 0x3B	/* ���ܲ�˹��					*/
#define WDI_HINDI			WDI_FOREIGN_BEGIN + 0x3C	/* ����ӡ����					*/
#define WDI_SINHALESE		WDI_FOREIGN_BEGIN + 0x3D	/* ����ɮ������					*/
#define WDI_URDU			WDI_FOREIGN_BEGIN + 0x3E	/* �����ڶ�����					*/
#define WDI_TAGALOG			WDI_FOREIGN_BEGIN + 0x40	/* ��������»��					*/
#define WDI_KAZAKH          WDI_FOREIGN_BEGIN + 0x41    /* ���ܹ�������*/ 
#define WDI_BENGALI			WDI_FOREIGN_BEGIN + 0x42		// �ϼ��������뷨
//���޼������������ԣ���6��
#define WDI_AFRIKAANS		WDI_FOREIGN_BEGIN + 0x50	/* �����Ϸ���					*/
#define WDI_HAOSA			WDI_FOREIGN_BEGIN + 0x51	/* ���ܺ�����					*/
#define WDI_SWAHILI			WDI_FOREIGN_BEGIN + 0x52	/* ����˹��ϣ����				*/
#define WDI_YIBO			WDI_FOREIGN_BEGIN + 0x53	/* ����������					*/
#define WDI_TUJUE			WDI_FOREIGN_BEGIN + 0x54	/* ����ͻ����					*/
#define WDI_HEBREW			WDI_FOREIGN_BEGIN + 0x55	/* ����ϣ������					*/

//��ĸ���뷨����
#define WDI_ENGLISH_ABC			WDI_MULTIABC_BEGIN + 0x01	/* ��ĸABC						*/	
#define WDI_LATIN_ABC			WDI_MULTIABC_BEGIN + 0x02	/* ������ϵ��ĸABC						*/	
#define WDI_ARABICS_ABC			WDI_MULTIABC_BEGIN + 0x03	/* ���ܰ�������					*/
#define WDI_RUSSIAN_ABC			WDI_MULTIABC_BEGIN + 0x04	/* ������ĸABC						*/	
#define WDI_FRENCH_ABC			WDI_MULTIABC_BEGIN + 0x05	/* ������ĸABC						*/	
#define WDI_VIETNAMESE_ABC		WDI_MULTIABC_BEGIN + 0x06	/* Խ������ĸABC						*/	
#define WDI_THAI_ABC			WDI_MULTIABC_BEGIN + 0x07	/* ̩����ĸABC						*/	
#define WDI_INDONESIAN_ABC		WDI_MULTIABC_BEGIN + 0x08	/* ӡ����������ĸABC						*/	
#define WDI_PORTUGUESE_ABC		WDI_MULTIABC_BEGIN + 0x09	/* ��������ĸABC						*/	
#define WDI_GERMAN_ABC			WDI_MULTIABC_BEGIN + 0x0a	//������ĸ���뷨
#define WDI_SPANISH_ABC			WDI_MULTIABC_BEGIN + 0x0b	//����������ĸ���뷨
#define WDI_MALAY_ABC			WDI_MULTIABC_BEGIN + 0x0c	//��������ĸ���뷨
#define WDI_PERSIAN_ABC			WDI_MULTIABC_BEGIN + 0x0d		//��˹����ĸ���뷨
#define WDI_TURKISH_ABC			WDI_MULTIABC_BEGIN + 0x0e		//����������ĸ���뷨
#define WDI_ITALIAN_ABC			WDI_MULTIABC_BEGIN + 0x0f		//���������ĸ���뷨
#define WDI_HINDI_ABC			WDI_MULTIABC_BEGIN + 0x10		//ӡ������ĸ���뷨
#define WDI_CZECH_ABC			WDI_MULTIABC_BEGIN + 0x11		//�ݿ�����ĸ���뷨
#define WDI_DUTCH_ABC			WDI_MULTIABC_BEGIN + 0x12		//��������ĸ���뷨
#define WDI_HEBREW_ABC			WDI_MULTIABC_BEGIN + 0x13		//ϣ��������ĸ���뷨
#define WDI_POLISH_ABC			WDI_MULTIABC_BEGIN + 0x14		//��������ĸ���뷨	
#define WDI_UIGHUR_ABC			WDI_MULTIABC_BEGIN + 0x15		//ά�������ĸ���뷨
#define WDI_SWEDISH_ABC			WDI_MULTIABC_BEGIN + 0x16		//�������ĸ���뷨
#define WDI_FINNISH_ABC			WDI_MULTIABC_BEGIN + 0x17		//��������ĸ���뷨
#define WDI_NORWEGIAN_ABC		WDI_MULTIABC_BEGIN + 0x18		//Ų������ĸ���뷨
#define WDI_DANISH_ABC			WDI_MULTIABC_BEGIN + 0x19		//��������ĸ���뷨
#define WDI_LAO_ABC				WDI_MULTIABC_BEGIN + 0x1A		//��������ĸ���뷨
#define WDI_URDU_ABC			WDI_MULTIABC_BEGIN + 0x1B		//�ڶ�������ĸ���뷨
#define WDI_KAZAK_ABC			WDI_MULTIABC_BEGIN + 0x1C		//�����ˣ��й�������ĸ���뷨
#define WDI_ICELANDIC_ABC		WDI_MULTIABC_BEGIN + 0x1D		//��������ĸ���뷨
#define WDI_SLOVAK_ABC			WDI_MULTIABC_BEGIN + 0x1E		//˹�工������ĸ���뷨
#define WDI_ESTONIAN_ABC		WDI_MULTIABC_BEGIN + 0x1F		//��ɳ��������ĸ���뷨
#define WDI_BELARUSIAN_ABC		WDI_MULTIABC_BEGIN + 0x20		//�׶���˹����ĸ���뷨
#define WDI_LATVIAN_ABC			WDI_MULTIABC_BEGIN + 0x21		//����ά������ĸ���뷨
#define WDI_SLOVENIAN_ABC		WDI_MULTIABC_BEGIN + 0x22		//˹������������ĸ���뷨
#define WDI_CROATIAN_ABC		WDI_MULTIABC_BEGIN + 0x23		//���޵�������ĸ���뷨
#define WDI_SERBIAN_ABC			WDI_MULTIABC_BEGIN + 0x24		//����ά������ĸ���뷨
#define WDI_HAUSA_ABC			WDI_MULTIABC_BEGIN + 0x25		//��������ĸ���뷨
#define WDI_IGBO_ABC			WDI_MULTIABC_BEGIN + 0x26		//��������ĸ���뷨
#define WDI_TURKMEN_ABC			WDI_MULTIABC_BEGIN + 0x27		//����������ĸ���뷨	
#define WDI_SWAHILI_ABC			WDI_MULTIABC_BEGIN + 0x28		//˹��ϣ������ĸ���뷨	
#define WDI_HUNGARIAN_ABC		WDI_MULTIABC_BEGIN + 0x29		//����������ĸ���뷨
#define WDI_GREEK_ABC			WDI_MULTIABC_BEGIN + 0x2A		//ϣ������ĸ���뷨
#define WDI_KAZAKH_ABC			WDI_MULTIABC_BEGIN + 0x2B		//����������ĸ���뷨
#define WDI_ROMANIAN_ABC		WDI_MULTIABC_BEGIN + 0x2C		//������������ĸ���뷨
#define WDI_TAGALOG_ABC			WDI_MULTIABC_BEGIN + 0x2D		//����»����ĸ���뷨
#define WDI_BOSNIAN_ABC			WDI_MULTIABC_BEGIN + 0x2E		//��˹��������ĸ���뷨
#define WDI_TAMIL_ABC           WDI_MULTIABC_BEGIN + 0x2F       //̩�׶�����ĸ���뷨
#define WDI_CYRILLIC_ABC		WDI_MULTIABC_BEGIN + 0x30       //�������ϵ��ĸ���뷨
#define WDI_SERBIANC_ABC		WDI_MULTIABC_BEGIN + 0x31       //��ĸ����ά��(�����)
#define WDI_TIBETAN_ABC			WDI_MULTIABC_BEGIN + 0x32		// ������ĸ���뷨qls
#define WDI_BENGALI_ABC			WDI_MULTIABC_BEGIN + 0x33		// �ϼ�������ĸ���뷨qls
#define WDI_KHMER_ABC			WDI_MULTIABC_BEGIN + 0x34		// ��������ĸ���뷨 qls add 
#define WDI_NEPALI_ABC			WDI_MULTIABC_BEGIN + 0x35		// �Ჴ������ĸ���뷨 qls add 
#define WDI_TELUGU_ABC			WDI_MULTIABC_BEGIN + 0x36		//̩¬������ĸ���뷨
#define WDI_BULGARIAN_ABC		WDI_MULTIABC_BEGIN + 0x37		/* ������������ĸ				*/
/**************************** �������뷨���� *****************************/

#define WD_CODE_GBK			0
#define WD_CODE_BIG5		1
#define WD_CODE_UNICODE		2
#define WD_CODE_QUWEI		3

#define DEFAULTIME			0
#define NEEDSELECTLETTER	1
#define FOCUSMOVE			2
#define SELECTONE			3
#define USERWORDMODE		4
#define LETTERTABLE			5

/*************************** �����ⲿ�߽糣�� ************************************/
#define WD_IME_TOTAL				10/*62*/		//���뷨ͬʱ֧�ֶ����
#define MAX_IME_LANGUAGE			64		/* �����������						 */
// #define MAX_LETTER_COUNT			120     /* ���������ĸ��					 *///qls change 100 to 120 ����103	
#define IME_STRING_LEN				4		/* ���ֵ���ʾ�ַ��������ֽ���        */
#define MAX_KEY_LETTERCOUNT			26		/* ���ļ�λ�ϵ���ĸ��              */
#define	MAX_KEYS_COUNT				12		/* �ֻ����������ڼ���ļ���			 */
#define MAX_KEYS_LEN				27		/* ����ļ����������ֵ				 *///jh add
#define MAX_WORD_LEN				28		/* ���ƴ��/���ĵ��ʳ���			 */
#define MAX_MESSAGE_LEN				60		/* ��ʾ��Ϣ�ĳ���				     */
#define MAX_MESSAGE_COUNT			16		/* ÿ�����뷨����ʾ��Ϣ�ĸ���		 */
#define MAX_ONEPAGE_RECORD			15/*20*/		/* ÿҳ��ѡ����������				 */

#define MAX_PINYIN_NUMBER			6       /* ���ƴ����Ŀ                      */
#define MAX_KEYS_TABLE				421		/* ����ƴ����������				 */
#define MAX_PINYIN_LENGTH			28/*9*/		/* ÿ��ƴ������󳤶�                */
#define MAX_DISPLAY_LINE			3       /* ���뷨�����ʾ����				 */
#define MAX_DISPLAY_WIDTH			128     /* ��Ļ�����(����)				 */
#define MAX_TIME_INTERVAL			600		/* ���峤���������ʱ����			 */
#define FLASH_CAPACITY				1024    /* ���浽Flash�����ݵĴ�С           */
#define FLASH_CONFIGSIZE			24      /* Flash�����������ò����Ĵ�С       */
#define MAX_SYMBOL_GROUP_COUNT		21	    /* һ��������֧�ֵ�����������Ŀ	 */
#define MAX_SYMBOL_COUNT			512		/* һ�������������ķ��Ÿ���        */
#define MAX_KEYS_ARRANGE_COUNT	    4	    /* һ��������֧�ֵ������̷ֲ���Ŀ	 */ 
#define MAX_FIX_NUMBER			    40	    /* ǰ��׺�������Ŀ					 */
#define MAX_FIX_CHANGERULE_KIND		30		/* ǰ��׺�ı仯������������		 */
#define MAX_SEGMENT_COUNT			100		/* �������ֶ���					 */
#define MAX_LANGUAGESYMBOL			14		/* ������ַ�������					 */
#define MAX_CHINESE_WORD_LEN		8		/* ���ĵ��ʵ���󳤶�				 */
#define PRODUCTTYPE_IME						//���뷨�Ƿ��ṩ�汾��ȡ����

/*************************** �����ⲿ�߽糣�� ************************************/


/***************************** ���������� **************************************/
#define RESULT_SUCCESS				0	/* ���óɹ����ر��						 */
#define RESULT_FAILURE				255	/* ����ʧ�ܷ��ر��						 */
#define ERROR_INPUT_KEYS			2	/* ������Ƿ�							 */
#define ERROR_TURN_PAGE_TYPE		3	/* ��ҳ��ʽ�Ƿ�							 */
#define ERROR_INPUT_KEYS_EMPTY		4	/* ������Ϊ0							 */
#define ERROR_INPUT_KEYS_OVERLONG	5	/* ����������							 */
#define ERROR_TURN_PAGE_NEXT_OVER	6	/* ��ҳ�ѵ����							 */
#define ERROR_TURN_PAGE_PREV_TOP	7	/* ��ҳ�ѵ���ǰ                          */
#define ERROR_FORE_SEARCH_NOT_MATCH	8	/* ����������ƥ��					     */
#define ERROR_INVALIDIMETYPE        9   /* ��������뷨����						 */
#define ERROR_FLASH_INSUFFICIENCY	10	/* flash�ռ䲻��						 */
#define ERROR_KEY_LAYOUT_OVERFLOW	11	/* ���ļ�λ�Ŵ���						 */
#define ERROR_TURN_NEXT_MAX			12	/* ���ķ�ҳ�Ѿ���������ҳ��			 */
#define ERROR_FLASH_POINT_EMPTY		13	/* flash��ָ��Ϊ��						 */
#define ERROR_FOCUS_IDX				14	/* �������뷨��ǰ������˵��ʳ���		 */
#define ERROR_FOCUS_ZERO			15  /* �������뷨��ǰ����Ϊ0				 */
#define ERROR_LETTER_NOT_EXIST		16	/* ������ĸ����������ĸ������			 */
#define ERROR_GETSYMBOL_INCODE		17	/* ������ȡ��ĸ�������					 */
#define ERROR_ADDFIX_RANGER			18	/* �����мӺ�׺ʱ�ܳ�����				 */
#define ERROR_DATAFILE				19  /*	����������ļ�						 */
#define ERROR_NO_CHANGEID			20  /* û���ҵ����κ�						 */
#define ERROR_TURN_FOCUS_PREV_TOP	21	/* ����Ľ����Ѿ��Ƶ���λ��				 */
#define ERROR_TURN_FOCUS_NEXT_OVER	22	/* ����Ľ����Ѿ��Ƶ�βλ��				 */
#define ERROR_IMETYPE_NOT_INLIST	23	/* ���뷨�б����ڸ����뷨				 */
#define ERROR_NO_SPACE				24  /* û�п������ʵĿռ�*/

/****************************** ���������� *************************************/

//�ʿ�ռ�ÿռ��С�����������޸�
#define MMI_SOGOU_USER_DATABASE_PYUSER_SIZE					20480  //ƴ�����뷨�û��ʿռ�
#define MMI_SOGOU_USER_DATABASE_PYUSERSYS_SIZE				18432  //���뷨ϵͳ�ʿռ�
#define MMI_SOGOU_USER_DATABASE_STROKE_SIZE					26624	//�ʻ����뷨�û��ʿռ�
#define MMI_SOGOU_USER_DATABASE_FT_STROKE_SIZE				26624	//�ʻ����뷨�û��ʿռ�
#define MMI_SOGOU_USER_DATABASE_ZHUYIN_SIZE					20480	//ע�����뷨�û��ʿռ�
#define MMI_SOGOU_USER_DATABASE_ZHUYINSYS_SIZE				18432
//���µ��ļ���·�������������޸�
#define	MMI_SOGOU_USER_DATABASE_PATH					L"c:\\@sogou"	//���������ŵ��ļ���
#define MMI_SOGOU_USER_DATABASE_PYUSER_FILE 			L"c:\\@sogou\\sgim_usr.bin"	//ƴ�����뷨�û��ʱ�����ļ�
#define MMI_SOGOU_USER_DATABASE_PYUSERSYS_FILE			L"c:\\@sogou\\sgim_usrs.bin"	//ϵͳ�ʱ�����ļ�
#define MMI_SOGOU_USER_DATABASE_STROKE_FILE				L"c:\\@sogou\\sgim_bhusr.bin"	//�ʻ����뷨������ļ�
#define MMI_SOGOU_USER_DATABASE_FT_STROKE_FILE			L"c:\\@sogou\\sgim_fbhusr.bin"	//����ʻ����뷨������ļ�

#define MMI_SOGOU_USER_DATABASE_ZYUSER_FILE 			L"c:\\@sogou\\sgim_zy_usr.bin"	//ƴ�����뷨�û��ʱ�����ļ�
#define MMI_SOGOU_USER_DATABASE_ZYUSERSYS_FILE			L"c:\\@sogou\\sgim_zy_sys.bin"	//ϵͳ�ʱ�����ļ�

#define MMI_SOGOU_OUTLIBSIZE 1500*32

#define  MMI_FILE "c:\\@sogou\\s.txt" //�������ں˽ӿڴ��뺯��д����ļ�

//ģ�������� 0x00000000��ʾ��֧��ģ������0x00000fff��ʾ֧������ģ����
//���Ҫʹ�ò���ģ�������뽫��Ҫģ���������л�|�����㡣
#define SG_FUZZY_NO				(0x00000000)
#define SG_FUZZY_ZH_AND_Z		(0x00000001)	//��ʾzh��zģ��
#define SG_FUZZY_CH_AND_C		(0x00000002)	//��ʾch��c�������������ƣ�������_AND_ǰ�ͺ��������ģ��
#define SG_FUZZY_SH_AND_S		(0x00000004)
#define SG_FUZZY_N_AND_L		(0x00000008)
#define SG_FUZZY_H_AND_F		(0x00000010)
#define SG_FUZZY_R_AND_L		(0x00000020)
#define SG_FUZZY_K_AND_G		(0x00000040)
#define SG_FUZZY_ANG_AND_AN		(0x00000080)
#define SG_FUZZY_ENG_AND_EN		(0x00000100)
#define SG_FUZZY_ING_AND_IN		(0x00000200)
#define SG_FUZZY_IANG_AND_IAN	(0x00000400)
#define SG_FUZZY_UANG_AND_UAN	(0x00000800)
#define SG_FUZZY_AND_ALL		(0x00000FFF)






/***************************** ��������ṹ **************************************/
typedef struct WD_imeResult_t
{
	WD_UINT16 inputKeys[MAX_KEYS_LEN+3];   
	/* ԭʼ��������			                                                     */  
	WD_UINT16 outputKeys[MAX_KEYS_LEN*MAX_CHINESE_WORD_LEN+1];   
	/* ����������У���������ʾ������ļ�������Ӧ��ƴ����ע�������ģ�
	�ü������ѱ��ָ��ģ��������Ĵ����룩�������滻��ƴ����ע����(����ȷ�ϵ���)*/
	WD_UINT8 idxFocus;
	/* ��ǰ�Ľ��㡣
	���ģ���ǰ�༭�ļ����(�ڼ�������)�������ǰ�༭���ǵڼ�����ĸ  		 */
	WD_UINT8 curPage;
	/*��ǰ��ҳ��(��0��ʼ)���������ж��Ƿ��Ѿ��������һҳ���Ƿ���ʾ�·�ҳ��ͷ    */	
	WD_UINT16 letterSelecting[MAX_KEY_LETTERCOUNT][MAX_PINYIN_LENGTH+1]; 
	/* ���ģ� 
				����ƴ����ע�����뷨��ǰ�����ֵļ�������Ӧ�����е�ƴ����ע����ϣ�
				������ƴ���뷨���ڵ�һ��ʱ��ʾ���б�ѡ��ĸ��
	���ģ���ǰ�����������Ӧ��������ĸ��              						 */
	WD_UINT8 idxLetterSelecting;	       
	/* ��ǰ��ѡ������ĸ�����,��0��ʼ   										 */
	WD_UINT16 selecting[MAX_ONEPAGE_RECORD][MAX_KEYS_LEN+3];  
	/* ��ѡ������MAX_ONEPAGE_RECORD�
	���ģ�����Ѳ���Ĵʻ��֣�ÿ���ִ�һ����
	���ģ��������������ĵ��ʣ����Unicode��		    					 */
	WD_UINT8 idxSelecting;                 
	/* ��ǰ��ѡ����ţ�,��0��ʼ								             		 */
	WD_UINT16 output[MAX_KEYS_LEN*MAX_CHINESE_WORD_LEN+1];	   
	/* ��ȷ���ִʣ����ظ����ú���											     */
	WD_UINT16 returnKey;	                   
	/* ���ؼ��룺���뷨������İ�����ֱ�Ӵ��أ�����ڷǷ������������󱨾�		 */
	WD_UINT8 imeType;		               
	/* ��ǰ���뷨������: �������뷨����											 */
	WD_UINT16 imeString[4];	               
	/* ���뷨������ʾ�ַ�����������GB�����unicode�룬������Unicode�롣 		 */
	WD_UINT16 message[MAX_DISPLAY_LINE][MAX_MESSAGE_LEN];  
	/* ��ʾ��Ϣ������ʾ����ʾ��Ϣ��������GB�룬������Unicode��
	�˰汾���ṩ��ʾ��Ϣ����													 */
	WD_UINT8 resultEmpty;
	/*�˰汾�����ã�    														 */
	WD_UINT8 imeStatus;
	/*���뷨��ǰ��״̬															 */
	WD_UINT8 preStatus;
	/*���뷨ǰһ��״̬															 */

	WD_UINT8 capLock;
	/*��ʾ��Сд״̬0ΪСд״̬��1Ϊ����ĸ��д��2Ϊȫ��д״̬*/

	WD_UINT8 selectingCount;	//Ϊÿ���������Ľ����

} WD_imeResult; 
/***************************** ��������ṹ *************************************/


/*************************** ���庺�����Խṹ ***********************************/
typedef struct WD_hzCharProp_t
{	
	WD_UINT16 GBK,UniCode;				/* ���ֱ���ĺ������루UC,GB��          */
	WD_UINT8  pinyin[4][8];            /* ƴ����ĸ�����֧���ĸ�������          */
	WD_UINT16 zhuyin[4][3];            /* ע�����ţ����֧���ĸ�������			*/
   WD_UINT8  tone[5];                 /* ���ֵ�������1~5������5����������
   �˰汾��ʱ������						*/
   WD_UINT8  bihua[32];               /* ���ֵıʻ������֧��32��				*/
   WD_UINT8  wordClass;               /* ���ֵ����ͣ�3Ϊ������0Ϊ����			*/
} WD_hzCharProp;
/*************************** ���庺�����Խṹ ***********************************/


/*************************** ������������ṹ ***********************************/
/*���⹫�������ڴ���������������Ľṹ,�˰汾������								*/
typedef struct WD_searchInfo_t
{
	WD_UINT8	searchKeys[MAX_KEYS_LEN+4]; /* ԭʼ��������						 */
	WD_UINT8	idxFocus;					/* �����λ��						 */
	WD_UINT8	imeType;					/* ���뷨����						 */
	WD_UINT16	legendChar[4];				/* ����������						 */
	WD_UINT8  wordTone[4];                /* ����								 */
	WD_SINT8	turnPageType;		    	/* ��ҳ���ͣ�0,��ʼ��1,�󷭣�-1,ǰ�� */
	WD_UINT8	lastDisplayed;				/* ��һ����ʾ�Ĵ�����                */
	WD_UINT8	fullMatch;					/* �Ƿ�ȫƥ������                    */
	WD_UINT8	wordClass;					/* �ֵ����ͻ���ԣ�3Ϊ������0Ϊ����  */
	WD_UINT8  codeType;					/* �������� 0:ȱʡ 1:GB 2:BIG        */
	WD_UINT8	historyPerPage;	
	WD_UINT8	fixSearchType;
	WD_UINT8	faceSearchType;
	WD_UINT8	ioMode;
	
} WD_searchInfo;
/*������������ṹ																 */
/*************************** ������������ṹ ************************************/

	typedef struct symbolGroup_
	{
		WD_UINT16	groupName[4];					/* ����������UniCode	 */
		WD_UINT16	element[MAX_SYMBOL_COUNT];		/* ���ڷ��ţ�UniCode	 */
		WD_UINT8	elementlen;						/* �������ų��� UniCode  */
	} WD_symbolGroup,*pWD_symbolGroup;

typedef struct ssss_
{
	WD_UINT16	llll[4];	
	WD_UINT16	mmmm[MAX_SYMBOL_COUNT];
	WD_UINT8	nnnn;	
} WD_ssss;

// �������ݱ�ṹ
typedef struct WD_abcdefg_t
{		          
	WD_UINT8					  imeType;
	WD_UINT16					  imeString[4];
	const WD_UINT16				  *hhh;
	const WD_ssss				  *iii;
	const WD_UINT8*					  zzz;
	const lan_ddd*					landdd;
	lan_keymap_Info_t*			cur_language;
} WD_abcdefg;



/***************************** ����������� **************************************/


/***************************** ���庯������ **************************************/
WD_UINT8 IME_Initialize(WD_UINT8* pImeTypeList,  WD_UINT8 defaultIme,
						WD_UINT8* pFlashData,WD_imeResult*	pResult);

						/*	����˵��: ��ʼ���������ڽ������뷨ʱ���á���Ҫ�����õ�flash�е����ݣ���������
					   ���б�������ز��������������û����������Ҫ���ʼ��Ĭ�ϵ����뷨��
					   
						 ���ò�����fd
						 WD_UINT8* pImeTypeList
						 �����뷨�������������������뷨�������б����������뷨���ඨ�����ļ���
						 �����뷨����ֵ�б��˳��������뷨�л�ʱ��˳��
						 WD_UINT8 defaultIme��
						 ��ѡ���뷨�����������뷨���ȱʡ���뷨��
						 WD_UINT8* pFlashData��
						 ���ڴ�Ŵ�flash����ȡ�����ú���������ݵ�ָ��
						 WD_IMEResult* pResult��Ϊָ������ṹ��ָ�룻                
						 
						   ����ֵ��
WD_UINT8���ɹ�-0��ʧ��-�����š�									       */

WD_UINT8 WD_SwitchIme(WD_UINT8 imeType);
/*	����˵��: ���뷨�л�������

		���ò�����
		WD_UINT8 imeType��
		Ҫ�л������뷨����
		
		  ����ֵ��
WD_UINT8���ɹ�-0��ʧ��-�����š�											*/

	WD_UINT8 WD_OnKey(WD_UINT16 key, WD_UINT8 wordClass,
				      WD_UINT8 lastDisplayed, WD_imeResult* pResult);
	/*	����˵��: �����������������������뷨��ÿ�η��������¼�����õġ��������뷨��
			      ���س������а����Ĵ����ִʵ�������ȷ������ȶ��ɼ�������ִ�еġ�
		
		���ò�����
		WD_UINT8 key��
			����ļ�ֵ�����ֵӦ����WD_Def.h�ж���ļ�ֵһ����������ͨ�����ͳ������ȡ�
		WD_UINT8 last_displayed��
			��ǰ��Ļ����ʾ�Ĵ���������ÿ�������뷨�����󣬻�������MAX_ONEPAGE_RECORD
			�������򵥴ʡ������ֻ���Ļ�����ƣ����еĴ�����һ���ܹ�ȫ������ʾ�������Ҫ��
			��һ������ʾ������һ�����������¸����ѵ����ִʡ�������Ҫ�ṩ����ʾ�Ĵ�����Ŀ��
			�������ۼӡ�
		WD_UINT8 wordClass
			//��ǰ�汾���ã���ǰ��Ļ����ʾ�ı�ѡ���ĸ�����ÿ�������뷨�����󣬻�������MAX_ONEPAGE_RECORD
			����ѡ���������ֻ���Ļ�����ƣ����еı�ѡ����һ���ܹ�ȫ������ʾ��
		WD_IMEResult* Result��
			��ͷ�ļ��ж��������ṹ��ָ�롣ͬ��ʼ��������
		
		����ֵ��
		WD_UINT8���ɹ�-0��ʧ��-�����š�											  */

void Sogou_Save_Updata_To_File(void);
/*
	�������ܣ���������ʵ��ļ�
	����˵������
	����ֵ���������޷���ֵ��
*/




void SG_Quit(void);
/*	
	����˵�����ͷŵ��ڲ���ʱ�ռ�

	����˵������
	����ֵ���������޷���ֵ��
*/

//#ifdef WDI_CHINESE

void SG_SetFuzzy(WD_UINT32 type); 
/*
	����˵��������ר�Ŷ�ģ��������

	����˵����type ��Ҫ���õ�ģ����������ģ��������Ҫ�����ļ���
			���磺zh �� z��Ҫ���ã��͸�ֵtype=SG_FUZZY_ZH_AND_Z��
			��� zh��z��ch��c������Ҫ���ã�
			��ô��type = SG_FUZZY_ZH_AND_Z | SG_FUZZY_CH_AND_C;
			��Щ�궨���ڴ��ļ��в�����Ҫ������Щģ�������Ͱ���Щģ���� ���򡯣�|��������

	����ֵ����
*/



WD_UINT8 WD_GetPropertyByHz(WD_UINT16 hzChar,WD_UINT8 codeType,WD_hzCharProp *pHzCharProp);
/*	����˵��: ��ר��������ѯ�������Եĺ����������������루GBK��Unicode����
ƴ����ע�����������ʻ����ִ���𼰴��Եȡ�
����˵����
WD_UINT16 hzChar��
����ĺ��֣�������GBK/UniCode/
WD_UINT8 codeType��
����λΪ���壬0Ϊ���壬1Ϊ���壻����λΪ�����������ͣ�0��2�ֱ��ӦGBK��UNICODE��
WD_hzCharProp* hzCharProp��
�������Ե�����ṹָ�롣���嶨����ǰ�����ݽṹWD_hzCharProp�Ķ���

		����ֵ��
		WD_UINT8���ɹ�-0��ʧ��-�����š� 
*/
//�õ���������

WD_UINT8 WD_GetAssociationalCandidate(WD_UINT16 *ch, WD_UINT8 codeType, WD_UINT16* can, WD_UINT8 count);
/*  ����˵��:���ݺ��ֵ���õ�������,�˰汾ֻ��֧��Unicode���GBK��

		����˵��:
		WD_UINT16 ch:
		�������룻
		WD_UINT8 codeType:��
		����λΪ���壬0Ϊ���壬1Ϊ���壻����λΪ�����������ͣ�0��1��2��3�ֱ��ӦGBK��BIG5��UNICODE��QUWEI��
		WD_UINT16* can��
		�����ִ洢buf��ַָ��
		WD_UINT8 count��
		ϣ���õ������ָ���(����ܳ���255) 
		����ֵ��
		ʵ�ʵõ��������ָ���				
*/
//#endif


WD_UINT8 WD_SetVariable(WD_UINT8 index,WD_UINT8 value,WD_imeResult* pResult);
/*  
����˵��:����WD_imeResult����ṹ�еı����ĺ�����ƴ�����뷨�������ñ�ѡ���ͱ�ѡ��
			�������뷨ֻ�����ñ�ѡ�ֵĽ��㡣

		����˵��:
		WD_UINT8 index: ���޸ı�������ţ�1�����޸ı�ѡ��idxSelecting��2�����޸ı�ѡ��idxLetterSelecting
		WD_UINT8 value: ���õ�ֵ
		WD_imeResult* pResult:
		��ͷ�ļ��ж��������ṹ��ָ�롣ͬ��ʼ��������
		����ֵ��
		0��ʾ�ɹ�������ʧ��;���óɹ���Result��Ӧ�������ı�				
		
*/

WD_UINT8 WD_SwitchForeignCapslock(WD_UINT8 capsLock);
/* 
	�������ܣ��л��������뷨��Сд״̬

	����˵�� ����ĳЩ�����޴�Сдʱ����Ϊ���Ѿ��л��ɹ���ֻ�����Ǵ�Сд��ĸ��ͬ��

	���ò����� 
	������0ΪСд״̬��1Ϊ����ĸ��д��2Ϊȫ��д״̬(��������)
		
	����ֵ��
	�ɹ�����0
*/

///////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
///���º���Ϊ�ⲿ��������Ҫƽ̨ʵ�֣����뷨�ڲ�ʹ��////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////


extern 	WD_UINT32 SG_openfile(WD_UINT16* fileName);
/*	����˵��: ���ݴ���·�����ļ�

		���ò�����
		WD_UINT16* fileName
		�ò���Ϊ�����ļ�·��		

		����ֵ:
		�ļ����
*/

extern	WD_UINT8  SG_readfile(WD_UINT32 handle, WD_UINT8* buf, WD_UINT32 size);
/*	����˵��: ���ݴ�����ļ������ȡָ����С������

		���ò�����
		WD_UINT32 handle
		�ò���Ϊ�����ļ����		
		WD_UINT8* buf
		��ȡ���ݴ�ŵ�buf
		WD_UINT32 size
		��ȡ���ݵ�size

		����ֵ:
		0 --ʧ�� 1--�ɹ�
*/
extern	WD_UINT8  SG_writefile(WD_UINT32 handle, WD_UINT8* buf, WD_UINT32 size);
/*	����˵��: ���ݴ�����ļ����д��ָ����С������

		���ò�����
		WD_UINT32 handle
		�ò���Ϊ�����ļ����		
		WD_UINT8* buf
		д�������
		WD_UINT32 size
		д�����ݵ�size

		����ֵ:
		0 --ʧ�� 1--�ɹ�
*/

extern	WD_UINT8  SG_closefile(WD_UINT32 handle);
/*	����˵��: ���ݴ����ļ�����ر��ļ�

		���ò�����
		WD_UINT32 handle
		�ò���Ϊ�����ļ����		

		����ֵ:
		0 --ʧ�� 1--�ɹ�
*/


extern WD_UINT32 SG_IME_MALLOC(WD_UINT8** flashBuf, WD_UINT32 bufSize);
/*
�������ܣ�������bufSize��С�Ŀռ�ͷָ�븳ֵ��*flashBuf

  ������WD_UINT8** flashBuf ָ��һ��ռ��ͷ��
  ������WD_UINT32 bufSize ָ��ռ��С

  ����ֵΪ�ռ��С
*/

extern WD_UINT32 SG_IME_FREE(WD_UINT8** flashBuf, WD_UINT32* bufSize);
/*
�������ܣ����*flashBuf��ָ���bufSize��С�Ŀռ䣬ͬʱ��bufSize��Ϊ0

  ������WD_UINT8** flashBuf ָ��һ��ռ��ͷ��
  ������WD_UINT32* bufSize ָ��ռ��С

  �޷���ֵ
*/

#endif

