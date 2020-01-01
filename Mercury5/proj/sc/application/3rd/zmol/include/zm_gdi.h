#ifndef _ZHANGM_STOCK_GDI_H_
#define _ZHANGM_STOCK_GDI_H_

#include "zm_typedef.h"
/*
 *  Function:		zm_get_screen_width
 *  Description:	Get the screen width
 */
zm_extern zm_uint16 zm_get_screen_width(zm_void);

/*
 *  Function:		zm_get_screen_width
 *  Description:	Get the screen width
 */
zm_extern zm_uint16 zm_get_screen_height(zm_void);

/*
 *	get window width
 */
zm_extern zm_uint16 zm_get_wnd_width(zm_void);

/*
 *	get window height
 */
zm_extern zm_uint16 zm_get_wnd_height(zm_void);

/*
 *	��֮ǰ����
 */
zm_extern zm_void zm_begin_paint(zm_void);
/*
 *	����������
 */
zm_extern zm_void zm_end_paint(zm_rect* pValidRect);
/*
 *	��ȡ��ϵͳ֧�ֵ�ͼƬ��ʽ zm_img_bmp , zm_img_png , zm_img_jpg
 */
zm_extern zm_img_format zm_get_img_format(zm_void);
/*
 * ��ȡͼ��ߴ�
 */
zm_extern zm_void zm_get_img_size(zm_img_format format,zm_int8* pBuf,zm_int bufLen, zm_size* p_size);
/*
 * ��ͼƬ
 */
zm_extern zm_void zm_bitblt(zm_img_format format,zm_rect* pRect,zm_int8* pBuf,zm_int bufLen,zm_bitblt_rop rop,zm_color backColor,zm_color foreColor,zm_bool bTransColor);
/*
 * GIFָ���ڼ�֡
 */
zm_extern zm_void zm_bitblt_frame(zm_img_format format,zm_rect* pRect,zm_int8* pBuf,zm_int bufLen,zm_int frame, zm_bitblt_rop rop, zm_color backColor,zm_color foreColor,zm_bool bTransColor);

/**
 * ͼƬ��ѹ
 */
zm_extern zm_int zm_decode_image( zm_img_format format, const zm_uint8* p_src, zm_int src_len, 
								  zm_uint8* p_dst, zm_int dst_len, zm_int32 *width, zm_int32* height);

/*
 *	�����ο�
 */
zm_extern zm_void zm_draw_rect(zm_rect* rect, zm_color nColor);
/*
 * ��roundrect
 */
zm_extern zm_void zm_draw_round_rect(zm_rect* rect, zm_color nColor);
/*
 * ������frame
 */
zm_extern zm_void zm_draw_dialog_frame(zm_rect* rect);
/*
 *	�����ο�
 */
zm_extern zm_void zm_fill_rect(zm_rect* rect, zm_color nColor);
/*
 * �ñ������
 */
zm_extern zm_void zm_greyscale_rect(zm_rect* rect);
/*
 *	ָ�������ı�,�����뷽ʽ
 */
zm_extern zm_void zm_draw_text(zm_rect* rect,const zm_int8* pszText,zm_int16 nTextLen,zm_text_align align,zm_font_type nFont,zm_color clrBg,zm_color clrFg);
/*
 * �������ı�
 */
zm_extern zm_void zm_draw_light_text(zm_rect* rect,const zm_int8* pszText,zm_int16 nTextLen,zm_text_align align,zm_font_type nFont,zm_color clrLght,zm_color clrFg);
/*
 * ��������
 */
zm_extern zm_void zm_set_pixel(zm_uint16 x, zm_uint16 y,  zm_color clr);
/*
 *	����
 */
zm_extern zm_void zm_draw_line(zm_point* pt1, zm_point* pt2, zm_color clr);
/*
 *	���� r, g, b ��ȡ��ɫ
 */
zm_extern zm_color zm_get_rgb_color(zm_uint8 r, zm_uint8 g, zm_uint8 b);
/*
 *	��ȡ����߶�
 */
zm_extern zm_uint16 zm_get_font_height(zm_font_type nType);
/*
 *	��ȡ������
 */
zm_extern zm_uint16 zm_get_font_width(zm_font_type nType);
/*
 *	�����ߴ�
 */
zm_extern zm_void zm_measure_string(zm_int8* pszText, zm_font_type nFont, zm_int* pnWidth, zm_int* pnHeight);
/*
 * ֱ�ӻ����ķ�ʽ������͸��ͼƬ
 */
zm_extern zm_void zm_dd_maskblt(zm_uint8* dev_bmp_src, zm_int x, zm_int y, zm_uint16 trans_clr);
/*
 * ��ȡֱ�ӻ���buffer
 */
zm_extern zm_uint8* zm_dd_get_frame_buf(zm_void);
/*
 * ��ȡ����ɨ��,��Ӧ��bitλ=1�� δ����=0 
 */
zm_extern zm_uint32 zm_get_async_key_state(zm_void);

#endif/*_ZHANGM_STOCK_GDI_H_*/	
