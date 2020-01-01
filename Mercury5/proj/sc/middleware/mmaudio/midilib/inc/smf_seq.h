#ifndef	_smf_seq_h_
#define	_smf_seq_h_

/*	max. SMF track	*/
#define	MAX_SMF_TRK	40
/*	Sys. Exclusive Buffer length.	*/
#define	SYS_EXC_MAX_LEN	16
/*	Max. number of Audio stream Chunk    */
//#define	MAX_AUD_CHUNK	16

#define	FSP_DEFAULT_TEMPO	0x10000

/********************* SMF ********************/
/*	STATUS */
#define	SMF_META	0xff
#define	SMF_EXC		0xf0
#define	SMF_RAW		0xf7
/* Meta Number */
#define	SMF_META_EOT	0x2f
#define	SMF_META_TEMPO	0x51
#define	SMF_META_TEXT	0x03
/********************* MIDI *******************/
#define	MIDI_NOTEOFF	0x80
#define	MIDI_NOTEON		0x90
#define	MIDI_POLYPRESS	0xa0
#define	MIDI_CTRLCHG	0xb0
#define	MIDI_PRG_CHG	0xc0
#define	MIDI_CHPRESS	0xd0
#define	MIDI_PITCHBEND	0xe0
#define	MIDI_EXC	0xf0
#define	MIDI_MAX_CH		16
#define	MIDI_MAX_KEY	128
#define	MIDI_CC_HOLD	0x40
#define	MIDI_CC_ASOFF	120
#define	MIDI_CC_RSTCTRL	121
#define	MIDI_CC_ANOFF	123
#define MIDI_META_AUD_START		0x10
#define MIDI_META_AUD_STOP		0x11
#define MIDI_META_AUD_VOLUME	0x12
#define MIDI_META_AUD_REVERB	0x13

typedef enum {
	fspEr_NoError=0,			/*	���� */
	fspEr_Bussy=400,			/*	�v?�C?�����̂`�o�h�����s�ł��Ȃ���� */
	fspEr_Format=401,			/*	SMF �t�H�[�}�b�g�G?�[ */
	fspEr_NotSuport=402,	/*	�T�|�[�g����Ă��Ȃ� SMF �t�H�[�}�b�g */
	fspEr_OverRun=403,		/*	SMF?�ɋL�q����Ă���T�C�Y�ɑ΂����f�[�^�����Z�� */
	fspEr_DataEnd=404,		/*	���݈ʒu���f�[�^�̏I�[ */
	fspEr_ConvOpenErr=405
} fspErrorCode;

typedef enum {
	fspStat_Wait=0,		/*	?��������� SMF ���o�^����Ă��Ȃ����  */
	fspStat_Ready=1,	/*	SMF ���o�^����?�t�\��?�邪��~?�̏��  */
	fspStat_Run=2,		/*	?�t?  */
	fspStat_Seek=3,		/*	�ʒu�ړ�?  */
	fspStat_End=4,
	fspStat_Error=-1	/*	�G?�[���������A??���s�s�\�ȏ��  */
/*	fspSetSmf() �ɂ�� fspStat_Ready �ֈڍs����?��
  	�G?�[��Ԃ͉�?�����   */
} fspStat;

enum _FAITH_FILEKIND {
	FILEKIND_SMF = 0,
	FILEKIND_IMELODY,
	FILEKIND_INVALID
};


#ifdef __cplusplus
extern "C"{
#endif

fspErrorCode fspInitSeq(void *_hSynth, void (*_ledCallback)(void*,int), void (*_vibCallback)(void*,int), void (*_lcdCallback)(void*,int), void *_paramCallback );
void fspExitSeq(void);
fspErrorCode fspSetSmf(void *smf, unsigned int length, unsigned long *pTimebase, int *pFilekind );
//void fspUnsetSmf(void);
fspErrorCode fspSetSmf_game(void *smf, unsigned int length, unsigned long *pTimebase, int *pFilekind );

fspStat fspGetStat(void);
fspStat fspSeqProc(unsigned int elTime, long *pTick);
fspStat fspSeqProc_game(unsigned int elTime, long *pTick);


/*
	?�t�J�n
	��Ԃ� fspStat_Ready ��?�ɂ̂ݎ����\
	�G?�[�R�[�h�Ƃ���fspEr_DataEnd���Ԃ��Ă�����?��
	���݈ʒu���f�[�^�̏I�[��?�邱�Ƃ�����
*/
fspErrorCode fspPlay(void);

/*
	?�t�̒�~
*/
fspErrorCode fspStop(void);

/*
	���݈ʒu�̎擾
	��Ԃ� fspStat_Wait, fspStat_Seek, fspStat_Error �̏�?�ɂ�
	�Ԃ�l�͕ۏ؂���Ȃ�
	�ʒu�͋Ȃ̐擪����̐�Έʒu��P�ʃ~?�b�ŕԂ�
	�덷�� SMF �� 1delta (1 tick) �ȓ��ŏ�ɑ����Ȃ�����Ɍ덷��?��
*/
unsigned long fspGetCurPosition(void);

/*
	�ڒ��ʂ̎w��
	�����P�ʂŌ�������̈ڒ��ʂ��w�肷��
*/
//fspErrorCode fspSetTransPose(int transpose);

/*
	�e?�|�̕ύX
	���e?�|�ɑ΂���ω������w�肷��
	FSP_DEFAULT_TEMPO �� ���e?�|
	���e?�|�@�� 90% �ɂ�������?��

	(FSP_DEFAULT_TEMPO*90)/100 ����?�ɗ^����
*/
//void fspSetTempo(unsigned int tempoModyfy);

/*
	?�t�ʒu�̈ړ��i�Ȃ̐擪����̐�Έʒu�j�i�P�ʃ~?�b�j
	��Ԃ� fspStat_Ready ��?�ɂ̂ݎ����\
*/
fspErrorCode fspSeek(unsigned long ms_time);
/*
	?�t�ʒu�̈ړ��i�Ȃ̐擪����̐�Έʒu�j�i�P�ʃX�e�b�v�^�e�B�b�N�j
	��Ԃ� fspStat_Ready ��?�ɂ̂ݎ����\
*/
fspErrorCode fspSeekByTick(unsigned long tick_time);

/*
	���݈ʒu�̎擾
	��Ԃ� fspStat_Wait, fspStat_Seek, fspStat_Error �̏�?�ɂ�
	�Ԃ�l�͕ۏ؂���Ȃ�
	�ʒu�͋Ȃ̐擪����̐�Έʒu��P�ʃX�e�b�v�^�e�B�b�N�ŕԂ�
*/
unsigned long fspGetCurTick(void);

//char* fspGetTitle( int *pLength );

void fspSeqProcRestart(void);
void fspUnsetSmf(void);

#ifdef __cplusplus
}
#endif
#endif
