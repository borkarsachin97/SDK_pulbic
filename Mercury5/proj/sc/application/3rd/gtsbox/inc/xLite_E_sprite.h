// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_sprite.h 209 2009-07-21 02:24:47Z nazy $
#ifndef __XLITE_E_SPRITE_H__
#define __XLITE_E_SPRITE_H__

#include "xLite_E_internal.h"


/*!
 * @file xLite_E_sprite.h
 * @brief �������/����/����
 */

//////////////////////////////////////////////////////////////////////////
// FUNCTION (API)
//////////////////////////////////////////////////////////////////////////

/*!
 * @brief ��ʼ�����������
 * @param storage ����������ṹָ��
 * @param image_storage ͼ�ι������ṹָ��
 */
xl_void xlite_E_sprite_storage_init(xlite_sprite_storage* storage,xlite_image_storage* image_storage);

/*!
 * @brief ��ȡ��������ָ��
 * @param storage ���������ָ��
 * @param hash �������ݵ�hashֵ
 * @param add_ref_num �Ƿ��������ü���
 * @return �ɹ����ؾ������ݵ�ָ��,���򷵻�XL_NULL
 */
xlite_storage_node* xlite_E_sprite_storage_get(xlite_sprite_storage* storage,xl_uint32 hash,xl_bool add_ref_num);

/*!
 * @brief ɾ����������
 * @param storage ���������ָ��
 * @param hash �������ݵ�hashֵ
 * @param ignore_ref_num �Ƿ�������ü���
 * @param hash �ɹ�����1L,ʧ�ܷ���0L
 */
xl_int32 xlite_E_sprite_storage_delete_data(xlite_sprite_storage* storage,xl_uint32 hash,xl_bool ignore_ref_num);


/*!
 * @brief ɾ�����������
 * @param storage ���������ָ��
 */
xl_void xlite_E_sprite_storage_delete(xlite_sprite_storage* storage);


/*!
 * @brief ���һ���������ݵ��洢������
 * @param storage �洢��ָ��
 * @param hash �������ݵ�hashֵ
 * @param data ��������
 */
xl_bool xlite_E_sprite_storage_add(xlite_sprite_storage* storage,xl_uint32 hash,xlite_sprite_data* data);

/*!
 * @brief ��������
 * @param hash �����hashֵ
 * @param pool_size ������Ҫ���ڴ��ֽ���
 * @return �ɹ����ؾ���Ľṹָ��,���򷵻�XL_NULL
 */
xlite_sprite_data* xlite_E_sprite_data_create(xl_uint32 hash,xl_uint32 pool_size);

/*!
 * @brief ɾ����������,�����ͷŸþ���������������Դ
 * @param storage ����洢��ָ��
 * @param data ��������ָ��
 */
xl_void xlite_E_sprite_data_delete(xlite_sprite_storage* storage,xlite_sprite_data* data);

/*!
 * @brief ��ȡ�������ݵ�hashֵ
 * @param d ��������ָ��
 * @return �����Hashֵ
 */
#define xlite_E_sprite_data_get_hash(d)				((d)->hash)

/*!
 * @brief ��ȡ�����ͼƬ��Դ
 * @param data ��������ָ��
 * @param index ͼƬ������
 * @return ͼƬ��Դָ��
 */
#define xlite_E_sprite_data_get_image(d,i)			((d)->images[(i)])

/*!
 * @brief ��ȡPair values��ָ��
 * @param data ��������ָ��
 */
#define xlite_E_sprite_data_get_pv_buffer(d)		((d)->pair_values)




//////////////////////////////////////////////////////////////////////////
#if xlite_E_addon_sprite_j10 == 1


#define XLITE_E_ADDON_SPRITE_J10_ERR_NO_ERROR					0L
#define XLITE_E_ADDON_SPRITE_J10_ERR_FILE_HEADER				-1L
#define XLITE_E_ADDON_SPRITE_J10_ERR_RESOURCES					-2L
#define XLITE_E_ADDON_SPRITE_J10_ERR_PAIR_VALUES				-3L
#define XLITE_E_ADDON_SPRITE_J10_ERR_OUT_OF_MEMORY				-10L


/*!
 * @brief ��.j10�Ļ����ж�ȡ����
 * @param storage ����������ṹָ��
 * @param hash �����hashֵ
 * @param buffer J10�Ļ���
 * @param length ����ĳ���(�ֽ�)
 * @param ��ȡ����ͼƬ�Ļص�����ָ��
 * @note ��Ϊ������һ�ְ���������Դ����Դ,���ͨ���ص����������ؾ���������������Դ.\n
 * �����������Դ��ʱ��,�����ھ���������в�����Ҫ����Դ,�������Դ�����ڲ��һص����� \n
 * ΪNULL,��ȡ����ʧ��,�������Դ�����ڵ��Ǵ��ڻص�����,��������ͨ���ص�����������Դ�����\n
 * �ûص�����������ԴҲʧ�ܵĻ��������Ҳ��ʧ�ܡ�
 */
xl_int32 xlite_E_sprite_data_load_j10(xlite_sprite_storage* storage,xl_uint32 hash,const xl_uint8* buffer,xl_uint32 length,xlite_E_sprite_on_load_image on_load_image_callback);


#else // xlite_E_addon_sprite_j10

__inline xl_int32 xlite_E_sprite_data_load_j10(xlite_sprite_storage* storage,xl_uint32 hash,const xl_uint8* buffer,xl_uint32 length,xlite_E_sprite_on_load_image on_load_image_callback)
{
	return XLITE_E_ERROR_ADDON_UNSUPPORTED;
}

#endif




#endif