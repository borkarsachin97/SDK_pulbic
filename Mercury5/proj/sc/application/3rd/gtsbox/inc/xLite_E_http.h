// 
// 
// Copyright (c) 2007 Greatelsoft Co.,Ltd. All rights reserved.
// Author: Ken Zhang
//
// $Id: xLite_E_http.h 209 2009-07-21 02:24:47Z nazy $
#ifndef __XLITE_E_HTTP_H__
#define __XLITE_E_HTTP_H__

#include "xLite_E_internal.h"
#ifndef XLITE_NO_NETWORK

/*!
 * @file xLite_E_http.h
 * @brief HTTPЭ���װ
 */

/*
 * @brief ��ʼ��һ��Requestͷ
 * @param
 * @return
 */
xl_int32 xlite_E_http_request_init(xlite_http_request* request,
								   const xl_char* url,
								   xl_uint8 method,
								   xl_uint8 conn,
								   xl_uint8 use_proxy,
								   xlite_socket_sockaddr_struct* proxy_svr,
								   xl_uint32 body_len
								   );
/*
 * @brief ��Request��http����
 * @param 
 * @return
 */
xl_int32 xlite_E_http_open(xlite_http_session* session, xlite_http_request* request, xlite_E_http_event_handler handler);

/*
 * @brief �ر�Http Session,���һ��ͷ�sessionռ�õ��ڴ�
 * @param
 * @return
 */
xl_void xlite_E_http_close(xlite_http_session* session);

/*
 * @brief ��HTTPͷд��buffer��
 * @param
 * @return
 */
xl_int32 xlite_E_http_output_header(xlite_http_request* request,const xl_char* head,const xl_char* value);

/*
 * @brief ��HTTPͷд��buffer
 * @param
 * @return
 */
xl_int32 xlite_E_http_output_header_i(xlite_http_request* request,const xl_char* head,xl_int32 value);

/*
 * @brief ��session�ж�ȡ�����е����ݵ�����
 * @param
 * @return ʵ�ʶ�ȡ����
 */
xl_int32 xlite_E_http_session_buffer_read(xlite_http_session* session, xl_uint8* buffer,xl_uint32 length);

/*
 * @brief д�뱾�����ݵ�session������
 * @param
 * @return ʵ��д�볤��
 */
 xl_int32 xlite_E_http_session_buffer_write(xlite_http_session* session, xl_uint8* buffer,xl_uint32 length);


/*
 * @brief ��ȡ����Ļ���
 */
#define XLITE_E_HTTP_GET_OUT_BUFFER(s)			( (s)->buffer + (s)->buf_length )

/*
 * @brief ��ȡ����ɹ�д����ֽ���
 */
#define XLITE_E_HTTP_GET_OUT_BUFFER_LENGTH(s)	( XLITE_E_HTTP_BUFFER_LENGTH - (s)->buf_length )


xl_void xlite_E_http_release_host_list(xl_void);

#endif

#endif
