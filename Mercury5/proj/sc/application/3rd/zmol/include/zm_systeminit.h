#ifndef _ZHANGM_SYSTEM_INIT_H_
#define _ZHANGM_SYSTEM_INIT_H_

#include "zm_typedef.h"

/*
 * ��Ĵָϵͳ��ʼ��mmi\Framework\Tasks\TasksSrc\MMITask.c 
 *						--> InitAllApplications �����е���
 */
zm_extern zm_void zm_start_init(zm_void);

/*
 * ����IMSI, �� mmi\MiscFramework\MiscFrameworkSrc\NetworkFunctions.c 
 *					--> RspToTestRoamingEnabled�����е���
 */
zm_extern zm_void zm_set_imsi(const zm_int8* pImsi);

#endif//_ZHANGM_SYSTEM_INIT_H_
