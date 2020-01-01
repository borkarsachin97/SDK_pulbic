#ifndef  SG_COMMON_H_
#define  SG_COMMON_H_

#define MAX_LETTER_COUNT             100//��ѡ�����������е����ֵ
#define MAX_LETTER_COUNT_IN_ONE_KEY  20
#define MAX_TIMES_LETTER_IN_KEYS     3

// #define DIGIT_KEYS
//#define SURETYPE_KEYS
// #define QWERT_KEYS
#define OTHER_KEYS

////////////////////���Կ���////////////////////////
/////�ͻ�ʹ��/////////////////////////
// 

#define WDVK_KEY_1				0x11 	/* ��ʾ�������������"1"��  	 */

//////////////////���Կ��ؽ���//////////////////////////


#if defined(DIGIT_KEYS)

#define KEY_BASE 0x30
typedef enum {
	SG_KEY_0 = KEY_BASE,//�̰�0��
	SG_KEY_1,//�̰�1��
	SG_KEY_2,//�̰�2��
	SG_KEY_3,//�̰�3��
	SG_KEY_4,//�̰�4��
	SG_KEY_5,//�̰�5��
	SG_KEY_6,//�̰�6��
	SG_KEY_7,//�̰�7��
	SG_KEY_8,//�̰�8��
	SG_KEY_9,//�̰�9��
	SG_KEY_10,//�̰�*��
	SG_KEY_11,//�̰�#��
	SG_KEY_12,//�̰�C��
	SG_KEY_13,//�̰�OK��
	SG_KEY_14,//�̰�lsk��
	SG_KEY_15,//�̰�rsk��
	SG_KEY_16,//�̰�up��
	SG_KEY_17,//�̰�down��
	SG_KEY_18,//�̰�left��
	SG_KEY_19,//�̰�right��
	SG_KEY_20,//����0��
	SG_KEY_21,//����1��
	SG_KEY_22,//����2��
	SG_KEY_23,//����3��
	SG_KEY_24,//����4��
	SG_KEY_25,//����5��
	SG_KEY_26,//����6��
	SG_KEY_27,//�̰�7��
	SG_KEY_28,//�̰�8��
	SG_KEY_29,//�̰�9��
	SG_KEY_30,//����*��
	SG_KEY_31,//����#��
	SG_KEY_32,//����C��
	SG_KEY_33,//����OK��
	SG_KEY_34,//����LSK��
	SG_KEY_35,//����RSK��
	SG_KEY_36,//����UP��
	SG_KEY_37,//����DOWN��
	SG_KEY_38,//����RIGHT��
	SG_KEY_39,//����LEFT��
	MAX_KEY_COUNT,//=40
} KEY_ID;//��ֵ��ID

#elif defined(SURETYPE_KEYS)

#define KEY_BASE 0xb1
typedef enum {
	SG_KEY_0 = KEY_BASE,//qw
	SG_KEY_1,//er
	SG_KEY_2,//ty
	SG_KEY_3,
	SG_KEY_4,
	SG_KEY_5,
	SG_KEY_6,
	SG_KEY_7,
	SG_KEY_8,
	SG_KEY_9,
	SG_KEY_10,
	SG_KEY_11,
	SG_KEY_12,
	SG_KEY_13,
	SG_KEY_14,
	SG_KEY_15,
	SG_KEY_16,
	SG_KEY_17,
	SG_KEY_18,
	SG_KEY_19,
	SG_KEY_20,
	SG_KEY_21,
	SG_KEY_22,
	SG_KEY_23,
	SG_KEY_24,
	SG_KEY_25,
	MAX_KEY_COUNT,// = SG_KEY_BASE+12
} KEY_ID;//��ֵ��ID

#elif defined(QWERT_KEYS)

