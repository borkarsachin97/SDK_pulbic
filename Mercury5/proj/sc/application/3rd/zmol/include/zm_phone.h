#ifndef _ZHANGMENG_STOCK_PHONE_H_
#define _ZHANGMENG_STOCK_PHONE_H_

#include "zm_typedef.h"
#include "zm_socket.h"
/*
 * ��ʱ��
 */
typedef zm_void (*ZM_TIMER_CALLBACK_FUNCPTR)(zm_void);
/*
 * ���ü�ʱ��
 */
zm_extern zm_void zm_set_timer(zm_uint32 dwMiliSec,ZM_TIMER_CALLBACK_FUNCPTR pCallback);
/*
 * �رռ�ʱ��
 */
zm_extern zm_void zm_kill_timer(ZM_TIMER_CALLBACK_FUNCPTR pCallback);

/*
 * ��ʼ��Ϸtimer
 */
zm_extern zm_void zm_start_timer(zm_uint32 dwMiliSec,ZM_TIMER_CALLBACK_FUNCPTR pCallback);

/*
 * ������Ϸtimer
 */
zm_extern zm_void zm_stop_timer(ZM_TIMER_CALLBACK_FUNCPTR pCallback);

/* 
 * zm_get_imei
 * desc : Get the mobile's IMEI
 * return: he length of the imei, 0 indicating get error
 */
zm_extern zm_uint8 zm_get_imei(zm_int8* pIMEI, zm_uint8 nBuffLen);
/*
 * name: zm_get_imsi
 * desc: Get the mobile's imsi of sim card 
 * input:           
 *   --a pointer point to a buff which containing the got imis,pls use 0 as the last chararacter
 *   --nBuffLen: the length of the buffer of the first parameter
 * return: he length of the imis, 0 indicating get error        
 */
zm_extern zm_uint8 zm_get_imsi(zm_int8* pImsi, zm_uint8 nBuffLen);
/*
 *	��ȡ���ұ��
 */
zm_extern zm_void zm_get_phone_company(zm_int8* pCompany, zm_int nMax);
/*
 *	��ȡ�绰�ͺ�
 */
zm_extern zm_uint8 zm_get_phone_model(zm_int8* pModel, zm_uint8 nBuffLen);
/*
 * name: zm_get_network
 * description:   get the network information which is provide the service * input:   NONE
 * return:	zm_network_type
 * Note:
 */
zm_extern zm_network_type zm_get_network(zm_void);

/*
 * turn on screen always light
 */
zm_extern zm_void zm_screen_turn_on_light(zm_void);

/*
 * turn off screen light
 */
zm_extern zm_void zm_screen_turn_off_light(zm_void);

/*
 *	whether can send short message now
 */
zm_extern zm_bool zm_can_send_sms(zm_void);
/*
 *	send short message
 *  input:
 *		pCalled   : the called phone number of short message 
 *		@PContent : short mesage content
 *		@bNotify  : whether tip user, will send a short message
 *  return: if success return zm_true else return zm_false
 *		
 */
zm_extern zm_bool zm_send_sms(const zm_int8* pCalled,const zm_int8* pContent,zm_int contentLen,zm_bool bNotify,zm_int nTimers);
/*
 *	call phone interface
 *  input:
 *		@pCalled   : the called phone number 
 *		@nCalledLen: the pCalled buffer length
 *		@pszTip    : the pszTip text 
 *		@nTipLen   : the pszTip text length
 */
zm_extern zm_bool zm_call_phone(const zm_int8* pCalled, zm_uint16 nCalledLen, const zm_int8* pszTip, zm_uint16 nTipLen);
/*
 *	func : zm_call_url
 *	desc : wap interface
 *  input:
 *	@pszUrl, wap address, NOTE: not \0 end
 *	@nUrlLen, wap address length
 */
zm_extern zm_bool zm_call_url(const zm_int8* pszUrl, zm_uint16 nUrlLen);
/*
 *	func : zm_get_time
 *  desc : get current localtime
 */
zm_extern zm_bool zm_get_current_time(zm_tm* pTm);
zm_extern zm_void zm_set_current_time(zm_tm* pTm);

