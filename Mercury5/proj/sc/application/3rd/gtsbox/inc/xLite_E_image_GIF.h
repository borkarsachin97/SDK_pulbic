// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_image_GIF.h 209 2009-07-21 02:24:47Z nazy $
#ifndef __XLITE_E_IMAGE_GIF_H__
#define __XLITE_E_IMAGE_GIF_H__


#include "xLite_E_internal.h"

/*!
 * @file xlite_E_image_GIF.h
 * @brief gifͼ����Դ����
 */


#if xlite_E_addon_gif == 1


#define XLITE_E_ADDON_GIF_ERR_NO_ERROR						0
#define XLITE_E_ADDON_GIF_ERR_UNKNOWN_FORMAT				-1
#define XLITE_E_ADDON_GIF_ERR_OUT_OF_MEMORY					-2
#define XLITE_E_ADDON_GIF_ERR_UNKNOWN_SEGMET_ID				-3
#define XLITE_E_ADDON_GIF_ERR_IMAGE_DEFECT					-4
#define XLITE_E_ADDON_GIF_ERR_EOF_TOO_SOON					-5
#define XLITE_E_ADDON_GIF_ERR_BPP_UNSUPPORTED				-6
#define XLITE_E_ADDON_GIF_ERR_ALREADY_OPENED				-7


/*!
 * @brief �ӻ��崴��ͼ����Դ
 * @param himage_ptr ͼ����Դָ���ָ��
 * @param buffer ����GIF�ļ����ݵĻ���
 * @param buffer_length ����ĳ���
 * @return �ɹ�����XLITE_E_ADDON_GIF_ERR_NO_ERROR,���򷵻�С��0�Ĵ�����롣
 * @note �ú���ֻ֧��8bit��GIFͼ��,����ֻ����GIF��һ֡ͼ��
 */
xl_int32 xlite_E_image_load_gif(xlite_himage* himage_ptr,const xl_uint8* buffer,xl_uint32 buffer_length);



// /*!
//  * @brief ����Gif������
//  * @return �ɹ����ؽ��������,���򷵻�NULL
//  * @note ��������ҪԼ17K���ڴ洴��LZW��\n
//  * ���ʹ��xlite_use_static == 1ѡ�����xlite,�����趯̬�����ڴ�
//  */
// xlite_gif_hdecoder xlite_E_image_create_gif_decoder(xl_void);
// 
// 
// /*!
//  * @brief ʹ�ý������������GIF�ļ����ݵĻ���
//  * @param decoder GIF���������
//  * @param himage_ptr ͼ����Դָ���ָ��
//  * @param buffer ����GIF�ļ����ݵĻ���
//  * @param buffer_length ����ĳ���
//  * @return �ɹ�����XLITE_E_ADDON_GIF_ERR_NO_ERROR,���򷵻�С��0�Ĵ������
//  */
// xl_int32 xlite_E_image_decode_gif(xlite_gif_hdecoder hdecoder,xlite_himage* himage_ptr,const xl_uint8* buffer,xl_uint32 buffer_length);
// 
// 
// /*!
//  * @brief ɾ��Gif������
//  * @param hdecoder ���������
//  */
// xl_void xlite_E_image_delete_gif_decoder(xlite_gif_hdecoder hdecoder);



#endif


#endif