#define KEY_BASE 0xb1
typedef enum {
	SG_KEY_0 = KEY_BASE,//�̰�a��
	SG_KEY_1,//�̰�b��
	SG_KEY_2,//�̰�c��
	SG_KEY_3,//�̰�d��
	SG_KEY_4,//�̰�e��
	SG_KEY_5,//�̰�f��
	SG_KEY_6,//�̰�g��
	SG_KEY_7,//�̰�h��
	SG_KEY_8,//�̰�i��
	SG_KEY_9,//�̰�j��
	SG_KEY_10,//�̰�k��
	SG_KEY_11,//�̰�l��
	SG_KEY_12,//�̰�m��
	SG_KEY_13,//�̰�n��
	SG_KEY_14,//�̰�o��
	SG_KEY_15,//�̰�p��
	SG_KEY_16,//�̰�q��
	SG_KEY_17,//�̰�r��
	SG_KEY_18,//�̰�s��
	SG_KEY_19,//�̰�t��
	SG_KEY_20,//�̰�u��
	SG_KEY_21,//�̰�v��
	SG_KEY_22,//�̰�w��
	SG_KEY_23,//�̰�x��
	SG_KEY_24,//�̰�y��
	SG_KEY_25,//�̰�z��
	SG_KEY_26,//�̰��л����뷨��
	SG_KEY_27,//�̰��ָ�����
	SG_KEY_28,//�̰����ż�
	SG_KEY_29,//�̰�C��
	SG_KEY_30,//�̰�OK��
	SG_KEY_31,//�̰��س���
	SG_KEY_32,//�̰�up��
	SG_KEY_33,//�̰�down��
	SG_KEY_34,//�̰�left��
	SG_KEY_35,//�̰�right��
	SG_KEY_36,//�̰�lst��
	SG_KEY_37,//�̰�rst��
	SG_KEY_38,//�̰���Сд�л���
	SG_KEY_39,//�̰����ܼ�FN
	SG_KEY_40,//�̰�shift
	SG_KEY_41,//�̰�Alt
	SG_KEY_42,//�̰�ctrl
	SG_KEY_43,//����a��
	SG_KEY_44,//����b��
	SG_KEY_45,//����c��
	SG_KEY_46,//	����d��
	SG_KEY_47,//	����e��
	SG_KEY_48,//	����f��
	SG_KEY_49,//	����g��
	SG_KEY_50,//	����h��
	SG_KEY_51,//	����i��
	SG_KEY_52,//	����j��
	SG_KEY_53,//	����k��
	SG_KEY_54,//	����l��
	SG_KEY_55,//	����m��
	SG_KEY_56,//����n��
	SG_KEY_57,//����o��
	SG_KEY_58,//����p��
	SG_KEY_59,//����q��
	SG_KEY_60,//����r��
	SG_KEY_61,//����s��
	SG_KEY_62,//����t��
	SG_KEY_63,//����u��
	SG_KEY_64,//����v��
	SG_KEY_65,//����w��
	SG_KEY_66,//����x��
	SG_KEY_67,//����y��
	SG_KEY_68,//����z��
	SG_KEY_69,//�����л����뷨��
	SG_KEY_70,//�����ָ�����
	SG_KEY_71,//�������ż�
	SG_KEY_72,//����C��
	SG_KEY_73,//����OK��
	SG_KEY_74,//�����س���
	SG_KEY_75,//����up��
	SG_KEY_76,//����down��
	SG_KEY_77,//����left��
	SG_KEY_78,//����right��
	SG_KEY_79,//����lst��
	SG_KEY_80,//����rst��
	SG_KEY_81,//������Сд�л���
	SG_KEY_82,//�������ܼ�FN
	SG_KEY_83,//����shift
	SG_KEY_84,//����Alt
	SG_KEY_85,//����ctrl
	MAX_KEY_COUNT,// = SG_KEY_BASE+86
} KEY_ID;//��ֵ��ID

#else //OTHER_KEYS

