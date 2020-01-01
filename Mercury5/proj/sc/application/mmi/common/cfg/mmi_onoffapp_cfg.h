#ifndef __MMI_ON_OFF_APP_CFG__H__
#define __MMI_ON_OFF_APP_CFG__H__

//liuping add for Animation same as Melody 2010/05/18 -begin-
enum
{
	ONOFFAPP_ANIMATION_PRIORITY = 0, //�Զ���ʱ��Ϊ��
	ONOFFAPP_MELODY_PRIORITY,        //������ʱ��Ϊ��
};
typedef u8 ONOFFAPP_AniMel_Priority_e;
typedef struct _ONOFFAPP_AniMel_Set_t
{
	u16       aniTime;                     //Gif:���ŵ�ʱ��,����ms;No gif: ѭ�����Ŵ���             
	boolean   bIsGif;                      //�Ƿ�ΪgifͼƬ
	ONOFFAPP_AniMel_Priority_e  amPriority;//������������Ϊ������	
} ONOFFAPP_AniMel_Set_t;

#define CONFIG_AMR_ONOFFSETTING_LIST      CONFIG_DEFINE(CFGIT_ON_SETTING_AM_SAME, ONOFFAPP_AniMel_Set_t, 1, {6, FALSE, ONOFFAPP_ANIMATION_PRIORITY})

#define ONOFFAPP_AMR_ALL_CONFIG \
	    CONFIG_AMR_ONOFFSETTING_LIST

//liuping add for Animation same as Melody 2010/05/18 -end-

#endif //__MMI_ON_OFF_APP_CFG__H__

