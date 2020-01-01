// xstrike lite 
// only support 8 bit index image
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_raster.h 8 2008-05-21 03:28:23Z greatelsoft\ken $
#ifndef __XLITE_E_RASTER_H__
#define __XLITE_E_RASTER_H__

#include "xLite_E_internal.h"



/*!
 * @file xLite_E_raster.h
 * @brief 2D�������ӿ�
 */


/*!
 * @brief ��ʼ��2D������
 * @param r 2D�������ṹָ��
 * @note �ú������ó�ʼ��ֵ������r����Ľṹָ�룬2D����������Ҫ�ֶ�ɾ��
 */
xl_void xlite_E_raster_init(xlite_raster* r);



/*!
 * @brief ���2D����������ռ�õ��ڴ�
 * @param r 2D�������ṹָ��
 * @note ��������ִ���ض�������ʱ����ܻ������ڴ���Ϊ����,�����б����£�\n
 * - xlite_E_raster_stretch_image\n
 * ���Ե�������Ҫ���øù��ܵ�ʱ��������˳������ʱ��,��Ҫ���øú����ͷ�\n
 * �ڴ棬������ܻ�����ڴ�й©��
 */
xl_void xlite_E_raster_cleanup(xlite_raster* r);




/*!
 * @brief �����û���������
 * @param r 2D�������ṹָ��
 * @param clip_rect �û���������
 */
xl_void xlite_E_raster_set_user_clip(xlite_raster* r,const xlite_rect* clip_rect);


/*!
 * @brief �����Ƿ����͸��ɫ
 * @param r 2D�������ṹָ��
 * @param filte_key_color �Ƿ����͸��ɫ
 */
xl_void xlite_E_raster_set_filte_key_color(xlite_raster* r,xl_bool filte_key_color);


/*!
 * @brief ����ͼ�ε�Ŀ��ͼ��
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param t_rect ���Ƶ��������ָ��
 * @param s_img Դͼ��ָ��
 * @param s_x Դͼ����λ��
 * @param s_y Դͼ����λ��
 */
xl_void xlite_E_raster_draw_image(xlite_raster* r,xlite_himage t_img,const xlite_rect* t_rect,xlite_himage s_img,xl_int32 s_x,xl_int32 s_y);


/*!
 * @brief ����ͼ�ε�Ŀ��ͼ��(���ܻ��������ڴ�,��Ҫʹ��xlite_E_raster_cleanup���)
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param t_rect ���Ƶ��������ָ��
 * @param s_img Դͼ��ָ��
 * @param s_rect Դͼ���������ָ��
 */
xl_void xlite_E_raster_stretch_image(xlite_raster* r,xlite_himage t_img,const xlite_rect* t_rect,xlite_himage s_img,const xlite_rect* s_rect);



/*!
 * @brief ����һ��������ɫ��Ŀ��ͼ��
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param x ��������
 * @param y ��������
 * @param c ��ɫ
 * @note ������ɫʹ��xlite_pf_rgb_565��ʽ,xlite_E_util_888_to_565ת��
 */
xl_void xlite_E_raster_set_pixel(xlite_raster* r,xlite_himage t_img,xl_int32 x,xl_int32 y,xl_color c);

/*!
 * @brief ��ȡĿ��ͼ��������ɫ
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param x ��������
 * @param y ��������
 * @return Ŀ��ͼ��ָ�������������ɫ
 */
xl_color xlite_E_raster_get_pixel(xlite_raster* r,xlite_himage t_img,xl_int32 x,xl_int32 y);

/*!
 * @brief ���÷�תģʽ
 * @param r 2D�������ṹָ��
 * @param flip_mode ��תģʽ
 */
xl_void xlite_E_raster_set_flip_mode(xlite_raster* r,xlite_flip_mode flip_mode);


/*!
 * @brief ����ˮƽ��
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param x ˮƽ����ʼ����
 * @param y ˮƽ����ʼ����
 * @param length ˮƽ�ߵĳ���
 * @param c �����߶�ʹ�õ���ɫ
 */
xl_void xlite_E_raster_draw_horz_line(xlite_raster* r,xlite_himage t_img,xl_int32 x,xl_int32 y,xl_uint32 length,xl_color c);

/*!
 * @brief ���ƴ�ֱ��
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param x ��ֱ����ʼ����
 * @param y ��ֱ����ʼ����
 * @param length ��ֱ�ߵĳ���
 * @param c �����߶�ʹ�õ���ɫ
 */
xl_void xlite_E_raster_draw_vert_line(xlite_raster* r,xlite_himage t_img,xl_int32 x,xl_int32 y,xl_uint32 length,xl_color c);


/*!
 * @brief �����߶�
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param x1 �߶���ʼ����
 * @param y1 �߶���ʼ����
 * @param x2 �߶ν�������
 * @param y2 �߶ν�������
 * @param c �����߶�ʹ�õ���ɫ
 */
