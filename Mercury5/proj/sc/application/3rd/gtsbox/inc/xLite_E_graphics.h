// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_graphics.h 67 2008-06-27 03:13:03Z greatelsoft\ken $
#ifndef __XLITE_E_GRAPHICS_H__
#define __XLITE_E_GRAPHICS_H__

#include "xLite_E_internal.h"

/*!
 * @file xlite_E_graphics.h
 * @brief Graphics
 */


/*!
 * @brief ��ʼ��Graphics
 * @param g:Graphics�Ľṹָ��,��ʼ�������Ը�ָ��ָ���Graphics���г�ʼ��
 * @param ds: DirectScreen�Ľṹָ��.��ʼ����������DirectScreen����Ĭ����ϵ
 * @return �ɹ�����XL_TRUE,���򷵻�XL_FALSE
 */
xl_bool xlite_E_graphics_init(xlite_graphics* g,xlite_directscreen* ds);


/*!
 * @brief ɾ��Graphics
 * @param g: ��Ҫɾ����Graphics�ṹָ��
 */
xl_void xlite_E_graphics_delete(xlite_graphics* g);


/*!
 * @brief ʹ��ָ������ɫ���Graphics���Ƶ�Image
 * @param g: Graphics�Ľṹָ��
 * @param color: ָ������ɫ
 */
xl_void xlite_E_graphics_clear(xlite_graphics* g,xl_color color);


/*!
 * @brief ��ͼ����Դ��Ϊ���Ƶ�Ŀ��ͼ��
 * @param g Graphics�Ľṹָ��
 * @param new_image Ҫ��Ϊ����Ŀ���ͼ��
 * @return Graphics���Ѿ����ڵ�ͼ��
 * @note ֻ��xlite_pf_rgb_565��ʽ��ͼ�βſ��Ա���Ϊ����Ŀ��ͼ��
 */
xlite_himage xlite_E_graphics_set_render_buffer(xlite_graphics* g,xlite_himage new_image);


/*
 * @brief ����Graphics�Ļ������Ѵ��ڵ��Զ���ü�����
 * @param sa xlite_E_raster_reset_user_flip
 * @return TRUE if graphics has a clip rectangle,otherwise none 
 */
xl_bool xlite_E_graphics_get_user_clip(xlite_graphics* g,xlite_rect* user_clip);


/*
 * @brief ����������ɫ
 * @param text_clr ���õ�������ɫ
 * @return
 */
xl_void xlite_E_graphics_set_text_color(xlite_graphics* g,xl_uint16 text_clr);

/*
 * @brief ���������Ƿ��б߿�(Removed)
 * @param has_border �Ƿ��б߿�
 * @param border_clr ������Ʊ߿�,�����ñ߿�ɫ
 * @return
 */
// Removed by Ken
// xl_void xlite_E_graphics_set_text_border(xlite_graphics* g,xl_bool has_border,xl_uint16 border_clr);



/*
 * @brief �������ִ�С,����ĳЩƽ̨�޷�֧��
 * @param text_size ���ִ�С
 * @return
 */
xl_void xlite_E_graphics_set_text_size(xlite_graphics* g,xl_uint8 text_size);


/*
 * @brief �������ֵ���Ļ
 * @param x ���ֵ�X����
 * @param y ���ֵ�Y����
 * @param text ���Ƶ����ֵ�ָ��
 * @param length ���Ƶ�����
 * @return
 */
xl_void xlite_E_graphics_draw_string(xlite_graphics* g,xl_int32 x,xl_int32 y,const xl_wchar* text,xl_uint32 length);

/*
 * @brief �����ַ�����Ļ
 * @param x ���ֵ�X����
 * @param y ���ֵ�Y����
 * @param ch ���Ƶ����ֵ�ָ��
 * @return
 */
xl_void xlite_E_graphics_draw_character(xlite_graphics* g,xl_int32 x,xl_int32 y,xl_wchar ch);

/*
 * @brief �����ַ����Ŀ��
 * @param text �ַ���ָ��
 * @param length �ַ���������
 * @return ������Ҫ�ĳ���
 */