#define KEY_BASE 0x10
typedef enum {
	SG_KEY_0 = KEY_BASE,
	SG_KEY_1,
	SG_KEY_2,
	SG_KEY_3,
	SG_KEY_4,
	SG_KEY_5,
	SG_KEY_6,
	SG_KEY_7,
	SG_KEY_8,
	SG_KEY_9,
	SG_KEY_10,//�̰�*��
	SG_KEY_11,//�̰�#��
	SG_KEY_12,//a
	SG_KEY_13,//b
	SG_KEY_14,//c
	SG_KEY_15,//d
	SG_KEY_16,//e
	SG_KEY_17,//f
	SG_KEY_18,//g
	SG_KEY_19,//h
	SG_KEY_20,//i
	SG_KEY_21,//j
	SG_KEY_22,//k
	SG_KEY_23,//l
	SG_KEY_24,//m
	SG_KEY_25,//n
	SG_KEY_26,//o
	SG_KEY_27,//p
	SG_KEY_28,//q
	SG_KEY_29,//r
	SG_KEY_30,//s
	SG_KEY_31,//t
	SG_KEY_32,//u
	SG_KEY_33,//v
	SG_KEY_34,//w
	SG_KEY_35,//x
	SG_KEY_36,//y
	SG_KEY_37,//z
	SG_KEY_38,//�̰��л����뷨��
	SG_KEY_39,//�ָ�
	SG_KEY_40,//�̰����ż�
	SG_KEY_41,//�̰�C��
	SG_KEY_42,//�̰�OK��
	SG_KEY_43,//�̰��ո�
	SG_KEY_44,//�̰��س���
	SG_KEY_45,//�̰�up��
	SG_KEY_46,//�̰�down��
	SG_KEY_47,//�̰�left��
	SG_KEY_48,//�̰�right��
	SG_KEY_49,//�̰�lst��
	SG_KEY_50,//�̰�rst��
	SG_KEY_51,//�̰���Сд�л���
	SG_KEY_52,//�̰����ܼ�FN
	SG_KEY_53,//�̰�shift
	SG_KEY_54,//�̰�Alt
	SG_KEY_55,//�̰�ctrl
	SG_KEY_56,//0
	SG_KEY_57,//1
	SG_KEY_58,//2
	SG_KEY_59,//3
	SG_KEY_60,//4
	SG_KEY_61,//5
	SG_KEY_62,//6
	SG_KEY_63,//7
	SG_KEY_64,//8
	SG_KEY_65,//9
	SG_KEY_66,//*
	SG_KEY_67,//#
	SG_KEY_68,//����a��
	SG_KEY_69,//����b��
	SG_KEY_70,//����c��
	SG_KEY_71,//����d��
	SG_KEY_72,//����e��
	SG_KEY_73,//����f��
	SG_KEY_74,//����g��
	SG_KEY_75,//����h��
	SG_KEY_76,//����i��
	SG_KEY_77,//����j��
	SG_KEY_78,//����k��
	SG_KEY_79,//����l��
	SG_KEY_80,//����m��
	SG_KEY_81,//����n��
	SG_KEY_82,//����o
	SG_KEY_83,//����p
	SG_KEY_84,//����q
	SG_KEY_85,//����r
	SG_KEY_86,//����s
	SG_KEY_87,//����t
	SG_KEY_88,//����u
	SG_KEY_89,//����v
	SG_KEY_90,//����w
	SG_KEY_91,//����x
	SG_KEY_92,//����y
	SG_KEY_93,//����z
	SG_KEY_94,//�̰��л����뷨��
	SG_KEY_95,//�ָ�
	SG_KEY_96,//�̰����ż�
	SG_KEY_97,//�̰�C��
	SG_KEY_98,//�̰�OK��
	SG_KEY_99,//�����ո�
	SG_KEY_100,//�̰��س���
	SG_KEY_101,//�̰�up��
	SG_KEY_102,//�̰�down��
	SG_KEY_103,//�̰�left��
	SG_KEY_104,//�̰�right��
	SG_KEY_105,//�̰�lst��
	SG_KEY_106,//�̰�rst��
	SG_KEY_107,//�̰���Сд�л���
	SG_KEY_108,//�̰����ܼ�FN
	SG_KEY_109,//�̰�shift
	SG_KEY_110,//�̰�Alt
	SG_KEY_111,//�̰�ctrl
	MAX_KEY_COUNT,// = SG_KEY_BASE+12
} KEY_ID;//��ֵ��ID

#endif

typedef struct {
	WD_UINT8 isHaveUpLetter; /* �Ƿ�֧��Сд */
	WD_UINT8 imeType; /* ���ֵ���ֵ */
	WD_UINT16 imeString[4]; /* �ñ�����������������ʾ*/
	WD_UINT16 letterCount;//ԭ�л�����ĸ����
	WD_UINT16 letterTotal;//��ĸ���е���ĸ����
	const WD_UINT16* letterTable;//��ĸ��
	const WD_UINT16* upLetterTable;//��ĸ��
	WD_UINT8 keyCount;
	const WD_UINT8* KeyMap;//���̲���
	const WD_UINT8* One2One;
	WD_UINT16* OperTable;//�������ݱ�
	WD_UINT16* symbol_table;//���ű�
} lan_keymap_Info_t;

typedef struct lan_ddd_t
{
	WD_UINT8	aaa;
	WD_UINT32	bbb;
	WD_UINT8   jjj;
	WD_UINT32*  ccc;
	WD_UINT16*  ddd;
	WD_UINT16*  eee;
	WD_UINT8*   fff;
	WD_UINT8*   ggg;
	WD_UINT16*  hhh;
	WD_UINT8*   iii;
} lan_ddd;

#endif
