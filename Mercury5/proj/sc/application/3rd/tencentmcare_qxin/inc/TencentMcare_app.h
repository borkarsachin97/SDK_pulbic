#ifndef __TECENT_MCARE_APP_H__
#define __TECENT_MCARE_APP_H__
/*
================IMPORTANT================
This macro is control TENCENT SOFTWARE Multiple Entry.
If you do not want multiple entry, please mark this macro.
If you want to keep this macro, before you must know very clearly this effect.
Sometime the MSTAR shortcuts your did not configured right,
this macro will cause you phone SCREEN BLACK OUT.
2011-09-07 KEL.
================IMPORTANT================
*/
//#define __TENCENT_MULTIPLE_ENTRY__


#include "ven_sdk.h"
#include "ven_os.h"
#include "ven_stc.h"
#include "ven_kpd.h"
#include "ven_ts.h"
#include "ven_ui.h"
#include "ven_handle.h"
#include "ven_graphics.h"
#include "McfCommon_priv.h"
#include "ven_graphics.h"

// Using help send command. KEL.
#define BG_RSP		(1) // Background RSP.
#define STOP_IND	(2)	
#define FG_RSP		(3)	// Foreground RSP.


//�����������ͣ�by fad
typedef enum __MultiEntryType
{
    E_ENTRY_DEFAULT = 0,            //Ĭ�Ͻ�����Ѷ�������
    E_ENTRY_QQB,                    //QQ�����
    E_ENTRY_QQDDZ,                  //NOT SUPPORT NOW
    E_ENTRY_QZONE,                  //�ֻ�QQ�ռ�
    E_ENTYR_QQBOOKMALL   ,          //QQ���NOT SUPPORT NOW
    E_ENTRY_QQBOOKMALL_FREE,        //QQ��ǣ���Ѱ棩
    E_ENTRY_QQMICROBLOG,            //��Ѷ΢��
    E_ENTRY_SOSO,                   //��Ѷsoso
    E_ENTRY_FRIEND,                 //��Ѷ������
    E_ENTRY_QQMAIL,                 //QQ����
    E_ENTRY_QQNEWS,                 //��Ѷ����
    E_ENTRY_QQSTOCK,                //��Ѷ��Ʊ
    E_ENTRY_QQENTERTAINMENT,        //��Ѷ����
    E_ENTRY_QQSPORTS,               //��Ѷ����
    E_ENTRY_QQFARM,                 //QQũ��
    E_ENTRY_QQPASTURE,              //QQ����
    E_ENTRY_QQHOUSELAND,            //QQ��԰
    E_ENTRY_QQMAGICGARDEN,          //ħ����԰
    E_ENTRY_QQSUNNYPASTURE,         //��������
    E_ENTRY_QQJINGWUTANG,           //������
    E_ENTRY_QQDELICIOUSTOWN,        //��ζС��
    E_ENTRY_QQANIMALHERO,           //����Ӣ��
    E_ENTRY_QQLOVEPET,              //�����
    E_ENTRY_QQMUSIC,                //QQ����
    E_ENTRY_CAIFUTONG,              //�Ƹ�ͨ
    E_ENTRY_QQGAME,                 //QQ��Ϸ
    E_ENTRY_FRIENDDEAL,             //��������
    E_ENTRY_SUPERQQ,                //����QQ
    E_ENTER_3RD_BAIDU,              //�ٶ�
    E_ENTER_3RD_RENRENWANG,         //������
    E_ENTER_3RD_SINAWEIBO,           //����΢��
    E_ENTER_QQMESSAGE               //Q��
}MultiEntryType;



#endif