xl_uint32 xlite_E_graphics_get_string_width(xlite_graphics* g,const xl_wchar* text,xl_uint32 length);

/*
 * @brief �����ַ����ĸ߶�
 * @param text �ַ���ָ��
 * @param length �ַ���������
 * @return ������Ҫ�ĳ���
 */
xl_uint32 xlite_E_graphics_get_string_height(xlite_graphics* g,const xl_wchar* text,xl_uint32 length);


/*
 * @brief �����ַ��Ŀ��
 * @param ch �ַ�
 * @return ������Ҫ�Ŀ��
 */
xl_uint32 xlite_E_graphics_get_character_width(xlite_graphics* g,xl_wchar ch);


/*
 * @brief �����ַ��ĸ߶�
 * @param ch �ַ�
 * @return ������Ҫ�ĸ߶�
 */
xl_uint32 xlite_E_graphics_get_character_height(xlite_graphics* g,xl_wchar ch);

/*!
 * @brief ����Graphics�Ļ��������û��Զ���ļ��þ���
 * @sa xlite_E_raster_set_user_clip
 */
xl_void xlite_E_graphics_set_user_clip(xlite_graphics* g,const xlite_rect* clip_rect);

/*!
 * @brief ����Graphics�Ļ������е��Զ�����þ���
 * @sa xlite_E_raster_reset_user_clip
 */
xl_void xlite_E_graphics_reset_user_clip(xlite_graphics* g);


/*
 * @brief ���浱ǰRaster��״̬
 * @param g xlite_graphics��ָ��
 */
xl_void xlite_E_graphics_backup_raster_state(xlite_graphics* g);


/*
 * @brief Ӧ�ñ������Raster state��Raster
 * @param g xlite_graphics��ָ��
 */
xl_void xlite_E_graphics_restore_raster_state(xlite_graphics* g);

/*!
 * @brief ����Graphics�пɻ��ƵĿ��
 * @param g Graphics�Ľṹָ��
 * @return ���
 */
#define xlite_E_graphics_get_width(g)					(xlite_E_image_get_width((g)->surface))

/*!
 * @brief ����Graphics�пɻ��Ƶĸ߶�
 * @param g Graphics�Ļ���ָ��
 * @return �߶�
 */
#define xlite_E_graphics_get_height(g)					(xlite_E_image_get_height((g)->surface))

/*!
 * @brief ����Graphics�Ļ������ķ�תģʽ
 * @sa xlite_E_raster_set_flip_mode
 */
#define xlite_E_graphics_set_flip_mode(g,f)				(xlite_E_raster_set_flip_mode(&(g)->raster,(f)))


/*!
 * @brief ��ȡGraphics�ķ�תģʽ
 * @sa xlite_E_raster_get_flip_mode
 */
#define xlite_E_graphics_get_flip_mode(g)				(xlite_E_raster_get_flip_mode(&(g)->raster) )


/*!
 * @brief ����Graphics�Ļ������Ƿ����͸��ɫ
 * @sa xlite_E_raster_set_filte_key_color
 */
#define xlite_E_graphics_set_filte_key_color(g,k)		(xlite_E_raster_set_filte_key_color(&(g)->raster,(k)))


/*!
 * @brief �Ƿ���˹ؼ�ɫ
 * @sa xlite_E_raster_is_filte_key_color
 */
#define xlite_E_graphics_is_filte_key_color(g)			(xlite_E_raster_is_filte_key_color(&(g)->raster) )

/*!
 * @brief ����ͼ��
 * @sa xlite_E_raster_draw_image
 */
#define xlite_E_graphics_draw_image(g,tr,s,sx,sy)		(xlite_E_raster_draw_image(&(g)->raster,(g)->surface,(tr),(s),(sx),(sy)))


/*!
 * @brief ����ͼ��
 * @sa xlite_E_raster_stretch_image
 */
#define xlite_E_graphics_stretch_image(g,tr,s,sr)		(xlite_E_raster_stretch_image(&(g)->raster,(g)->surface,(tr),(s),(sr) ))

/*!
 * @brief ����ˮƽ�߶�
 * @sa xlite_E_raster_draw_horz_line
 */