/*
 * ��ȡʱ���
 */
zm_extern zm_uint32 zm_get_tick_count(zm_void);

/*
 * �����漴��������
 */
zm_extern zm_void zm_srand(zm_uint s);

/*
 * ���������
 */
zm_extern zm_int zm_rand(zm_void);

/*
 * ���֪ͨ,�������zm_true ���룬 zm_false ������
 */
zm_extern zm_bool zm_on_enter_system(zm_void);
/*
 * ����֪ͨ
 */
zm_extern zm_void zm_on_exit_system(zm_void);

/*
 * �ı������
 */
typedef zm_void (*zm_input_text_callback)(zm_int8* buf, zm_int len);
zm_extern zm_void zm_input_text(const zm_int8* txt, zm_int len, zm_int maxlen, zm_input_type type, zm_input_text_callback callback);

/*
 *���ż��
 */
zm_extern zm_uint8 zm_sms_msg_probe(zm_uint8* number, zm_int num_len,zm_uint8* content ,zm_int content_len);

/*
 * ������
 */
zm_extern zm_uint8 zm_sms_msg_check(zm_void* data, zm_int withobject, zm_void* content);

/*
 * �������
 */
zm_extern zm_uint8 zm_sms_msg_handler(zm_void* inMsg, zm_void* content);

/* ----------------------------------------------
 *	debug trace interface
 * ----------------------------------------------*/
/*
 *	trace int 
 */
zm_extern zm_void zm_trace_int(const zm_int8* format, zm_int lvalue);
/*
 *	trace string
 */
zm_extern zm_void zm_trace(const zm_int8* str);
/*
 *	��ʽ��trace
 */
zm_extern zm_void zm_trace_string(const zm_int8* format, const zm_int8* str);


/* ----------------------------------------------
 *	Ϊ��֧����ԪUDB2.0��API�ӿ�֧��
 * ----------------------------------------------*/
// ��ȡ��ǰ�������ĺ���
zm_extern zm_uint8 zm_getscn(zm_int8 *pScn,zm_uint8 nBuffLen);

// ��ȡ�ֻ���֧�ֵ���Ƶ�ļ���ʽ����׺��
zm_extern zm_bool zm_getvideoformat(zm_int8* pszFormat, zm_int16 nMaxLen);

// ��ȡ�ֻ���֧�ֵ���Ƶ�ļ���ʽ����׺��
zm_extern zm_bool zm_getaudioformat(zm_int8* pszFormat, zm_int16 nMaxLen);

// ��ȡ�ֻ���֧�ֵ������ļ���ʽ����׺��
zm_extern zm_bool zm_getringtoneformat(zm_int8* pszFormat, zm_int16 nMaxLen);

// ��ȡ�ֻ���֧�ֵĵ������ļ���ʽ����׺��
zm_extern zm_bool zm_getebookformat(zm_int8* pszFormat, zm_int16 nMaxLen);

/*
 * �����������ø���֪ͨ
 */
zm_extern zm_void zm_pm_reload_profile(zm_void);

/**
 * �Ƿ���ʾ������Ϣ,����zm_true ��ʾ�� ���� zm_false ����ʾ
 */
zm_extern zm_bool zm_can_show_about(zm_void);

/**
 *	��ȡϵͳ�ַ����ı�
 */
zm_extern zm_int8* zm_getstring(zm_int32 strid);
/**
 *	��ȡ�ֻ���ʿ���mark
 *	0: ������������
 *	1: �����������ǽ
 *	2: ����������
 *	3: �����ֻ�����
 */
zm_extern zm_int zm_get_pm_entry_mark(zm_void);

//////////////////////////////////////////////////////////////////////////
//20100621��ӽӿ�
//////////////////////////////////////////////////////////////////////////

