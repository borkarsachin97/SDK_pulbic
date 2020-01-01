#ifndef _zm_app_config_h_
#define _zm_app_config_h_

#include "zm_typedef.h"

typedef struct
{
	const unsigned char*	m_app;
	int						m_length;
}zm_fixedapp;

/**
 * ��ȡ�̻�Ӧ�ø���
 */
zm_extern zm_int zm_get_fixedapp_count(zm_void);

/**
 * ��ȡ�̻�Ӧ��
 */
zm_extern const zm_fixedapp* zm_get_fixedapp(zm_int idx);

#endif//_zm_app_config_h_
