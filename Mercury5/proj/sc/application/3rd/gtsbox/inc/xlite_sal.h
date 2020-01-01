#ifndef __XLITE_SAL_H__
#define __XLITE_SAL_H__

/*!
 * @file xLite_sal.h
 * @brief xstrike lite sal��ӿ�
 */

//////////////////////////////////////////////////////////////////////////
// VERSION

/*!
 * @brief xstrikelite���汾��
 */
#define XLITE_VER_MAJOR					1

/*!
 * @brief xstrikelite���汾��
 */
#define XLITE_VER_MINOR					0

//////////////////////////////////////////////////////////////////////////
// Configure

/*!
 * @brief ����ʹ��static/global��,����ߴ�����,�������ڴ��������
 */
#define xlite_use_static				0

/*!
 * @brief �Ƿ���debug�ĺ����ӿ�
 */
//#if defined(XLITE_DEBUG)
#define xlite_use_debug					1
//#else
//#define xlite_use_debug					0
//#endif

#if   xlite_mstar_flash_version == NAND_FLASH
	#define MSTAR_FLASH   L"/NAND"
#endif 	
#if   xlite_mstar_flash_version == NOR_FLASH
	#define MSTAR_FLASH    L"/NOR_FLASH_0"
#endif

#define MSTAR_CARD      L"/CARD"


/*!
 * @brief ����ʱ��ʹ��static�����ͱ���
 */
#if defined(XLITE_TEST)
	#define XL_STATIC 
#else
	#define XL_STATIC static
#endif


#define xlite_sal_version			1
#define xlite_sal_directscreen		1
#define xlite_sal_file				1
#define xlite_sal_sys				1
#define xlite_sal_socket			1
#define xlite_sal_string			1
#define xlite_sal_drawtext			1
#define xlite_sal_audio				1
#define xlite_sal_memory			1
#define xlite_sal_input_screen		1
#define xlite_sal_log				1
#define xlite_sal_assert				1
#define xlite_sal_sensor			1


typedef xl_void (* record_fun)(xl_int32);

#if xlite_sal_version == 1
/////////////////////////////////////////////////////////////////////////////////
// xLite_version.h

/*!
 * @brief ��ȡ��ǰ��xstrike lite����汾
 * @param ver xlite_version�ṹָ��
 * @note �ú���������汾���봫�����xlite_version�Ľṹָ��
 */
xl_void xlite_version_get(xlite_version* ver);

/*!
 * @brief ��ȡ��ǰ���ֻ�����ʱ��
 */
xl_char* xlite_compile_time_get(xl_void);

#endif

#if xlite_sal_directscreen == 1
/////////////////////////////////////////////////////////////////////////////////
// xLite_directscreen.h
// brief DirectScreen Access controller
//

/*!
 * @brief ��DirectScreen��д�����
 * @param ds DirectScreen�Ľṹָ��
 * @param flag ����,��������0
 * @return �ɹ�����XL_TRUE, ���򷵻�XL_FALSE
 */
xl_bool xlite_directscreen_open(xlite_directscreen* ds,xl_uint8 flag);

/*!
 * @brief �رմ򿪵�DirectScreen��д�����
 * @param ds DirectScreen�Ľṹָ��
 */
xl_void xlite_directscreen_delete(xlite_directscreen* ds);

/*!
 * @brief ����DirectScreen����Ļ
 * @param ds DirectScreen�ṹָ��
 */
xl_void xlite_directscreen_update(xlite_directscreen* ds);

/*!
 * @brief ������Ļд�����
 * @param ds DirectScreen�ṹָ��
 */
xl_void xlite_directscreen_suspend(xlite_directscreen* ds);

/*!
 * @brief �ָ������д�����
 * @param ds DirectScreen�ṹָ��
 * @note ������xlite_directscreen_suspend���ʹ��
 */
xl_void xlite_directscreen_resume(xlite_directscreen* ds);

/*!
 * @brief ��ѯ��Ļ�Ŀ��
 * @param ds DirectScreen�ṹָ��
 * @return ��Ļ�Ŀ��,��ͬ�� xlite_directscreen.screen_width
 */
#define xlite_directscreen_get_width(ds)					((xl_uint32)(ds)->screen_width)

/*!
 * @brief ��ѯ��Ļ�ĸ߶�
 * @param ds DirectScreen�ṹָ��
 * @return ��Ļ�ĸ߶�,��ͬ�� xlite_directscreen.screen_height
 */
#define xlite_directscreen_get_height(ds)					((xl_uint32)(ds)->screen_height)

#endif

#if xlite_sal_file == 1
/////////////////////////////////////////////////////////////////////////////////
// xLite_file.h
// �ļ�IO�ӿ�
//

/*!
 * @breif ��һ���ļ�
 * @param filename �ļ�������·������Ҫ����xl_wchar�����ַ���  
 * @param mode �򿪷�ʽ
 * @return �ļ������Ϊ0���ʧ��
 */
xlite_file_handle xlite_file_open(const xl_wchar* filename,xl_uint32 mode);