xl_void xlite_E_raster_draw_line(xlite_raster* r,xlite_himage t_img,xl_int32 x1,xl_int32 y1,xl_int32 x2,xl_int32 y2,xl_color c);

/*!
 * @brief ���ƾ���
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param rect �������ݽṹָ��
 * @param c ���ƾ���ʹ�õ���ɫ
 */
xl_void xlite_E_raster_draw_rectangle(xlite_raster* r,xlite_himage t_img,const xlite_rect* rect,xl_uint16 c);

/*!
 * @brief ����������
 * @param r 2D�������ṹָ��
 * @param t_img Ŀ��ͼ��ָ��
 * @param rect �������ݽṹָ��
 * @param c ������ʹ�õ���ɫ
 */
xl_void xlite_E_raster_fill_rectangle(xlite_raster* r,xlite_himage t_img,const xlite_rect* rect,xl_uint16 c);

/*!
 * @brief set blend color func
 * @param r raster pointer
 * @param blend_mode blend mode,���blend_modeΪxlite_blend_copy,���������֮��Ĳ���,
 * ���blend_modeΪxlite_blend_shade_func,��ʹ�ú����shade_funcָ����shade function�������,
 * @param shade_func ��Ϻ���������,���shade_funcΪXLITE_BLEND_COLOR_USER,��blend_color����
 * Ϊһ���Ϸ������ػ�Ϻ���
 * @param blend_color ���shade_funcΪXLITE_BLEND_COLOR_USER,����Ҫ����Ϸ������ػ�Ϻ���
 */
xl_void xlite_E_raster_set_blend_mode(xlite_raster* r,xlite_blend_mode blend_mode,xl_int32 blend_func,xlite_E_raster_blend_color_func user_blend_func);



//////////////////////////////////////////////////////////////////////////
// Macro 
//////////////////////////////////////////////////////////////////////////

/*!
 * @brief �����û���������
 * @param r 2D�������ṹָ��
 * @note �ú�������ȡ���û��Զ���ļ�������
 */
#define xlite_E_raster_reset_user_clip(r)					( (r)->has_user_clip_rect = XL_FALSE )

/*!
 * @brief ��ȡ�û��Զ�����þ���
 * @param r 2D�������ṹָ��
 * @return ��������Զ�����þ����򷵻��û��Զ���ļ��þ���,���򷵻�XL_NULL
 */
#define xlite_E_raster_get_user_clip_rect(r)				( ((r)->has_user_clip_rect) ? & (r)->user_clip_rect : XL_NULL ) 

/*!
 * @brief ��ȡ�Ƿ���˹ؼ�ɫ
 * @param r 2D�������ṹָ��
 * @return �Ƿ���˹ؼ�ɫ 
 */
#define xlite_E_raster_is_filte_key_color(r)				( (r)->filte_key_color )


/*!
 * @brief ����Alphaֵ
 * @param r 2D�������ṹָ��
 * @param alpha_value alphaֵ,��ΧΪ(0-32)
 */
#define xlite_E_raster_set_alpha_value(r,a)					( (r)->alpha_value = (a) )

/*!
 * @brief ����Alphaֵ
 * @param r 2D�������ṹָ��
 * @return ��ǰ�������е�alphaֵ
 */
#define xlite_E_raster_get_alpha_value(r)					( (r)->alpha_value )

/*!
 * @brief ���õ�ɫ��ƫ��
 * @param r 2D�������ṹָ��
 * @param pal_offset ��ɫ��ƫ����
 */
#define xlite_E_raster_set_palette_offset(r,p)				( (r)->palette_offset = (p) )

/*!
 * @brief ���ص�ǰ�ĵ�ɫ��ƫ��
 * @param r 2D�������ṹָ��
 * @return ��ǰ�������еĵ�ɫ��ƫ����
 */
#define xlite_E_raster_get_palette_offset(r)				( (r)->palette_offset )	

/*!
 * @brief ��ȡ��ǰ�ķ�תģʽ
 * @param r 2D�������ṹָ��
 * @return ��ǰ�������еķ�תģʽ
 */
#define xlite_E_raster_get_flip_mode(r)						( (r)->flip_mode )			

/*
 * @brief ���ùؼ�ɫ����
 * @param r 2D�������ṹָ��
 * @param key_color_idx �ؼ�ɫ����
 */
#define xlite_E_raster_set_key_color(r,k)					( (r)->key_color_index = (k) )

/*
 * @brief ��ȡ��ǰ�Ĺؼ�ɫ����
 * @param r 2D�������ṹָ��
 * @return ��ǰ�Ĺؼ�ɫ����
 */
#define xlite_E_raster_get_key_color(r)						( (r)->key_color_index )



#endif