#ifndef __MMI_COMMON_PRIVATE_H__
#define __MMI_COMMON_PRIVATE_H__

#include "mmi_mae_common_def.h"
#include "mmi_common_custom.h"
#include "mmi_common_cfg.h"
#include "mmi_mae_shell.h"
#include "mmi_mae_window.h"
#include "mmi_mae_widget.h"

#define  APP_WINDOW_MAX        1000
#define  PRIVATE_APP_KEYGUARD  4  //����PRIVATE_APP_COUNT����������KeyGuard
enum
{
    PRIVATE_INPUT_WND = WND_ID_APP_BASE+APP_WINDOW_MAX,
    WDG_INPUT_PASSWORD,
};

enum
{
    RETURN_TRUE = 0,
    RETURN_FALSE,
    RETURN_START_APP,
    RETURN_KEYGUARD, //���ص�KeyGuard����Ҫ��KeyGuardAPP����
    RETURN_NOT_INPUT_PASSWORD_WND
};

typedef u8 PRIVATE_APP_NAME_e;
typedef u8 PRIVATE_APP_PRESS_RETURN_e;

typedef struct PrivateInputWndData_t_
{
    IWidget *pInputWdgPassword;
    boolean bIsKeyGuard;
}PrivateInputWndData_t;

//���˽��APP�Ƿ���Ҫ��������
LockApp_t PrivateCheckPassword(IApplet *pApplet, PRIVATE_APP_NAME_e appName,boolean bIsKeyGuard);

//��������˽��APPΪ����δ��֤,OnApp��KeyGuardApp��Ҫ�ýӿ�
void PrivateSetAllUnverify(void);

//���ô�˽��APP����Ϊ0,OnApp��Ҫ���øýӿ�
void PrivateSetAllAppStop(void); 

//�������������ǰ�����ذ����¼�
PRIVATE_APP_PRESS_RETURN_e PrivateInputKetPress(IApplet * pApplet,MAEEvent_t nEvt,u32 param1,u32 param2,PRIVATE_APP_NAME_e appName);

//��¼˽��APP�����õĴ�����Constructor ����һ�Σ�Destructor������һ��
void PrivateCallAppTimes(PRIVATE_APP_NAME_e appName,CallApp_t tAppState);

//KeyGuard������˽��APP�Ĵ��� TRUE:��Ҫ������ FALSE:����Ҫ������
boolean PrivateKeyGuardResume(IApplet *pApplet);

//�����һ�����ʾ�ػ�����
boolean PrivateInputKetLongPress(IApplet * pApplet,MAEEvent_t nEvt,u32 param1,u32 param2);

#endif