/*!
 * @brief close file handle
 * @param file_handle: �ļ����
 */
xl_void xlite_file_close(xlite_file_handle file_handle);


/*! 
 * @brief ���ļ�
 * @param fh �ļ����
 * @param buffer ���ݴ���λ��
 * @param length Ҫ��ȡ�����ݳ��ȣ����ֽ�Ϊ��λ
 * @param length_read ʵ�ʶ�ȡ����
 * @return ���ڵ���0Ϊʵ�ʶ�ȡ���ȣ�С��0Ϊ�������
 */
xl_int32 xlite_file_read(xlite_file_handle fh,xl_void* buffer,xl_uint32 buffer_length,xl_uint32* length_read);


/*!
 * @brief д�ļ�
 * @param fh �ļ����
 * @param buffer ���ݴ���λ��
 * @param length Ҫд������ݳ��ȣ����ֽ�Ϊ��λ
 * @param length_read ʵ��д�볤��
 * @return ���ڵ���0Ϊʵ��д�볤�ȣ�С��0Ϊ�������
 */
xl_int32 xlite_file_write(xlite_file_handle fh,xl_void* buffer,xl_uint32 buffer_length,xl_uint32* length_written);


/*!
 * @brief �ļ�������
 * @param fh �ļ����
 * @param offset �������ʼ���ƫ��.
 * @param origin ��ʼ��.
 * @return �ɹ�����0�����򷵻ش������.
 */
xl_int32 xlite_file_seek(xlite_file_handle fh,xl_int32 offset,xl_int32 origin);


/*!
 * @brief ��ȡ�ļ���С
 * @param fh �ļ����
 * @param file_size �ļ���С
 * @return �ɹ�����0�����򷵻ش������
 */
xl_int32 xlite_file_get_size(xlite_file_handle fh,xl_uint32* file_size);

/*!
* @brief ��ȡ�ļ��ڲ���ǰλ��
* @param fh �ļ����
* @return �ɹ����ص�ǰλ�ã�С��0Ϊ�������
*/
xl_int32 xlite_file_get_position(xlite_file_handle fh);


/*!
 * @brief ���������ļ��̷�
 * @param type ����������
 * @param serial ����
 * @return �������̷�
 * @note ��ȡϵͳ���̷�: xlite_file_get_driver(xlite_driver_system,1) \n
 * ��ȡ��ͨ���̷�: xlite_file_get_driver(xlite_driver_normal,1)
 */
xl_char* xlite_file_get_driver(xlite_driver_type type,xl_int32 serial);

/*!
 * @brief ɾ���ļ�
 * @param file_name �ļ���
 * @return �ɹ�����0,���򷵻�С��0�Ĵ������
 */
xl_int32 xlite_file_delete(const xl_wchar* file_name);

/*!
 * @brief ����Ŀ¼
 * @param dir_name Ŀ¼��
 * @return �ɹ�����0,���򷵻�С��0�Ĵ������
 */
xl_int32 xlite_file_create_dir(const xl_wchar* dir_name);


/*!
 * @brief ɾ��Ŀ¼
 * @param dir_name Ŀ¼��
 * @return �ɹ�����0,���򷵻�С��0�Ĵ������
 * @note �ú����޷�ɾ���ǿ�Ŀ¼,��Ŀ¼��
 */
xl_int32 xlite_file_remove_dir(const xl_wchar* dir_name);

/*!
 * @brief �������ļ���
 * @param file_name ��Ҫ���������ļ���
 * @param new_file_name �µ��ļ���
 * @return �ɹ�����0,���򷵻�С��0�Ĵ������
 */
xl_int32 xlite_file_rename(const xl_wchar* file_name,const xl_wchar* new_file_name);


/*!
 * @brief ����Ŀ¼�ߴ�
 * @param path_name Ŀ¼��
 * @return �ɹ�����Ŀ¼���ֽ���,���󷵻�С��0�Ĵ������
 */
xl_int32 xlite_file_get_folder_size(const xl_wchar* path_name);


/*!
 * @brief �����ļ�
 * @param pattern ������ƥ���ַ��� (Eg: *.mp3)
 * @param callback ����������ø�callback
 * @return ʧ�ܷ���С��0�Ĵ������,���򷵻ش��ڻ��ߵ���0����ֵ
 * @note ʹ�÷���\n
 * xl_bool app_on_file_found(const xlite_file_find_info* find_info)\n
 * {\n
 *		// Do something\n
 *		return XL_TRUE;	//�������XL_FASE���ж�����\n
 * }\n
 * \n
 * // In Function\n
 * xl_int32 ret = xlite_file_find(L"D:\\*.*",app_on_file_found);\n
 */
xl_int32 xlite_file_find(const xl_wchar* pattern,xlite_file_find_callback callback);


/*!
 * @brief ��ѯ�ļ�����Ŀ¼�Ƿ����
 * @param path �ļ�������Ŀ¼��
 * @return �����ѯ���ļ�����Ŀ¼����,����XL_TRUE,���򷵻�XL_FALSE
 */
