// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_image_storage.h 209 2009-07-21 02:24:47Z nazy $
#ifndef __XLITE_E_IMAGE_STORAGE_H__
#define __XLITE_E_IMAGE_STORAGE_H__

#include "xLite_E_internal.h"

/*!
 * @file xLite_E_image_storage.h
 * @brief ͼ�ι�����
 */


/*
 * @brief ��ʼ��ͼ��洢��
 * @param storage ͼ��洢���ṹָ��
 */
xl_void xlite_E_image_storage_init(xlite_image_storage* storage);

/*
 * @brief ɾ��ͼ��洢��
 * @param storage ͼ��洢���ṹָ��
 */
xl_void xlite_E_image_storage_delete(xlite_image_storage* storage);


/*!
 * @brief ����ͼ����Դ��ͼ��洢��
 * @param storage ͼ��洢���ṹָ��
 * @param hash ͼ�ε�hashֵ
 * @param himage ͼ�ε���Դָ��
 * @return ����ɹ�����ͼƬ����XL_TRUE,����ڹ��������Ѿ�������ͬhash��ͼ����Դ\n
 * �����Ӹ���Դ�����ü���ɾ�������ͼƬ,���ҷ���XL_FALSE
 */
xl_bool xlite_E_image_storage_add(xlite_image_storage* storage,xl_uint32 hash,xlite_himage himage);


/*!
 * @brief ��ͼ��洢���в���ͼ��
 * @param storage ͼ��洢���ṹָ��
 * @param hash ͼ�ε�hashֵ
 * @return ����������д�����Ӧhash��ͼ��,�򷵻ظ�ͼ����Դ��ָ��,���򷵻�XL_NULL
 */
xlite_storage_node* xlite_E_image_storage_get(xlite_image_storage* storage,xl_uint32 hash,xl_bool add_ref);


/*!
 * @brief ж�ؾ���������е�ͼƬ
 * @param storage ���������ָ��
 * @param hash ��Ҫɾ����ͼ����Դ��ָ��
 * @param ignore_ref_num �������ü���ɾ��
 * @return ���ͼƬ���ڱ�������Դ����,���ص�ǰ�����ü���,���򷵻�0,���ͼƬ�����ڷ���-1L
 * @note �ú����������Դ��ʹ����������Ǽ������ü�������ɾ����ͼƬ
 */
xl_int32 xlite_E_image_storage_delete_image(xlite_image_storage* storage,xl_uint32 hash,xl_bool ignore_ref_num);

/*!
 * @brief ж�ؾ���������е�ͼƬ
 * @param storage ���������ָ��
 * @param himage ��Ҫɾ����ͼ����Դ��ָ��
 * @param ignore_ref_num �������ü���ɾ��
 * @return ���ͼƬ���ڱ�������Դ����,���ص�ǰ�����ü���,���򷵻�0,���ͼƬ�����ڷ���-1L
 * @note �ú����������Դ��ʹ����������Ǽ������ü�������ɾ����ͼƬ
 */
xl_int32 xlite_E_image_storage_delete_image_by_ptr(xlite_image_storage* storage,xlite_himage himage,xl_bool ignore_ref_num);



#endif