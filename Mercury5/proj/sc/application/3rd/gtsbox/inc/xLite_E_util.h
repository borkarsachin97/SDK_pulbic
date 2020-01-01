 // 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_util.h 8 2008-05-21 03:28:23Z greatelsoft\ken $
#ifndef __XLITE_E_UTIL_H__
#define __XLITE_E_UTIL_H__

#include "xLite_E_internal.h"

/*!
 * @file xLite_E_util.h
 * @brief ���߼�
 */


/*!
 * @brief �������ظ�ʽ��ռ�õ�bit��
 * @param pf ��Ҫ��ѯ�����ظ�ʽ
 * @return �ɹ���������ռ�õ�bit��,���򷵻�-1L
 */
xl_int32 xlite_E_util_calc_bit_per_pixel(xlite_pixel_format pf);




/*!
 * @brief ����Unicode�ַ�����Hashֵ
 * @param arg Unicode�ַ���
 * @param length �ַ����ĳ���
 * @return ���ظ�Unicode�ַ�����Hashֵ
 */
xl_uint32 xlite_E_util_get_hash_ustring(const xl_wchar* arg,xl_uint32 length);

/*!
 * @brief ����Ansi�ַ�����Hashֵ
 * @param arg Ansi�ַ���
 * @param length �ַ����ĳ���
 * @return ���ظ�Ansi�ַ����ĳ���
 */
xl_uint32 xlite_E_util_get_hash_string(const xl_char* arg,xl_uint32 length);


/*!
 * @brief ʹ��"����"�㷨�������
 * @param t_color ����ɫ
 * @param s_color ��Ҫ���Ƶ���ɫ
 * @return ��Ϻ����ɫ
 * @note ���ص���ɫΪxlite_pf_rgb_565��ʽ
 */
xl_uint16 xlite_E_util_blend_additive(xl_uint16 t_color,xl_uint16 s_color);

/*!
 * @brief ʹ��"Alpha"�㷨�������
 * @param t_color ����ɫ
 * @param s_color ��Ҫ���Ƶ���ɫ
 * @return ��Ϻ����ɫ
 * @note ���ص���ɫΪxlite_pf_rgb_565��ʽ
 */
xl_uint16 xlite_E_util_blend_alpha(xl_uint16 t_color,xl_uint16 s_color,xl_uint8 alpha_value);


/*!
 * @brief ����ͼ�λ�����ÿ��ռ�õ��ֽ���
 * @param bpp ͼ��ÿ������ռ�õ�bit��
 * @param width ͼ�εĿ��
 * @return ����4�ֽڶ����ͼ��ÿ��ռ�õ��ֽ���
 */
#define xlite_E_util_calc_byte_per_line(b,w)	( ((( (b) * (w)) + 31) / 32)  * 4 )			


/*!
 * @brief ת��xlite_pf_rgb_888��xlite_pf_rgb_565��ʽ
 * @param r Դ��ɫ�ĺ�ɫ����
 * @param g Դ��ɫ����ɫ����
 * @param b Դ��ɫ����ɫ����
 * @return xlite_pf_rgb_565��ʽ����ɫ
 * @note ��ɫ�����ķ�ΧΪ 0 - 255,(255,255,255)Ϊ��ɫ,(0,0,0)Ϊ��ɫ
 */
#define xlite_E_util_888_to_565(r,g,b)			( (xl_uint16)(((b)>>3) | (((g) & 0xFC) << 3) | ((r) & 0xF8) << 8))

/*
 * @brief ��ȡxlite_pf_rgb_565��������red������ֵ
 * @param c ��ɫ
 * @return red������ֵ
 */
#define xlite_E_util_get_red_value(c)			( (xl_uint8)( ( ( (c) & 0xF800 ) >> 11 ) << 3 ) )

/*
 * @brief ��ȡxlite_pf_rgb_565��������green������ֵ
 * @param c ��ɫ
 * @return green������ֵ
 */
#define xlite_E_util_get_green_value(c)			( (xl_uint8)( ( ( (c) & 0x7E0 ) >> 5 ) << 2 ) )

/*
 * @brief ��ȡxlite_pf_rgb_565��������blue������ֵ
 * @param c ��ɫ
 * @return blue������ֵ
 */
#define xlite_E_util_get_blue_value(c)			( (xl_uint8)( ( ( (c) & 0x1F) << 3) ) )

/*!
 * @brief �ϲ������ֽڵ�һ��uint16
 * @param l ��λ���ֽ�
 * @param h ��λ���ֽ�
 * @return ��Ϻ��uint16
 */
#define xlite_E_util_make_uint16(l,h)			( (xl_uint16)( (xl_uint8)(l) ) | ( ((xl_uint16)( (xl_uint8)(h)) ) << 8) )


/*!
 * @brief �ϲ�����uint16��һ��uint32
 * @param l ��λ��uint16
 * @param h ��λ��uint16
 * @return ��Ϻ��uint32
 */
#define xlite_E_util_make_uint32(l,h)			( (xl_uint32)( (xl_uint16)(l) ) | ( ((xl_uint32)( (xl_uint16)(h) )) << 16) )

/*!
 * @brief ѹ�뷭תģʽ
 * @param flip_mode ��ǰ��תģʽָ��
 * @param new_mode ��Ҫѹ���ģʽ
 */
#define xlite_E_util_push_flip_mode(f,n)		( *(f) ^= (n) )



#endif