xl_bool xlite_file_is_path_exist(const xl_wchar* path);

/*!
 * @brief �ѻ����е����ݱ��浽�ļ�
 * @param fh file handle
 * @return �ɹ�����0
 */
xl_int32 xlite_file_commit(xlite_file_handle file_handle);

/*!
 * @brief ���ʣ��Ĵ�������
 * @param drive_name ��������(���Դ�·��)
 * @return �ɹ�����ʣ����ֽ���
 */
xl_int32 xlite_file_get_free_size(xl_wchar* drive_name);

/*!
 * @brief ��ȡ�ļ�����Ϣ
 * @return �ɹ�����0
 */
xl_int32 xlite_file_get_info(xlite_file_handle file_handle, xlite_file_info* info);

#endif


#if xlite_sal_sys == 1
/////////////////////////////////////////////////////////////////////////////////
// xLite_sys.h
//  ϵͳ����
//

/*!
 * @brief Ϊ˫��˫�����ͣ�ѡ��һ�����õ�ͨ��
 * @return �ɹ�����XL_TRUE�����򷵻�XL_FALSE
 */
xl_bool xlite_sys_auto_select_sim_card(xl_void);

/*!
 * @brief ���ö�ʱ��
 * @param interval ����ʱ��
 * @param timer_func �ص�����
 */
xl_void xlite_sys_start_timer(xl_int32 interval,xlite_timer_func func);


/*!
 * @brief ȡ��һ����ʱ��
 * @param func ���ö�ʱ������Ļص�����
*/
xl_void xlite_sys_cancel_timer(xlite_timer_func func);


/*!
 * @brief ������GUITimer
 * @param
 * @return
 */
xl_void xlite_sys_start_kernel_timer(xl_int32 interval,xlite_timer_func func);

/*!
 * @brief �رշ�GUI Timer
 * @param
 * @return
 */
xl_void xlite_sys_stop_kernel_timer(xl_void);

/*!
 * @brief Kernel timer�Ƿ��Ѿ�����
 * @param
 * @return
 */
xl_int32 xlite_sys_is_kernel_timer_exist(xl_void);

/*!
 * @brief ����ϵͳ������ʱ��
 * @return ϵͳ������ʱ�䣬��λΪ����
 */
xl_uint32 xlite_sys_get_tick(xl_void);


/*!
 * @brief ���ص�ǰ������ʱ��
 * @param date_time ���ڵ�����ָ��
 */
xl_void xlite_sys_get_date_time(xlite_date_time* date_time);


/*!
 * @brief ��ȡ��ǰ�ķ����ṩ��
 * @return �����ṩ��
 */
xlite_operator xlite_sys_get_operator(xl_void);

/*!
 * @brief ����Ƿ���sim��
 * @return XL_TRUE ��
 */
xl_bool xlite_sys_is_sim_valid(xl_void);

/*
 * @brief ��ʼ�����������
 * @param seed xl_uint32��������
 * @return
 */
xl_void xlite_sys_srand(xl_uint32 seed);

/*!
 * @brief ��ȡ�����
 * @return �����
 */
xl_int32 xlite_sys_rand(xl_void);

/*!
 * @brief ���Ͷ���Ϣ
 * @param phone_number �ֻ�����
 * @param sms_content ��������
 */
xl_int32 xlite_sys_send_sms(const xl_char* phone_number,const xl_char* sms_content);

/*!
 * @brief ѡ������
 */
xl_void xlite_sys_set_master_sim_card(xl_void);

/*!
 * @brief ѡ�񸱿�
 */
xl_void xlite_sys_set_slave_sim_card(xl_void);


/*!
 * @brief ��ȡ��ǰ����sim��
 * @return ����sim�������
 */
xl_uint8 xlite_sys_get_valid_sim_card(xl_void);

//��ȡ4λ����
xl_char* xlite_sys_get_area_code(xl_void);
//��ȡimsi����
xl_char* xlite_sys_get_imsi(xl_void);
//��ȡimeii����
xl_char* xlite_sys_get_imei(xl_void);

#endif

#if xlite_sal_socket == 1
/////////////////////////////////////////////////////////////////////////////////
//  xLite_socket.h
//  socket operation
//

/*!
 * @brief ����socket
 * @param domain socket domain\n
 * only support xlite_socket_pf_inet
 * @param type type of socket\n
 * support xlite_socket_stream and xlite_socket_dgram
 * @param protocol protocols\n
 * support xlite_socket_tcp and xlite_socket_udp
 * @param mod_id mod id on MTK platform,fill zero if on other platform
 * @param account network account id on MTK platform,fill zero if on other platform
 * @return return a negative integer if failed, else return the socket handle
 */
xlite_socket xlite_socket_create(xlite_socket_domain domain,xlite_socket_type type, xlite_socket_protocol protocol, xlite_socket_event_handler handler,xl_void* handler_param);
/*!
 * @brief close socket
 * @param sock socket id
 * @return zero if successed.
 */
xl_int32 xlite_socket_close(xlite_socket sock);


