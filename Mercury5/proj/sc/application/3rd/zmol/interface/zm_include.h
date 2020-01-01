#ifndef __ZM_INCLUDE_H_____
#define __ZM_INCLUDE_H_____
   
#define ZMOL_MSTAR_VERSION	0x0204

#include "ven_file.h"
#include "ven_os.h"
#include "ven_sdk.h"
#include "ven_kpd.h"
#include "ven_ts.h"
#include "ven_time.h"
#include "ven_graphics.h"
#include "ven_stc.h"
#include "ven_setting.h"
#include "ven_handle.h"
#include "ven_common_def.h"
#include "ven_comdef_priv.h"
#include "ven_socket.h"
#include "ven_util.h"
#include "ven_drv.h"
#include "ven_dbg.h"
#include "Ms_data.h"
#include "ven_codec.h"
#include "ven_msg.h"
#include "ven_cc.h"
#include "ven_msg_msgt.h"
#include "ven_editor.h"
#include "ven_ui.h"
#include "SockMgrConnectionItf.h"
#include "ms_socket_adaptor.h"
#include "mmi_mae_shell.h"

#include "zm_typedef.h"


//#define ZM_OPEN_FILE_TRACE
void zm_file_trace(const char* fmt, ...);

/**
 * ����Ŀ¼����
 */
#define zm_work_folder				"c:\\zmol\\"

/**
 * ����Ŀ¼�Ƿ�֧����Ļ����,
 * ������������أ���ô����ı���Ŀ¼Ϊ zm_work_folder\240x320\*.app
 * �ر������������أ���ô����ı���Ŀ¼Ϊ zm_work_folder\*��app
 */
//#define zm_work_folder_auto_support	

/**
 * �Ƿ�֧�ֺ����л�
 */
//#define ZM_SUPPORT_ROTATE_SCREEN

/**
 * �ֻ��ͺŶ���
 */
#define ZM_PHONE_MODEL				"M1"
//����ֻ��޼��̣�ֻ�д�����,�뻻��һ�·�ʽ�����ֻ��ͺ�
//#define ZM_PHONE_MODEL				"NOKEY"

/**
 * ���������Ҫ���������ӱ��,������ĺ궨��
 */
//#define _ZMOL_SUPPORT_SUB_COMPANY_CODE_
#ifdef _ZMOL_SUPPORT_SUB_COMPANY_CODE_
	/**
	 * ���֧���ӱ�ţ���ô�Ա�ŵĺ궨�壬ȡֵ��Χ 0 - 99
	 */
	#define ZMOL_SUB_COMPANY_CODE	0
#endif//_ZMOL_SUPPORT_SUB_COMPANY_CODE_

/**
 * �򿪴˿��أ�ƽ̨Ӧ�������ڴ�Ҳ����ʹ��MED�ڴ�
 */
#define ZM_ZMRE_SHARE_MED_MEMORY

/**
 * �������ݿռ��С
 */
#define ZM_MEMORY_POOL_SIZE			1024*100

//�����ҪApp�����ڴ�600K����ô������궨��
//#define ZMOL_APP_MEMOERY_NOT_SHARE

/**
 * ͬ����ʽ���Ͷ���
 */
//#define ZM_SEND_SMS_SYNC_METHOD

/**
 * �ļ�·����󳤶�
 */
#define ZM_MAX_FILENAME				100

/**
 * GPRS�������ID
 */
#define GPRS_ACCOUNT_CONTEXT_ID		9
#define GPRS_ACCOUNT_NAME			"ZMOL"
#define GPRS_NETWORK_ACCOUNT_ID		18

//���ŷ���ģ��״̬
typedef enum
{
	ZM_SMS_IDLE,
	ZM_SMS_SENDING
}ZM_Sms_Status;

//���Ŷ���
typedef struct tagSmsQueue
{
	zm_int8	m_szNumber[21];		 //�ֻ���
	zm_int8	m_szText[256];		 //�������ݣ����200����
	zm_int	m_nTextLen;			 //�������ݳ���
	zm_bool	m_bNotify;			 //�Ƿ���ʾ��ʾ��
	zm_int	m_nEncode;			 //�ַ�����
	zm_int	m_nTimes;			 //���ʹ���
	zm_int	m_nResends;			 //�ط�����
}ZM_SmsQueue;

//����״̬����
typedef enum
{
    ZM_NET_STATUS_IDLE,
    ZM_NET_STATUS_CONNECTING,
    ZM_NET_STATUS_READING,
    ZM_NET_STATUS_WRITING
} ZMNetStatus;

typedef struct 
{
    zm_int 		port;
    ZMNetStatus 	status;
    zm_int8 		sockfd;
    zm_int 		socketConnected;
}ZMNetData;

#include "zm_main.h"
#include "zm_file.h"
#include "zm_gui.h"
#include "zm_gdi.h"
#include "zm_phone.h"
#include "zm_string.h"
#include "zm_systeminit.h"
 
#endif//__ZM_INCLUDE_H_____
