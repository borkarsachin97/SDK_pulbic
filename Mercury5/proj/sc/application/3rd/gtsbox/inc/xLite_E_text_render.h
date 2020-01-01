// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_text_render.h 8 2008-05-21 03:28:23Z greatelsoft\ken $
#ifndef __XLITE_E_TEXT_RENDER_H__
#define __XLITE_E_TEXT_RENDER_H__

#include "xLite_E_internal.h"

/*
 * @brief ��ʼ�����ַ���
 * @param 
 * @return
 */
xl_int32 xlite_E_text_render_draw(xlite_graphics* g,const xlite_rect* text_rect,const xl_wchar* text,xl_uint32 length,xl_uint32 flags);

/*
 * @brief �����ַ���,����ַ��������������������ռλ��
 * @param
 * @return
 */
xl_void xlite_E_text_render_output(xlite_graphics* g,const xlite_rect* text_rect,const xl_wchar* text,xl_uint32 length,const xl_wchar* holdplace,xl_uint32 hp_len,xl_uint32 flags);


/*
 * @brief ��������ַ���������
 * @param
 * @return
 */
xl_int32 xlite_E_text_render_get_line(xlite_graphics* g,xl_uint32 draw_area_width,const xl_wchar* text,xl_uint32 length);



/*!
* @brief �����ּ��
* @param
* @return ֮ǰ���ּ������
*/
xl_int32 xlite_E_text_render_set_char_space(xlite_graphics* g,xl_int32 char_space);

/*!
* @brief ���ص�ǰ���ּ��
* @param
* @return
*/
xl_int32 xlite_E_text_render_get_char_space(xlite_graphics* g);


/*!
* @brief �����о�
* @param
* @return ����֮ǰ���о�
*/
xl_int32 xlite_E_text_render_set_line_space(xlite_graphics* g,xl_int32 line_space);

/*!
* @brief ���ص�ǰ���о�
* @param
* @return
*/
xl_int32 xlite_E_text_render_get_line_space(xlite_graphics* g);

#endif