/*!
 * @brief bind to address
 * @param sock socket id
 * @param addr xlite_socket_sockaddr_struect pointer
 * @return return zero if successfully
 */
xl_int32 xlite_socket_bind(xlite_socket sock,xlite_socket_sockaddr_struct* addr);


/*!
 * @brief make a socket to server socket to wait a incoming connection
 * @param sock socket id
 * @param backlog maximum of client connections
 * @return return zero if successfully
 */
xl_int32 xlite_socket_listen(xlite_socket sock,xl_int32 backlog);


/*!
 * @brief accept a incoming connection
 * @param sock socket id
 * @param addr socket address of incoming connection
 * @return return negative if failed, otherwise return socket id of new connection
 */
xlite_socket xlite_socket_accept(xlite_socket sock,xlite_socket_sockaddr_struct* addr);

/*!
 * @brief connect to server
 * @param sock socket id
 * @param addr target server address
 * @return return zero if successfully
 */
xl_int32 xlite_socket_connect(xlite_socket sock,xlite_socket_sockaddr_struct* addr);


/*!
 * @brief shutdown a connection
 * @param sock socket id
 * @param how Flag that describes what types of operation will no longer be allowed.
 * @return return zero if successfully
 */
xl_int32 xlite_socket_shutdown(xlite_socket sock,xlite_socket_shutdown_flag how);

/*!
 * @brief send data to a specified address
 * @param sock socket id
 * @param buffer data buffer pointer to be send
 * @param length length of buffer
 * @param flag send flag
 * @param toaddr target address
 * @return return negative if failed,otherwise return number of bytes of sent
 */
xl_int32 xlite_socket_sendto(xlite_socket sock,xl_uint8* buffer,xl_uint32 length,xl_uint8 flag,xlite_socket_sockaddr_struct* toaddr);


/*! 
 * @brief send data to a pre-connected server
 * @param sock socket id
 * @param buffer data buffer pointer to be send
 * @param length length of data buffer
 * @param flag flag of send (not used,just set zero)
 * @return return negative if failed,otherwise return number of bytes of sent
 */
xl_int32 xlite_socket_send(xlite_socket sock,xl_uint8* buffer,xl_uint32 length,xl_uint8 flag);



/*!
 * @brief receive data from specified address
 * @param sock socket id
 * @param buffer buffer pointer to be received
 * @param length length of buffer
 * @param flag flag(not used,just set zero)
 * @param fromaddr source address
 * @return return zero if successfully.
 */
xl_int32 xlite_socket_recvfrom(xlite_socket sock,xl_uint8* buffer,xl_uint32 length,xl_uint8 flag,xlite_socket_sockaddr_struct* fromaddr);


/*!
 * @brief receive data from a connected socket
 * @param sock socket id
 * @param buffer buffer pointer to be received
 * @param length length of buffer
 * @param flag flag (not used,just set zero)
 * @return return zero if successfully
 */
xl_int32 xlite_socket_recv(xlite_socket sock,xl_uint8* buffer,xl_uint32 length,xl_uint8 flag);


/*!
 * @brief set socket option
 * @param sock socket id
 * @param option option
 * @param val value
 * @param val_size size of value
 * @return return zero if successfully
 */
xl_int32 xlite_socket_setsockopt(xlite_socket sock,xlite_socket_option option,xl_uint8* val,xl_uint8 val_size);

/*!
 * @brief get socket option
 * @param sock socket id
 * @param option option
 * @param val value
 * @param val_size size of value
 * @return return zero if successfully
 */
xl_int32 xlite_socket_getsockopt(xlite_socket sock,xlite_socket_option option,xl_uint8* val,xl_uint8 val_size);


/*!
 * @brief get ip address by host-name
 */
xl_int32 xlite_socket_gethostbyname(const xl_char* domain_name,xl_int32 request_id,xlite_socket_sockaddr_struct* sock_addr,xlite_socket_gethostbyname_event_handler handler,xl_void* handler_param);

/*!
 * @brief �ر���������
 */
xl_void xlite_socket_close_network(xl_void);

#endif

#if xlite_sal_string == 1
/////////////////////////////////////////////////////////////////////////////////
//  xLite_string.h
//  �ַ�������
//


//////////////////////////////////////////////////////////////////////////
// FUNCTION ROUTE
//////////////////////////////////////////////////////////////////////////
/*!
 * @brief ��unicodeתΪutf_8
 * @param str1 utf_8�ַ���,���Ϊ����д��,ֻ�����ַ���
 * @param str2 unicode�ַ���
 * @return ת������ַ���
 */
xl_uint32 xlite_unicode_to_utf8(xl_char* str1, xl_int32 str1_len,xl_wchar* str2,xl_int32 str2_len);

/*!
 * @brief ��utf_8תΪunicode
 * @param str1 unicode�ַ���,,���Ϊ����д��,ֻ�����ַ���
 * @param str2 utf_8�ַ���
 * @return ת������ַ���
 */

xl_uint32 xlite_utf8_to_unicode(xl_wchar* str1, xl_int32 str1_len, xl_char* str2, xl_int32 str2_len);


