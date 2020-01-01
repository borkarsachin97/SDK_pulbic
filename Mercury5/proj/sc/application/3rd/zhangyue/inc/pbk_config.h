#if defined(__ZYUE_ENGINE__)
#ifndef PBK_CONFIG_H
#define PBK_CONFIG_H

//MSTAR�汾����
#define PBK_MSTAR_XMMI 		(1.0)
#define PBK_MSTAR_EMMI 		(20403)

#define PBK_PLATFORM_RELEASE //������
#define PBK_LOG_ON //��־����
#define PBK_PLATFORM_SIMPLE

//���ܿ���
#define PBK_MEM_LARGER_MODE_ON //���ڴ�֧��
//#define PBK_APP_FONT_LOAD_SUPPORT //С������ؿ���

//#define PBK_WDG_SUPPORT


#include <stdio.h>
#include <stdarg.h>

#if defined(WIN32)
#include <windows.h>
#endif

#include "ven_kpd.h"
#include "ven_ts.h"
#include "ven_stc.h"
#include "ven_ui.h"
#include "ven_util.h"
#include "ven_editor.h"
#include "ven_graphics.h"
#include "ven_handle.h"
#include "ven_os.h"
#include "ven_std.h"
#include "ven_codec.h"
#include "ven_time.h"
#include "ven_drv.h"
#include "ven_msg.h"

#include "pbk_define.h"
#include "pbk_platform_define.h"
#include "pbk_platform_interface.h"
#include "pbk_os_res.h"
#include "pbk_launcher.h"

#endif
#endif

