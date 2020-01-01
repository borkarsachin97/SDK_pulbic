#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ven_kpd.h"
#include "iinput.h"

#define OS_FEATURE_VERSION			   1 //ƽ̨�汾
#define OS_FEATURE_NAME                2 //ƽ̨����
#define OS_FEATURE_KEYBOARD_STYLE      3 //��������
#define OS_FEATURE_TOUCH_SCREEN_STYLE  4 //����������
#define OS_FEATURE_IS_KEY_EXIST        5 //��ѯkey�Ƿ����
#define OS_FEATURE_IS_KEY_SHARED       6 //��ѯkey�Ƿ��ã����й��ã��򷵻�����Ĺ��ü�

enum
{
	STYLE_BOX_KEYBOARD = 1,     //�����0-9����
	QWERTY_KEYBOARD,            //ȫ����
	SPECIAL_FUNCTION_KEYBOARD   //�����
};
typedef u8 KeyBoardStyle;

enum
{
	NO_TOUCH_SCREEN = 1,       //��֧�ִ�����
	RESISTIVE_TOUCH_SCREEN,    //���败����
	CAPACITIVE_TOUCH_SCREEN    //���ݴ�����
};
typedef u8 TouchScreenStyle;

typedef struct  
{
	KeyCode sharedkey;         //��ѯ�İ���
	s32     sharedkeynum;      //����ĸ���
	KeyCode key[5];      //��Щ������һ�������
}SharedKey;

typedef struct
{ 
	KeyCode  keyCode;
	ven_kpd_key_code_t   venkey;	
}KeyTable;

ven_app_id_t GetSreAppIDFromTable(void);

KeyCode  KeyPadIndication(ven_kpd_key_code_t venkey);
#ifdef  __cplusplus
}
#endif
#endif //_ADAPTER_H_

