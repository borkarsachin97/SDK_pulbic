// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_sprite_render.h 8 2008-05-21 03:28:23Z greatelsoft\ken $
#ifndef __XLITE_E_SPRITE_RENDER_H__
#define __XLITE_E_SPRITE_RENDER_H__

#include "xLite_E_internal.h"

/*!
 * @file xLite_E_sprite_render.h
 * @brief ������Ⱦ�ӿ�
 */


/*!
 * @brief ��Ⱦ����
 * @param g ͼ�ι�����ָ��
 * @param x ����
 * @param y ����
 * @param data ��������
 * @param act ��Ⱦ�ľ��鶯������ָ��
 * @param frm ��Ⱦ�ľ���ָ֡��
 */
xl_void xlite_E_sprite_render_draw(xlite_graphics* g,xl_int32 x,xl_int32 y,xlite_sprite_data* data,xlite_sprite_action* act,xlite_sprite_frame* frm);




#endif