/*!
 * @brief ��ȡ�ַ�������
 * @param pstr �ַ���
 * @return �ַ�������
 */
xl_uint32 xlite_strlen(const xl_char* pstr);


/*!
* @brief ��ȡ�ַ�������
* @param pwstr �ַ���
* @return �ַ�������
*/
xl_uint32 xlite_wstrlen(const xl_wchar* pwstr);


/*!
 * @brief �����ַ���
 * @param dest Ŀ���ַ���ָ��
 * @param src Դ�ַ���ָ��
 */
xl_void xlite_strcpy(xl_char* dest,const xl_char* src);


/*!
 * @brief �����ַ���
 * @param dest Ŀ���ַ���ָ��
 * @param src Դ�ַ���ָ��
 */
xl_void xlite_wstrcpy(xl_wchar* dest,const xl_wchar* src);


/*!
 * @brief �����ַ���
 * @param dest Ŀ���ַ���ָ��
 * @param src Դ�ַ���ָ��
 * @param length ��Ҫ���Ƶ��ַ�������
 */
xl_void xlite_strncpy(xl_char* dest,const xl_char* src,xl_uint32 length);


/*!
 * @brief �����ַ���
 * @param dest Ŀ���ַ���ָ��
 * @param src Դ�ַ���ָ��
 * @param length ��Ҫ���Ƶ��ַ�������
 */
xl_void xlite_wstrncpy(xl_wchar* dest,const xl_wchar* src,xl_uint32 length);

/*!
 * @brief �ַ����Ƚ�
 * @param str_1 �ַ���
 * @param str_2 �ַ���
 * @param length �Ƚ���ʼ���ַ�����
 * @return ��ȷ���0,str_1 < str_2 ����С��0������,���򷵻ش���0������
 */
xl_int32 xlite_strncmp(const xl_char* str_1,const xl_char* str_2,xl_uint32 length);

/*!
 * @brief �ַ����Ƚ�
 * @param str_1 �ַ���
 * @param str_2 �ַ���
 * @param length �Ƚ���ʼ���ַ�����
 * @return ��ȷ���0,str_1 < str_2 ����С��0������,���򷵻ش���0������
 */
xl_int32 xlite_wstrncmp(const xl_wchar* str_1,const xl_wchar* str_2,xl_uint32 length);



/*!
 * @brief �ַ����Ƚ�
 * @param str_1 �ַ���
 * @param str_2 �ַ���
 * @return ��ȷ���0,str_1 < str_2 ����С��0������,���򷵻ش���0������
 */
xl_int32 xlite_strcmp(const xl_char* str_1,const xl_char* str_2);

/*!
 * @brief �ַ����Ƚ�
 * @param str_1 �ַ���
 * @param str_2 �ַ���
 * @return ��ȷ���0,str_1 < str_2 ����С��0������,���򷵻ش���0������
 */
xl_int32 xlite_wstrcmp(const xl_wchar* str_1,const xl_wchar* str_2);


/*!
 * @brief �����ַ���
 * @param str_1 �ַ���
 * @param str_2 �ַ���
 * @return ���ӵ��ַ���
 */
xl_char* xlite_strcat(xl_char* str_1,const xl_char* str_2);

/*!
 * @brief �����ַ���
 * @param str_1 �ַ���
 * @param str_2 �ַ���
 * @return ���ӵ��ַ���
 */
xl_wchar* xlite_wstrcat(xl_wchar* str_1,const xl_wchar* str_2);

/*!
 * @brief �����ַ���
 * @param str_1 �ַ���
 * @param str_2 �ַ���
 * @param length �ַ�������
 * @return ���ӵ��ַ���
 */
xl_char* xlite_strncat(xl_char* str_1,const xl_char* str_2,xl_uint32 length);

/*!
 * @brief �����ַ���
 * @param str_1 �ַ���
 * @param str_2 �ַ���
 * @param length �ַ�������
 * @return ���ӵ��ַ���
 */
xl_wchar* xlite_wstrncat(xl_wchar* str_1,const xl_wchar* str_2,xl_uint32 length);

/*!
 * @brief �����ַ�
 * @param str �ַ���
 * @param ch �������ַ�
 * @return �������ַ���ʼ���ַ���
 */
xl_char* xlite_strchr(const xl_char* str,xl_char ch);

/*!
 * @brief �����ַ�
 * @param str �ַ���
 * @param ch �������ַ�
 * @return �������ַ���ʼ���ַ���
 */
xl_wchar* xlite_wstrchr(const xl_wchar* str,xl_wchar ch);


/*!
 * @brief ���������ַ�
 * @param str �ַ���
 * @param ch �������ַ�
 * @return �������ַ���ʼ���ַ���
 */
xl_char* xlite_strrchr(const xl_char* str,xl_char ch);

/*!
 * @brief ���������ַ�
 * @param str �ַ���
 * @param ch �������ַ�
 * @return �������ַ���ʼ���ַ���
 */
