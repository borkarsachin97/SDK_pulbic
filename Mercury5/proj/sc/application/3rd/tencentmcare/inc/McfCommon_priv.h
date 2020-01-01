/*
 *	ƽ̨˽��Ԥ����
 */

#ifndef MCFCOMMON_PRIV_H
#define MCFCOMMON_PRIV_H
#ifdef __cplusplus   
extern "C"{   
#endif // __cplusplus
#include "McfCommon.h"
#include "adaptVendor.h"
	//=====================ȫ�ֽṹ���忪ʼ=================================
	typedef struct
	{
		MVOID *GdiGlobalVar; //ͼ��ģ��ȫ�ֽṹ
		MVOID *LogGlobalVar; //��־ģ��
		MVOID *TimerGlobalVar; //Timerȫ�ֽṹ;
		MVOID *AudioGlobalVar; // AUDIOȫ�ֽṹ
		MVOID *KeyGlobalVar;//keypadȫ�ֱ���
		MVOID *SocketGlobalVar;//socketȫ�ֽṹָ��
		MVOID *PenGlobalVar;// Pen(Touch) ȫ�ֱ���;
		MVOID *IdleGlobalVar;//Idle(Icon)ȫ�ֱ���
		MVOID *SmsGlobalVar;//Smsȫ�ֱ���
		MVOID *DtcntGlobalVar; //Dtcntȫ�ֱ���
	}GlobalVar;
    //=====================ȫ�ֽṹ�������=================================
 
	//=====================ģ���ʼ����������===============================
	extern MINT McfGdi_Init(MVOID); //gdiģ���ʼ������	
	extern MBOOL McfTimerInit(MVOID);	
	extern MBOOL McfLogInit(MVOID);	
	extern MBOOL McfAudioInit(MVOID);	
	extern MBOOL McfKeyInit(MVOID);	
	extern MVOID McfSocketInit(MVOID);	
	extern MBOOL McfPenInit(MVOID);
	extern MBOOL McfIdleInit(MVOID);
	extern MBOOL McfSmsInit(MVOID);
	extern MBOOL McfDtcntInit(MVOID);
	extern MBOOL McfFileInit(MVOID);
	extern MBOOL McfSim_Init(MVOID);	
	//=====================ģ���ʼ��������������===========================

	//=====================ģ�鷴��ʼ����������===============================
	extern MVOID McfGdi_UnInit(MVOID);
	extern MVOID McfTimerUninit(MVOID);
	extern MVOID McfLogUninit(MVOID);
	extern MVOID McfAudioUninit(MVOID);
	extern MVOID McfKeyUninit(MVOID);
	extern MVOID McfSocketUninit(MVOID);
	extern MVOID McfPenUninit(MVOID);
	extern MVOID McfIdleUninit(MVOID);
	extern MVOID McfSmsUninit(MVOID);
	extern MVOID McfDtcntUninit(MVOID);
	extern MVOID McfFileUninit(MVOID);
	extern MVOID McfSim_Uninit(MVOID);
	//=====================ģ�鷴��ʼ��������������===========================





	//==========================�������ֺ���================================

	/*
		
		*	·���������ֺ��� 
		*   �磺D��/picture  ->  /NOR_FLASH_0/pictrue , E:/pic -> /CARD/pic
		*	ppnFullPath ���ⲿ�ͷ�
	*/
	extern MINT  Filepath_Format(const MWCHAR* oldpathname,MWCHAR **ppnFullPath);
	MUINT		McfCmn_GetVenHandle();
	void	McfCmn_CloseVenHandle();
	//============================Porting��ʼ��/����ʼ���ӿ�============================
	MVOID McfCmn_priv_Init(MVOID);
	MVOID McfCmn_priv_Uninit(MVOID);


#ifdef __cplusplus   
}   
#endif // __cplusplus
#endif//#ifndef MCRCOMMON_H
