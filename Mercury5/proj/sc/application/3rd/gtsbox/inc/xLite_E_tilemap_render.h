// TileMap Render
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_tilemap_render.h 209 2009-07-21 02:24:47Z nazy $
#ifndef __XLITE_E_TILEMAP_RENDER_H__
#define __XLITE_E_TILEMAP_RENDER_H__


#include "xLite_E_internal.h"

/*!
 * @file xLite_E_tilemap_render.h
 * @brief ��ͼ��Ⱦ�ӿ�
 */


/*!
 * @brief ��ʼ����Ⱦ��
 * @param tilemap_render ��Ⱦ��ָ��
 * @param data ��ͼ����ָ��
 * @param graphics Graphics�Ľṹָ��
 */
xl_void xlite_E_tilemap_render_init(xlite_tilemap_render* tilemap_render,xlite_tilemap_data* data,xlite_graphics* graphics);


/*!
 * @brief �����ӿ�
 * @param tilemap_render ��Ⱦ��ָ��
 * @param left ��
 * @param top ��
 * @param right ��
 * @param right ��
 */
xl_void xlite_E_tilemap_render_set_viewport(xlite_tilemap_render* tilemap_render,xl_int32 left,xl_int32 top,xl_int32 right,xl_int32 bottom);


/*!
 * @brief �Ƿ�������
 * @param tilemap_render ��Ⱦ��ָ��
 * @param enable_cache �Ƿ�������
 */
xl_bool xlite_E_tilemap_render_enable_cache(xlite_tilemap_render* tilemap_render,xl_bool enable_cache);


/*!
 * @brief ��ʼ����
 * @param tilemap_render ��Ⱦ��ָ��
 * @param map_pos_x ��ͼx����
 * @param map_pos_y ��ͼy����
 */
xl_void xlite_E_tilemap_render_begin_cache(xlite_tilemap_render* tilemap_render,xl_int32 map_pos_x,xl_int32 map_pos_y);


/*!
 * @brief ֹͣ����
 * @param tilemap_render ��Ⱦ��ָ��
 */
xl_void xlite_E_tilemap_render_end_cache(xlite_tilemap_render* tilemap_render);

/*!
 * @brief ��Ⱦһ���ͼ
 * @param tilemap_render ��Ⱦ��ָ��
 * @param map_pos_x ��ͼx����
 * @param map_pos_y ��ͼy����
 * @param layer_index ������
 * @param cached �Ƿ񻺴�
 */
xl_void xlite_E_tilemap_render_draw_layer(xlite_tilemap_render* tilemap_render,xl_int32 map_pos_x,xl_int32 map_pos_y,xl_uint8 layer_index,xl_bool cached);


#endif