xl_wchar* xlite_wstrrchr(const xl_wchar* str,xl_wchar ch);

/*!
 * @brief �����ַ���
 * @param str �ַ���
 * @param ch �������ַ���
 * @return �������ַ�����ʼ���ַ���
 */
xl_char* xlite_strstr(const xl_char* str1,xl_char* str2);

/*!
 * @brief �����ַ���
 * @param str �ַ���
 * @param ch �������ַ���
 * @return �������ַ�����ʼ���ַ���
 */
xl_wchar* xlite_wstrstr(const xl_wchar* str1,xl_wchar* str2);

/*!
 * @brief ���ַ���ת��Ϊ��ֵ
 * @param sz_num �������ֵ��ַ���
 * @return ת������ֵ
 */
xl_int32 xlite_atoi(const xl_char* sz_num);

/*!
 * @brief ��ʮ�������ַ���ת��Ϊ��ֵ
 * @param sz_num �������ֵ�ʮ�������ַ���
 * @return ת������ֵ
 */

xl_int32 xlite_htoi(xl_char *str);

/*!
 * @brief ����ֵת��Ϊ�ַ���
 * @param tz_num �������ֵ��ַ���
 * @param num ��ֵ
 */
xl_void xlite_itoa(xl_char* tz_num, xl_int32 num);

/*!
 * @brief ��charתΪwchar��ֻ����ĸ���ֺͷ���
 * @param dest wchar�ַ���
 * @param src char�ַ���
 */
xl_void xlite_ansii_to_unicode(xl_wchar* dest,xl_char* src);

/*!
 * @brief ��wcharתΪchar��ֻ����ĸ���ֺͷ���
 * @param dest char�ַ���
 * @param src wchar�ַ���
 */
xl_void xlite_unicode_to_ansii(xl_char* dest,xl_wchar* src);

/*!
 * @brief ��ʽ���ַ���
 */
xl_void xlite_sprintf(xl_char* str, const xl_char* fmt_str,...);
//extern xl_void (*xlite_sprintf) (xl_char* str, const xl_char* fmt_str,...);
#endif

#if xlite_sal_drawtext == 1
/////////////////////////////////////////////////////////////////////////////////
//  xlite_drawtext.h
//  DrawText depend on platform API
//

/*!
 * @brief ��ʼ����������
 */
xl_void xlite_drawtext_init(xl_void);


/*!
 * @brief ��������Ĵ�С
 * @param font_size �����С
 * @return	return 0 if successed, else -1 indicate not support.
 */
xl_void xlite_drawtext_set_font_size(xlite_font_size font_size);


/*!
 * @brief ���û������ֵ���ɫ
 * @param text_clr ������ɫ
 */
xl_void xlite_drawtext_set_color(xl_color text_clr);

/*!
 * @brief �����ַ��Ŀ��
 * @param ch �ַ�
 * @return �ַ��Ŀ��
 */
xl_int32 xlite_drawtext_get_char_width(xl_wchar ch);


/*!
 * @brief �����ַ��ĸ߶�
 * @param ch �ַ�
 * @return �ַ��ĸ߶�
 */
xl_int32 xlite_drawtext_get_char_height(xl_wchar ch);


/*!
 * @brief �����ַ����ĸ߶�
 * @param str �ַ���
 * @param length �ַ�������
 * @return �ַ����ĸ߶�
 */
xl_int32 xlite_drawtext_get_string_width(xl_wchar* str,xl_uint32 length);


/*!
 * @brief �����ַ����Ŀ��
 * @param str �ַ���
 * @param length �ַ�������
 * @return �ַ����Ŀ��
 */
xl_int32 xlite_drawtext_get_string_height(xl_wchar* str,xl_uint32 length);


/*!
 * @brief �����ַ�������Ļ
 * @param x x����
 * @param y y����
 * @param str �ַ���
 * @param length �ַ�������
 */
xl_void xlite_drawtext_draw_string(xl_int32 x,xl_int32 y,xl_wchar* str,xl_uint32 length);

/*!
 * @brief ����һ���ַ�����Ļ
 * @param x x����
 * @param y y����
 * @param ch �ַ�
 */
xl_void xlite_drawtext_draw_char(xl_int32 x,xl_int32 y,xl_wchar ch);

/*!
 * @brief ���û����ַ��ļ��þ���
 * @param left ��
 * @param top ��
 * @param right ��
 * @param bottom ��
 */
xl_void xlite_drawtext_set_clip(xl_int32 left,xl_int32 top,xl_int32 right,xl_int32 bottom);

/*!
 * @brief ���û����ַ��ļ��þ���
 */
xl_void xlite_drawtext_reset_clip(xl_void);

#endif

#if xlite_sal_audio == 1
/////////////////////////////////////////////////////////////////////////////////
//  xlite_audio.h
//
xl_uint8 xlite_audio_get_volume(xl_void);

/*
 * @brief ����������mtk��0-7
 * @param vol ����
 */
xl_void xlite_audio_set_volume(xl_int32 vol);

