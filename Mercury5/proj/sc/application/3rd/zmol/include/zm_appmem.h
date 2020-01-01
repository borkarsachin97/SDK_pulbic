#ifndef _zm_app_memory_h_
#define _zm_app_memory_h_

#include "zm_typedef.h"

/*
 * ��ȡӦ�ó���̬������ڴ��
 */
zm_extern zm_void* zm_get_app_load_memory(zm_uint32 size);

/*
 * �ͷ�Ӧ�ó���̬������ڴ��
 */
zm_extern zm_void zm_free_app_load_memory(zm_void* ptr);

/*
*  To check max free memory block
*  Input: size, the size of checking byte(s)
*  Return: 0 fail, 1 success.
*/
int zm_memcheck(int size);

#endif//_zm_app_memory_h_