#define xlite_E_graphics_draw_horz_line(g,x,y,l,c)		(xlite_E_raster_draw_horz_line(&(g)->raster,(g)->surface,(x),(y),(l),(c)))

/*!
 * @brief ���ƴ�ֱ�߶�
 * @sa xlite_E_raster_draw_vert_line
 */
#define xlite_E_graphics_draw_vert_line(g,x,y,l,c)		(xlite_E_raster_draw_vert_line(&(g)->raster,(g)->surface,(x),(y),(l),(c)))

/*!
 * @brief �����߶�
 * @sa xlite_E_raster_draw_line
 */
#define xlite_E_graphics_draw_line(g,x1,y1,x2,y2,c)		(xlite_E_raster_draw_line(&(g)->raster,(g)->surface,(x1),(y1),(x2),(y2),(c)))

/*!
 * @brief ���ƾ���
 * @sa xlite_E_raster_draw_rectangle
 */
#define xlite_E_graphics_draw_rectangle(g,rt,c)			(xlite_E_raster_draw_rectangle(&(g)->raster,(g)->surface,(rt),(c)))

/*!
 * @brief ������
 * @sa xlite_E_raster_fill_rectangle
 */
#define xlite_E_graphics_fill_rectangle(g,rt,c)			(xlite_E_raster_fill_rectangle(&(g)->raster,(g)->surface,(rt),(c)))

/*!
 * @brief �������ػ��ģʽ
 * @sa xlite_E_raster_set_blend_color_func
 */
#define xlite_E_graphics_set_blend_mode(g,bm,bf,ubf)	(xlite_E_raster_set_blend_mode(&(g)->raster,(bm),(bf),(ubf)))

/*!
 * @brief ����alphaֵ
 * @sa xlite_E_raster_set_alpha_value
 */
#define xlite_E_graphics_set_alpha_value(g,a)			(xlite_E_raster_set_alpha_value(&(g)->raster,(a)))

/*!
 * @brief ��ȡalphaֵ
 * @sa xlite_E_raster_get_alpha_value
 */
#define xlite_E_graphics_get_alpha_value(g)				(xlite_E_raster_get_alpha_value(&(g)->raster) )

/*!
 * @breif ���õ�ɫ��ƫ��
 * @sa xlite_E_raster_set_palette_offset
 */
#define xlite_E_graphics_set_palette_offset(g,p)		(xlite_E_raster_set_palette_offset(&(g)->raster,(p)) )

/*!
 * @brief ��ȡ��ɫ��ƫ��
 * @sa xlite_E_raster_get_palette_offset
 */
#define xlite_E_graphics_get_palette_offset(g)			(xlite_E_raster_get_palette_offset(&(g)->raster) )

/*
 * @brief ���ùؼ�ɫ����
 * @sa xlite_E_raster_set_key_color
 */
#define xlite_E_graphics_set_key_color(g,k)				(xlite_E_raster_set_key_color(&(g)->raster,(k)) )

/*
 * @brief ��ȡ�ؼ�ɫ����
 * @sa xlite_E_raster_get_key_color
 */
#define xlite_E_graphics_get_key_color(g)				(xlite_E_raster_get_key_color(&(g)->raster))

/*!
 * @brief ����Render buffer
 * @param xlite_graphicsָ��
 * @param ��ǰʹ�õ�Render buffer
 */
#define xlite_E_graphics_get_render_buffer(g)			((g)->surface)


/*!
 * @brief Ϊָ��������������ɫ
 * @param 
 * @return
 */
#define xlite_E_graphics_set_pixtel(g,x,y,c)			(xlite_E_raster_set_pixel(&(g)->raster,(g)->surface,(x),(y),(c)))


/*!
 * @brief ���ص�ǰ��������ɫ
 * @param
 * @return
 */
#define xlite_E_graphics_get_text_color(g)				((g)->text_color)

/*!
 * @brief ���ص�ǰ�����ִ�С
 * @param
 * @return
 */
#define xlite_E_graphics_get_text_size(g)				((g)->text_size)



#endif