/*
 * @brief ��midi
 * @param audio_data ��Ƶ������
 * @param len ����������
 * @param repeats ѭ��������Ϊ0��������ѭ��
 * @return ��Ƶ�ľ��
 */
xlite_audio_handle xlite_audio_open_midi(xl_void *audio_data, xl_uint32 len, xl_uint8 repeats);

/*
 * @brief ��wav
 * @param audio_data ��Ƶ������
 * @param len ����������
 * @param repeats ѭ��������Ϊ0��������ѭ��
 * @return ��Ƶ�ľ��
 */
xlite_audio_handle xlite_audio_open_wav(xl_void *audio_data, xl_uint32 len, xl_uint8 repeats);

/*
 * @brief ֹͣ����midi
 * @param audio_handle ��Ƶ�ľ��
 */
xl_void xlite_audio_stop_midi(xlite_audio_handle audio_handle);

/*
 * @brief ֹͣ����wav
 * @param audio_handle ��Ƶ�ľ��
 */
xl_void xlite_audio_stop_wav(xlite_audio_handle audio_handle);

/*
 * @brief �ر�midi
 * @param audio_handle ��Ƶ�ľ��
 */
void xlite_audio_close_midi(xlite_audio_handle audio_handle);

/*
 * @brief �ر�wav
 * @param audio_handle: ��Ƶ�ľ��
 */
void xlite_audio_close_wav(xlite_audio_handle audio_handle);

/*
 * @brief ����midi
 * @param audio_handle ��Ƶ�ľ��
 */
void xlite_audio_play_midi(xlite_audio_handle audio_handle);

/*
 * @brief ����wav
 * @param audio_handle ��Ƶ�ľ��
 */
void xlite_audio_play_wav(xlite_audio_handle audio_handle);

/*
 * @brief ��ͣ����
 * @param audio_handle ��Ƶ�ľ��
 */
void xlite_audio_pause(xlite_audio_handle audio_handle);

/*
 * @brief �ظ�����
 * @param audio_handle ��Ƶ�ľ��
 */
void xlite_audio_resume(xlite_audio_handle audio_handle);
#endif

#if xlite_sal_memory == 1
/////////////////////////////////////////////////////////////////////////////////
//  xLite_memory.h
//  �ڴ�ӿ�
//

#	define XLITE_MEM_ALLOC(x)					xlite_mem_alloc((x))
#	define XLITE_MEM_FREE(x)					xlite_mem_free((x))

/*!
 * @brief �����ڴ�
 * @param length ��Ҫ���ڴ��С
 * @return �ɹ����ط�����ڴ�ָ��,���򷵻�XL_NULL
 */
xl_void* xlite_mem_alloc(xl_uint32 length);

/*!
 * @brief �ͷŷ�����ڴ�
 * @param ptr �ڴ�ָ��
 */
xl_void xlite_mem_free(xl_void* ptr);

/*!
 * @brief �����ڴ�����
 * @param dest Ŀ���ַ
 * @param src Դ��ַ
 * @param length ���ȣ���λΪ�ֽ�
 */
xl_void xlite_mem_copy(xl_void* dest,const xl_void* src,xl_uint32 length);

/*!
 * @brief �����ڴ�����
 * @param buffer ������ָ��
 * @param value ��Ҫ���õ�ֵ
 * @param length ���ȣ���λΪ�ֽ�
 */
xl_void xlite_mem_set(xl_void* buffer,xl_uint8 val,xl_uint32 length);

/*!
 * @brief �Ƚ��ڴ�����
 * @param pBuffer1 ��ַ1
 * @param pBuffer2 ��ַ2
 * @param size ���ȣ���λΪ�ֽ�
 * @return ��ͬ����XL_TRUE�����򷵻�XL_FALSE
 */
xl_bool xlite_mem_cmp(const xl_void * pBuffer1,const xl_void * pBuffer2,xl_uint32 size);


/*!
 * @brief ��ȡ��ǰ�ڴ���Ϣ
 * @param debug_info xlite_mem_debug_info��ָ��
 * @note ��debug_info�������ڴ���Ϣ��ֻ��debugģʽ������
 */
xl_void xlite_mem_debug_get_info(xlite_mem_debug_info* debug_info);


xl_int32 xlite_left_mem_size(xl_void);

#endif

#if xlite_sal_input_screen == 1
/////////////////////////////////////////////////////////////////////////////////
//  xLite_input_screen.h
//


/*
 * @brief MTKƽ̨����,����SCREEN ID,��ʼ������һ�ξͿ�����
 * @param screen_id screen id
 */
xl_void xlite_input_screen_mtk_set_screen_id(xl_uint16 screen_id);


/*
 * @brief ����һ��Input Screen
 * @param param xlite_input_screen_param��ָ��
 */
xl_void xlite_input_screen_enter(xlite_input_screen_param* param);


/*
 * @brief �ر�input screen
 */
void xlite_input_screen_cancel(xl_void);
#endif


#if xlite_sal_log == 1
/////////////////////////////////////////////////////////////////////////////////
//  xLite_log.h
//

 /*!
 * @brief ��ȡĬ�ϵ���־�ļ���
 */