/**
 * ���Ͷ˿ڶ���
 * ����: pNumber		���Ž��շ�����
 * 		    pContent		��������
 * 		    nContLen		�������ݳ���
 * 		    bNotify		�Ƿ񵯳�������ʾ��
 * 		    nContEncode	�������ݵı��뷽ʽ
 * 		    src_port		���ŷ���Դ�˿�
 * 		    dst_port		���ŷ���Ŀ��˿�
 * 		    nTimers		���ŷ��ʹ���
 * ����: zm_true		���ͳɹ�
 * 		    zm_false		����ʧ��
 */
zm_extern zm_bool zm_send_sms_byport(zm_int8* pNumber, zm_int8*pContent, 
									 zm_int nContLen,zm_bool bNotify, zm_int nContEncode,
									 zm_uint16 src_port, zm_uint16 dst_port, zm_int nTimers);

/**
 * �������Ķ���
 * ����: pNumber		���Ž��շ�����
 * 		    pContent		��������
 * 		    nContLen		�������ݳ���
 * 		    bNotify		�Ƿ񵯳�������ʾ��
 * 		    nContEncode	�������ݵı��뷽ʽ
 * 		    nTimers		���ŷ��ʹ���
 * ����: zm_true		���ͳɹ�
 * 		    zm_false		����ʧ��
 */
zm_extern zm_bool zm_send_sms_encode(zm_int8* pNumber, zm_int8*pContent, 
									 zm_int nContLen,zm_bool bNotify, 
									 zm_int nContEncode,
									 zm_int nTimers);

//////////////////////////////////////////////////////////////////////////
// �绰���ӿ�
//////////////////////////////////////////////////////////////////////////
// �绰��¼�����λ��
typedef enum {
	zm_phb_nvram,			// �ֻ�
	zm_phb_sim1,			// SIM��1 
	zm_phb_sim2,			// SIM��2
	zm_phb_max
} zm_phb_storage;

// �绰�������Ĵ������
typedef enum {
	zm_phb_err_none,			// �޴���
	zm_phb_err_num_too_long,	// ���볬������
	zm_phb_err_fdl_on,			// �̶����ż���
	zm_phb_err_unknow			// δ֪����
} zm_phb_error;

// �ص�������ʽ����
typedef zm_void (*zm_phb_callback)(zm_phb_error err);

/**
 * �����绰��
 * ����: pNumber		Unicode����ĵ绰����(ʹ�õ�buf�������Ϊ88�ֽ�)
 * 		    num_len		�绰����buf���ֽڳ���
 * 		    name			Unicode�������ϵ������(ʹ�õ�buf�������Ϊ62�ֽ�)
 * 		    name_len		��ϵ������buf���ֽڳ���
 * ����: >=0			������� 
 *             -1				������Ч
 * 		   -2				�绰��δ��ʼ�����
 * 		   -3				�Ѿ��ﵽ�ɴ򿪵ĵ绰����������ֵ
 * 		   -4				�绰���д���ĵ绰����Ϊ0
 */
zm_extern zm_int zm_phb_find_first(zm_int8 *pNumber, zm_int num_len, zm_int8 *name, zm_int name_len);

/**
 * �����绰��
 * ����: search_handler	���������Ϊzm_phb_find_first�ķ���ֵ
 * 		    pNumber		Unicode����ĵ绰����(ʹ�õ�buf�������Ϊ88�ֽ�)
 * 		    num_len		�绰����buf���ֽڳ���
 * 		    name			Unicode�������ϵ������(ʹ�õ�buf�������Ϊ62�ֽ�)
 * 		    name_len		��ϵ������buf���ֽڳ���
 * ����: -1			��Ч����
 * 		    0				�Ѿ����˵绰���е����һ����¼(��ǰ���ص�pNumber��name��Ч)
 * 		    1				�ɹ����ص绰���е���ϵ����Ϣ
 */
zm_extern zm_int zm_phb_find_next(zm_int search_handler, zm_int8 *pNumber, zm_int num_len, zm_int8 *name, zm_int name_len);

/**
 * �رյ绰���������
 * ����: search_handler	���������Ϊzm_phb_find_first�ķ���ֵ
 * ����: zm_void
 */
zm_extern zm_void zm_phb_find_close(zm_int search_handler);

