#ifndef _zm_bt_mouse_h_
#define _zm_bt_mouse_h_

#include "zm_typedef.h"

typedef struct
{
/**
 *	�����������ӿ�
 */
	zm_void (*zm_btmouse_entry_remote_control)(zm_void);

/**
 *	�˳��������ӿ�
 */
	zm_void (*zm_btmouse_exit_remote_control)(zm_void);

/**
 *	�������ݽӿ�
 */
	zm_void (*zm_btmouse_send_data_req)(zm_int data_len, zm_uint8* data);

/**
 *	��ȡ������е������ı�
 */
	zm_int8* (*zm_btmouse_get_input_buffer)(zm_void);

}zm_btmouse;

/**
 * ��ȡ�������ӿ�
 */
zm_extern zm_btmouse* zm_get_btmouse(zm_void);

#endif//_zm_bt_mouse_h_
