// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_rect.h 66 2008-06-26 12:27:52Z greatelsoft\nazy $
#ifndef __XLITE_E_RECT_H__
#define __XLITE_E_RECT_H__

#include "xLite_E_internal.h"


/*!
 * @file xLite_E_rect.h
 * @brief ���μ���
 */



/*!
 * @brief ���þ��ε�ֵ
 * @param rect Ŀ����εĽṹָ��
 * @param l ���ε���߽�����
 * @param t ���εĶ�������
 * @param r ���ε��ұ߽�����
 * @param b ���εĵײ�����
 */
xl_void xlite_E_rect_set(xlite_rect* rect,xl_int32 l,xl_int32 t,xl_int32 r,xl_int32 b);



/*!
 * @brief ����һ�����ε�ֵ������һ������
 * @param d_rect Ŀ�����
 * @param s_rect Դ����
 */
xl_void xlite_E_rect_copy(xlite_rect* d_rect,const xlite_rect* s_rect);


/*!
 * @brief �����������εĽ���
 * @param result ���νṹָ��,����󽫽�������ڸþ�����
 * @param r1 ���νṹָ��
 * @param r2 ���νṹָ��
 * @note resule��(r1/r2)������һ�����νṹ��ָ��,�������µĵ��úϷ� \n
 * xlite_E_rect_get_interset(&my_rect1,&my_rect1,&my_rect2)
 */
xl_void xlite_E_rect_get_intersect(xlite_rect* result,const xlite_rect* r1,const xlite_rect* r2);


/*!
 * @brief �ƶ�����
 * @param r ��Ҫ�ƶ��ľ���
 * @param v ��ֱ�ƶ��ľ���
 * @param h ˮƽ�ƶ��ľ���
 */
xl_void xlite_E_rect_translate(xlite_rect* r,xl_int32 horz,xl_int32 vert);




/*
 * @brief �Ŵ����
 * @param r ���ε�ָ��
 * @param h ˮƽ�Ŵ�ĳ���
 * @param v ��ֱ�Ŵ�ĳ���
 * @return
 */
xl_void xlite_E_rect_inflate(xlite_rect* r,xl_int32 h,xl_int32 v);


/*
 * @brief ��С����
 * @param r ���ε�ָ��
 * @param h ˮƽ��С�ĳ���
 * @param v ��ֱ��С�ĳ���
 * @return
 */
xl_void xlite_E_rect_deflate(xlite_rect* r,xl_int32 h,xl_int32 v);



/*!
 * @brief ��ȡ���εĿ��
 * @param r ���εĽṹָ��
 * @return ���ؾ��εĿ��
 */
#define xlite_E_rect_get_width(r)			( (r)->right - (r)->left )

/*!
 * @brief ��ȡ���εĸ߶�
 * @param r ���εĽṹָ��
 * @return ���ؾ��εĸ߶�
 */
#define xlite_E_rect_get_height(r)			((r)->bottom - (r)->top)


/*!
 * @brief ����һ�������Ƿ����ھ�����
 * @param r ���εĽṹָ��
 * @param x ���Ե�����
 * @param y ���Ե�����
 * @return �������λ�ھ�����,�򷵻�XL_TRUE,���򷵻�XL_FALSE
 * @note �����㷨Ϊ \n
 * ��� x >= xlite_rect.left \n
 * ���� x < xlite_rect.right \n
 * ���� y >= xlite_rect.top  \n
 * ���� y < xlite_rect.bottom \n
 * ����Ϊ������λ�ھ�����
 */
#define xlite_E_rect_is_point_inside(r,x,y)		( ((x) >= (r)->left) && ((x) < ((r)->right) && ((y) >= (r)->top) && ((y) < (r)->bottom)) )


/*!
 * @brief ����һ�������Ƿ��ھ����ڲ�
 * @param r1 ���Ծ��εĽṹָ��
 * @param r2 ���Ծ��εĽṹָ��
 * @return ���r1λ��r2�ڲ�,�򷵻�XL_TRUE,���򷵻�XL_FALSE
 */
#define xlite_E_rect_is_rect_inside(r1,r2)	(!( ((r1)->left < (r2)->left ) || ((r1)->top < (r2)->top) || ((r1)->left >= (r2)->right) || ((r1)->top >= (r2)->bottom) || ((r1)->right > (r2)->right) || ((r1)->bottom > (r2)->bottom) ))

/*!
* @brief �������������Ƿ��н���
 * @param r1 ���Ծ��εĽṹָ��
 * @param r2 ���Ծ��εĽṹָ��
* @return ������Ե��������δ��ڽ���,�򷵻�XL_TRUE,���򷵻�XL_FALSE
*/
#define xlite_E_rect_is_intersect(r1,r2)	(! (( (r1)->left >= (r2)->right) || ( (r1)->right <= (r2)->left) || ( (r1)->top >= (r2)->bottom) || ( (r1)->bottom <= (r2)->top)) )

		



#endif