/**
 * ��ȡָ���������ϵ����Ϣ��������zm_phb_find_next������˳��
 * ����: index			����
 * 		    pNumber		���������Unicode����ĵ绰����
 * 		    num_len		pNumber buf���ֽڳ���
 * 		    name			���������Unicode�������ϵ������
 * 		    name_len		name buf���ֽڳ���
 * ����: -1			��Ч����
 * 		    -2			�绰��δ��ɳ�ʼ��
 * 		    -3			index����������Χ
 * 		    0				�ɹ���ȡ��ϵ����Ϣ
 */
zm_extern zm_int zm_phb_find_by_index(zm_int index, zm_int8 *pNumber, zm_int num_len, zm_int8 *name, zm_int name_len);

/**
 * ��ȡ�绰����Ϣ�ļ�¼����
 * ����: zm_void
 * ����: -1			�绰��δ��ʼ�����
 * 		    >=0			�绰��������
 */
zm_extern zm_int zm_phb_find_get_count(zm_void);

/**
 * ��ȡָ���������ϵ������
 * ����: pNumber		���������ASCII����ĵ绰����
 * 		    name			�����������ϵ������(Unicode����)
 * ����: -1			��Ч���� 
 * 		    -2			�绰��δ��ɳ�ʼ��
 * 		    0				δ������ָ������ϵ������
 * 		    >0			�ѵ�������ϵ���������ֽ���
 */
zm_extern zm_int zm_phb_find_search_name(zm_int8 *pNumber, zm_int8 *name);

/**
 * ��ӵ绰��¼
 * ����:
 * 	name				��ϵ������(Unicode����)
 * 	number				��ϵ�˺���(Unicode����)
 * 	storage				��ϵ�˱���λ��
 * 	callback				�ص�֪ͨ����
 * ����:
 * 	-1					�绰��δ��ɳ�ʼ��
 * 	0					�����������ɹ�
 */
zm_extern zm_int zm_phb_add_entry(zm_int8 *name, zm_int8 *number, zm_phb_storage storage, zm_phb_callback callback);

/**
 * ɾ���绰��¼
 * ����:
 * 	phb_index			�绰��������ֵ
 * 	callback				�ص�����
 * ����:
 * 	-1					�绰��δ��ɳ�ʼ��
 * 	0					����ɾ����Ϣ�ɹ�
 */
zm_extern zm_int zm_phb_delete_entry(zm_int phb_index, zm_phb_callback callback);

/**
 * ��ȡ�绰����¼�����λ��
 * ����:
 * 	phb_index			�绰�������
 * ����:
 * 	zm_phb_storage		�绰���Ĵ洢λ��
 * 	zm_phb_max			������Ч�����ߵ绰��δ��ɳ�ʼ��
 */
zm_extern zm_phb_storage zm_phb_get_storage(zm_int phb_index);


//////////////////////////////////////////////////////////////////////////
//����ͷ�ӿ�
//////////////////////////////////////////////////////////////////////////
// ����ͼƬ�ĳߴ�
typedef enum {
	zm_cam_img_size_small,
	zm_cam_img_size_middle,
	zm_cam_img_size_large,
	zm_cam_img_size_fine,

	zm_cam_img_size_max
} zm_cam_img_size;

// ����ͼƬ����ö��
typedef enum {
	zm_cam_img_qty_low,
	zm_cam_img_qty_normal,
	zm_cam_img_qty_high,
	zm_cam_img_qty_max
} zm_cam_img_qty;

// ����ͷץ�ĵĲ������
typedef enum {
	zm_cam_result_success = 0,
	zm_cam_result_err_not_preview,
	zm_cam_result_err_disk_full,
	zm_cam_result_err_write_protection,
	zm_cam_result_err_no_disk,
	zm_cam_result_err_failed,

	zm_cam_result_max_err
} zm_cam_result;

/**
 * ��ʼ������ͷģ��
 * ����: zm_void
 * ����: 0			��ʼ���ɹ�
 * 		    -1		�ڴ治��
 */
zm_extern zm_int zm_cam_init(zm_void);

/**
 * �ͷ�����ͷģ��
 * ����: zm_void
 * ����: zm_void
 */