xl_void xlite_log_get_default_file_name(xl_wchar* file_name);

/*!
 * @brief ʹ��ָ���ļ�����ʼ����־
 * @param log_file_name ��־�ļ���
 * @return �ɹ�����XL_TRUE,���򷵻�XL_FALSE
 */
xl_bool xlite_log_open(const xl_wchar* log_file_name);

/*!
 * @brief д����־
 * @param param fmt_str ��ʽ���ַ���
 * @sa printf
 * @note һ����־��ĳ���Ϊ0xFF,���������ɲ�\n
 * �����־�Ѿ��ر�,�ú�����ʲô������
 */
xl_void xlite_log_write_line(xlite_log_level level,const xl_char* fmt_str,...);

/*!
 * @brief �ر���־�ļ�
 */
xl_void xlite_log_close(xl_void);

/*!
 * @brief ����ڴ�״̬
 */
xl_void xlite_log_output_memory_status(xl_void);

//////////////////////////////////////////////////////////////////////////
// Macro for log
#if xlite_use_debug == 1

#define xlite_open_log(p) xlite_log_open((p))
#define xlite_close_log() xlite_log_close()

/*! @brief д��־(1��Msg) */
#define xlite_log_write_1(l,m)				xlite_log_write_line((l),(m))
/*! @brief д��־(2��Msg) */
#define xlite_log_write_2(l,m,m1)			xlite_log_write_line((l),(m),(m1))
/*! @brief д��־(3��Msg) */
#define xlite_log_write_3(l,m,m1,m2)			xlite_log_write_line((l),(m),(m1),(m2))
/*! @brief д��־(4��Msg) */
#define xlite_log_write_4(l,m,m1,m2,m3)		xlite_log_write_line((l),(m),(m1),(m2),(m3))
/*! @brief д��־(5��Msg) */
#define xlite_log_write_5(l,m,m1,m2,m3,m4)	xlite_log_write_line((l),(m),(m1),(m2),(m3),(m4))

#else
#define xlite_open_log(p)
#define xlite_close_log()
 
#define xlite_log_write_1(l,m)
#define xlite_log_write_2(l,m,m1)
#define xlite_log_write_3(l,m,m1,m2)
#define xlite_log_write_4(l,m,m1,m2,m3)
#define xlite_log_write_5(l,m,m1,m2,m3,m4)

#endif

#endif

#if xlite_sal_assert == 1
/////////////////////////////////////////////////////////////////////////////////
//  xLite_assert.h
//

 /*!
 * @brief ע���û�assert�ص�����
 */
xl_void xlite_assert_reg_user_callback(xl_void(*func)(xl_void));

 /*!
 * @brief ���Ժ���
 */
xl_void xlite_assert(xlite_assert_level level, xl_char* filename,xl_int32 line);

//////////////////////////////////////////////////////////////////////////
// Macro for assert
#ifndef XLITE_ASSERT_LEVEL
#	if xlite_use_debug == 1
#		define XLITE_ASSERT_LEVEL XLITE_ASSERT_LEVEL4
#	else
#		define XLITE_ASSERT_LEVEL XLITE_ASSERT_LEVEL1
#	endif
#endif

#define XLITE_ASSERT(l, c) \
	if(l <= XLITE_ASSERT_LEVEL) \
	{\
		if(!(c))\
		{\
			xlite_assert(l, __FILE__, __LINE__);\
		}\
	}
#endif


#if xlite_sal_sensor == 1
/////////////////////////////////////////////////////////////////////////////////
//  xLite_sensor.h
//  ��Ӧ�����api
//

 /*!
 * @brief ��sensor����
 */
xl_void xlite_sensor_start(xl_void);

 /*!
 * @brief �ر�sensor����
 */
xl_void xlite_sensor_stop(xl_void);

 /*!
 * @brief ��ȡ3���ᵱǰ�ļ��ٶ�ֵ
 */
xl_void xlite_sensor_get_xyz(xl_int16* x, xl_int16* y, xl_int16* z);

 /*!
 * @brief ��ȡ3�����ԭʼδ����ֵ
 */
xl_void xlite_sensor_get_original_value(xl_int16* a, xl_int16* b, xl_int16* c);

 /*!
 * @brief ��ȡsensor������
 */
xl_int32 xlite_sensor_get_sensor_type(xl_void);

#endif

 /*!
 * @brief ��MTK ������ͼƬ
 */
xl_void xlite_mtk_draw_image(xl_uint32 x,xl_uint32 y,xl_char *image);

 /*!
 * @brief ��MTK ������ȡͼƬ����
 */

xl_void xlite_mtk_get_image_width_height(xl_int32 *width,xl_int32 *height,xl_char *image);

  /*!
 * @brief �����ļ�·��
 */

xl_void xlite_app_get_file_path(xl_wchar *wpath,xl_char *image);


xl_bool xlite_record_start(record_fun fun);


xl_bool xlite_record_stop(xl_void);
#endif
