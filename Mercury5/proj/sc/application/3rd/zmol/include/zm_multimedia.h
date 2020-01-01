#ifndef _zm_multimedia_h_
#define _zm_multimedia_h_

#include "zm_typedef.h"

typedef enum
{
	zm_audio_file=1,
	zm_audio_midi,
	zm_audio_arm,
	zm_audio_wav,
	zm_audio_pcm
}zm_audio_type;

typedef zm_void (*zm_mdi_callback)(zm_int32 result); 

/*
 * ��ʼ��
 */
zm_extern zm_void zm_start_shake(zm_int ms);

/*
 * ������
 */
zm_extern zm_void zm_stop_shake(void);

/*
 * ��ʼ��������
 */
zm_extern zm_bool zm_sound_play(zm_audio_type type, zm_uint8* ptr, zm_int len, zm_bool loop,zm_mdi_callback callback);

/*
 * ֹͣ��������
 */
zm_extern zm_bool zm_sound_stop(zm_void);

/**
 * ����������С��
 * @param volume ������
 */
zm_extern zm_void zm_set_volume(zm_int8 volume);

/**
 * ��������������
 * @param filepath	�����ļ�������·����
 * @return			����0��ʾ���óɹ�������Ϊ����
 */
zm_extern zm_bool zm_set_ringtone(const zm_int8* filepath);

/**
 * ���ñ���ǽֽ
 * @param filepath	ͼƬ�ļ�������·����
 * @return			����0��ʾ���óɹ�������Ϊ����
 */
zm_extern zm_bool zm_set_wallpaper(const zm_int8* filepath);

/**
 * �����Ƿ񰴼���������,������Ϸ��Ҫ�رհ�������
 */
zm_extern zm_void zm_kbd_enable_tone(zm_bool b);

/**
 * ���ð������ظ�Ƶ���Ƿ�Ϊ��Ƶ��
 */
zm_extern zm_void zm_kbd_enable_high_frequency(zm_bool b);

/**
 * ¼���ӿ�,��ʼ¼��
 */
zm_extern zm_void zm_aud_start_record(zm_int8* filename,zm_mdi_callback callback);
/**
 * ֹͣ¼��
 */
zm_extern zm_int32 zm_aud_stop_record(zm_void);

/**----------------------------------------------------------------------
 * MP3���Žӿ�
 *----------------------------------------------------------------------*/
/**
����:
audio ָ���ļ���������Buffer �׵�ַ
format ��Ƶ��ʽ
size ��Ƶ���ݳ���,Ϊ0 ��audio �����Ϊ�ļ���
����:
int
	0 �ɹ�
	!0 ʧ��,����־ʧ����Ϣ
*/
zm_int zm_media_playsound(zm_int8*audio, zm_int format, zm_int size,zm_mdi_callback callback);

/**
˵��: ֹͣ���ڲ��ŵ���Ƶ
����:
void
����:
int
	0 �ɹ�
	!0 ʧ��,����־ʧ����Ϣ
*/
zm_int zm_media_stopsound(zm_void);    

/**
˵��: ��ͣ������Ƶ
����:
void
����:
int
	0 �ɹ�
	!0 ʧ��,����־ʧ����Ϣ
 */                  
zm_int zm_media_pausesound(zm_void);    

/**
˵��: �ָ�������Ƶ
����:
void
����:
int
	0 �ɹ�
	!0 ʧ��,����־ʧ����Ϣ
 */                  
zm_int zm_media_resumesound(zm_void);

/**
˵��: �����Ƶ�ļ�������ʱ��
����:
file_name ָ���ļ���
����:
int
	>= 0 �ɹ�,������ʱ��ms
	< 0 ʧ��
 */
zm_int zm_media_getsoundduration(zm_int8 *file_name); 

/**
˵��: �����Ƶ���Ž���(�˹��ܽ������ļ�����)
����:
void
����:
int
	>= 0 �ɹ�,���ص�ǰ����ʱ��ms
	< 0 ʧ��
 */
zm_int zm_media_getsoundprogress(zm_void);    

/**
˵��: ���õ�ǰ��Ƶ���ŵĽ���
����:
progress ��Ҫ���õĽ���ֵms
����:
int
	0 �ɹ�
	!0 ʧ��,����־ʧ����Ϣ
 */
zm_int zm_media_setsoundprogress(zm_int progress);                      

#endif//_zm_multimedia_h_