zm_extern zm_void zm_cam_uninit(zm_void);

/**
 * ��ȥ����ͷԤ������
 * ����: zm_void	
 * ����: zm_void
 */
zm_extern zm_void zm_cam_entry_preview(zm_void);

/**
 * �˳�����ͷԤ������
 * ����: zm_void
 * ����: zm_void
 */
zm_extern zm_void zm_cam_exit_preview(zm_void);

/**
 * �ָ�����ͷԤ������
 * ����: zm_void
 * ����: zm_void
 */
zm_extern zm_void zm_cam_resume(zm_void);

/**
 * ��ͣ����ͷԤ������
 * ����: zm_void
 * ����: zm_void
 */
zm_extern zm_void zm_cam_pause(zm_void);

/**
 * ��ȡ��Ӧ����ͷ��ͼ�ߴ��ͼƬ��Ⱥ͸߶�
 * ����: img_size		ͼƬ�ߴ�ö��
 * 		    img_width		���������ͼƬ��ȣ�Ϊ0��ʾͼƬ�ߴ�ö����Ч
 * 		    img_height		���������ͼƬ�߶ȣ�Ϊ0��ʾͼƬ�ߴ�ö����Ч
 * ����: zm_void
 */
zm_extern zm_void zm_cam_get_size(zm_cam_img_size img_size, zm_int16 *img_width, zm_int16 *img_height);

/**
 * ��������ͷ��ͼ��ͼƬ�ߴ�
 * ����: img_size		ͼƬ�ߴ�ö�٣��������Ч�������򽫽�ͼ�ߴ�����Ϊ��Ļ���
 * ����: zm_void
 */
zm_extern zm_void zm_cam_set_capture_size(zm_cam_img_size img_size);

/**
 * ��������ͷͼƬԤ���ĳߴ�
 * ����: preview_width	Ԥ�����
 * 		    preview_height	Ԥ���߶�
 * ����: zm_void
 */
zm_extern zm_void zm_cam_set_preview_size(zm_int16 preview_width, zm_int16 preview_height);

/**
 * ��������ͷͼƬԤ����λ��
 * ����: preview_x		Ԥ��ͼƬ��x����
 * 		    preview_y		Ԥ��ͼƬ��y����
 * ����: zm_void
 */
zm_extern zm_void zm_cam_set_preview_position(zm_int16 preview_x, zm_int16 preview_y);

/**
 * ��������ͷ��ͼƬ����
 * ����: img_qty		ͼƬ����
 * ����: zm_void
 */
zm_extern zm_void zm_cam_set_img_qty(zm_cam_img_qty img_qty);

/**
 * ����ͷ�Ŵ󣬸��ݵ�ǰ����ͷ�ı��ʣ����ηŴ�
 * ����: zm_void
 * ����: zm_void
 */
zm_extern zm_void zm_cam_zoom_in(zm_void);

/**
 * ����ͷ��С�����ݵ�ǰ����ͷ�ı��ʣ�������С
 * ����: zm_void
 * ����: zm_void
 */
zm_extern zm_void zm_cam_zoom_out(zm_void);

/**
 * ��������ͷ�ı���
 * ����: index			����ͷ���ʣ���0��max_index,max_index��zm_cam_get_max_zoom_index����
 * ����: zm_void
 */
zm_extern zm_void zm_cam_set_zoom_index(zm_int index);

/**
 * ��ȡ����ͷ�������
 * ����: zm_void
 * ����: zm_void
 */
zm_extern zm_int zm_cam_get_max_zoom_index(zm_void);

/**
 * ����ͷ��ͼ
 * ����: buf_p			����ͼƬ��buf��ָ��
 * 		    captured_len	�����������ͼ��ɺ󷵻ص�jpegͼƬ����
 * ����: == zm_cam_result_success	��ͼ�ɹ�
 * 		   != zm_cam_result_successs	��ͼʧ��
 */
zm_extern zm_cam_result zm_cam_capture_to_memory(zm_int8 **buf_p, zm_int *captured_len);

#endif/*_ZHANGMENG_STOCK_PHONE_H_*/
