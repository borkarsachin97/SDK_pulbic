#ifndef _zm_memory_h_
#define _zm_memory_h_

#include "zm_typedef.h"

/*
 * ��ȡӦ��ƽ̨����ʹ�ÿռ�
 */
zm_extern zm_void* zm_memory_pool_create(zm_int* pool_size);

/*
 * �ͷ�Ӧ��ƽ̨����ʹ�ÿռ�
 */
zm_extern zm_void  zm_memory_pool_destroy(zm_void* ptr);

#endif//_zm_memory_h_
