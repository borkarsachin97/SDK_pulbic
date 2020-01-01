#ifdef __MMI_ZMOL__
#ifndef _zm_dual_sim_card_h_
#define _zm_dual_sim_card_h_

typedef enum
{
    ZM_AD_CALL_CHANNEL 				= 0x01,
    ZM_AD_SMS_CHANNEL 				= 0x02,
    ZM_AD_DATA_SERVICE_CHANNEL 		= 0x04,
    ZM_AD_AUDIO_RECORD 				= 0x08,
    ZM_AD_CHANNEL_TOTAL	
}zm_channel_owner;

typedef enum
{
    ZM_AD_CHANNEL_MASTER 			= 0x01,
    ZM_AD_CHANNEL_SLAVE 			= 0x02,
    ZM_AD_CHANNEL_DEFAULT_MASTER	= 0x04,
    ZM_AD_CHANNEL_DEFAULT_SLAVE 	= 0x08,
    ZM_AD_CHANNEL_NONE 				= 0xffff
}zm_channels;

/*
 *	�Ƿ���˫��˫���ֻ�
 */
zm_extern zm_bool zm_is_double_sim_phone(zm_void);
/*
 *	��˫��˫���ֻ����ö�����CALLͨ��
 */
zm_extern zm_int zm_change_sim_for_dual_sim(zm_channel_owner owner, zm_channels channel);
/*
 *	���SIM�Ƿ�OK
 */
zm_extern zm_bool zm_check_sim_for_status_ok(zm_channels channel);
/*
 *	��˫��˫���ֻ��޸�GPRSʹ�õ�SIM��
 */
zm_extern zm_void zm_change_gprs_for_dual_sim(zm_channels channel);
/*
 * ��ǰ����ͨ��
 */
extern zm_channels zm_network_cur_channel;
/*
 * ��ǰGPRS�ʻ�ID
 */
extern zm_uint32 glb_zm_gprs_accountid;
#endif//_zm_dual_sim_card_h_

#endif//__MMI_ZMOL__ 
