// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_image.h 8 2008-05-21 03:28:23Z greatelsoft\ken $
#ifndef __XLITE_E_IMAGE_H__
#define __XLITE_E_IMAGE_H__


#include "xLite_E_internal.h"



/*!
 * @file xlite_E_image.h
 * @brief ͼ����Դ����
 */


/*!
 * @brief ����ͼ����Դ
 * @param width: ������ͼ����Դ�Ŀ��
 * @param height: ������ͼ����Դ�ĸ߶�
 * @param pf: ������ͼ����Դ�����ظ�ʽ
 * @param flag: ��־λ
 * @return �ɹ�����ͼ����Դ��ָ��,���򷵻�XL_NULL
 * @note Ŀǰֻ֧�ִ���(xlite_pf_rgb_565,xlite_pf_index_8,xlite_pf_index_1)�����ָ�ʽ��ͼ��
 * ��֮ǰ�İ汾�б仯,������ͼ�񻺳�ÿ��Ϊ4�ֽڶ���,�ڼ���ƫ�Ƶ�ʱ����Ҫʹ����Դ�ṹ�е�
 * bytes_per_pixel
 */
xlite_himage xlite_E_image_create(xl_uint16 width,xl_uint16 height,xlite_pixel_format pf,xl_uint32 flag);

/*!
 * @brief ����ͼ����Դ(��չ�汾)
 * @param width: ������ͼ����Դ�Ŀ��
 * @param height: ������ͼ����Դ�ĸ߶�
 * @param pf: ������ͼ����Դ�����ظ�ʽ
 * @param shared_buffer:�����ͼ�񻺳���
 * @param bit_per_pixel:�����ͼ�񻺳��������ظ�ʽ
 * @param flag: ��־λ
 */
xlite_himage xlite_E_image_create_ex(xl_uint16 width,xl_uint16 height,xlite_pixel_format pf,xl_uint8* shared_buffer,xl_int32 bit_per_pixel,xl_uint32 flag);


/*!
 * @brief ��himage�����ʽ����
 * @param buffer ����HIMAGE������
 * @return �ɹ�����ͼ����Դ��ָ��,���򷵻�XL_NULL
 */
xlite_himage xlite_E_image_restore_from_buffer(const xl_uint8* buffer);

/*!
 * @brief ɾ��ͼ����Դ
 * @param image: ͼ����Դָ��
 */
xl_void xlite_E_image_delete(xlite_himage image);

//////////////////////////////////////////////////////////////////////////
// Macro
//////////////////////////////////////////////////////////////////////////

/*!
 * @brief ��ȡͼ�εĿ��
 * @param himage ͼ�νṹ��ָ��
 * @return ͼ�εĿ��,��ͬ��xlite_image.width
 */
#define xlite_E_image_get_width(h)					((h)->width)

/*!
* @brief ��ȡͼ�εĸ߶�
* @param himage ͼ�νṹ��ָ��
* @return ͼ�εĸ߶�,��ͬ��xlite_image.height
*/
#define xlite_E_image_get_height(h)					((h)->height)

/*!
 * @brief ��ȡͼ�λ���ÿ��ռ�õ��ֽ���
 * @param himage ͼ�νṹ��ָ��
 * @return ͼ�λ���ÿ��ռ�õ��ֽ���
 */
#define xlite_E_image_get_bytes_per_line(h)			((h)->bytes_per_line)

/*!
 * @brief ��ȡͼ�λ���
 * @param himage ͼ�νṹ��ָ��
 * @return ͼ�λ����ָ��
 */
#define xlite_E_image_get_buffer(h)					((h)->buffer)

/*!
 * @brief ��ȡָ���е�ͼ�λ���
 * @param himage ͼ�νṹ��ָ��
 * @param line_idx ָ������
 * @return ͼ�λ����ָ��
 */
#define xlite_E_image_get_line_buffer(h,l)			( ((h)->line_address) ? (h)->line_address[(l)] : (xl_uint8*)(h)->buffer + ((h)->bytes_per_line * (l)) )

/*!
 * @brief get image palette
 * @param  himage image pointer
 * @return image palette
 */
#define xlite_E_image_get_palette(h)				((h)->palette)

/*!
 * @brief get image pixel format
 * @param himage himage pointer
 * @return pixel format of himage
 */
#define xlite_E_image_get_pixel_format(h)			((h)->pf)

/*!
 * @brief return buffer length
 * @param image himage pointer
 */
#define xlite_E_image_get_buffer_length(h)			((h)->buffer_length)




//////////////////////////////////////////////////////////////////////////
// ADDON
//////////////////////////////////////////////////////////////////////////
#if xlite_E_addon_pcx == 1

#define XLITE_E_ADDON_PCX_ERR_NO_ERROR						0L
#define XLITE_E_ADDON_PCX_ERR_INVALID_PARAM					-1
#define XLITE_E_ADDON_PCX_ERR_INVALID_FORMAT				-2
#define XLITE_E_ADDON_PCX_ERR_OUT_OF_MEMORY					-3
#define XLITE_E_ADDON_PCX_ERR_DECOMPRESS					-4



/*!
 * @brief �Ӱ���PCX�ļ��Ļ��崴��ͼƬ
 * @param himage_ptr ͼ����Դָ��
 * @param buffer ����PCX�ļ����ݵĻ���
 * @param buffer_length ����ĳ���
 * @return ��ȷ����XLITE_E_ADDON_PCX_ERR_NO_ERROR,*himage_ptr����ֵΪ��ȡ��ͼ��,���򷵻ش������
 * @note himage�н�����PCX�ļ�����,�����ɾ��PCX�ļ������Ը�ͼƬ���������������,����Ը�ͼƬִ��\n
 * д��������δ֪.(���PCX�ļ�����Ϊconst����,�������ڴ�Ƿ����ʴ���)
 */
xl_int32 xlite_E_image_create_from_pcx(xlite_himage* himage_ptr,const xl_uint8* buffer,xl_uint32 buffer_length);


#else	// xlite_E_addon_pcx

__inline xl_int32 xlite_E_image_create_from_pcx(xlite_himage* himage_ptr,const xl_uint8* buffer,xl_uint32 buffer_length)
{
	return XLITE_E_ERROR_ADDON_UNSUPPORTED;
}

#endif	// xlite_E_addon_pcx





#endif