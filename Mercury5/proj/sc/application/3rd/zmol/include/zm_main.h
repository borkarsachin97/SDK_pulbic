#ifndef __mobile_alliance_main_h__
#define __mobile_alliance_main_h__

#include "zm_typedef.h"

/*
 * �������
 */
zm_extern zm_void zm_main(zm_void);

/**
 * �ض�������
 */
zm_extern zm_void zm_extra_main_entry(zm_int idx, const zm_uint16* caption);

/**
 * ��������ĳ��Ӧ��
 * @appId ,Ӧ�ñ��
 */
zm_extern zm_void zm_start_app(const zm_int8* appId, const zm_uint16* app_name);

/*
 * �����˳�
 */
zm_extern zm_void zm_exit(zm_void);

/*
 * ���»���
 */
zm_extern zm_void zm_repaint(zm_void);

/*
 * �������Ӧ�ô��ڸ��ǵ�ʱ����ô˴���
 */
zm_extern zm_void zm_wnd_inactive(zm_void);

/*
 * �����¼�����
 */
zm_extern zm_void zm_offer_key_event(ZM_KeyEvent event, ZM_KeyCode code);

/*
 * �����¼�����
 */
zm_extern zm_void zm_offer_pen_event(ZM_PenEvnent event, zm_point* pt);

/*
 * �жϵ�ǰϵͳ�Ƿ���������
 */
zm_extern zm_bool zm_is_runing(zm_void);

/*
 * ֪ͨϵͳ������IDLE����,֪ͨϵͳ������Ϣ
 */
zm_extern zm_void zm_enter_idle_screen_notify(zm_void);

#endif//__mobile_alliance_main_h__
