#ifdef __SCREEN_EFFECT_SPACE_SUPPORT__
#ifndef __MMI_WDG_SCREENEFFECT_SPACE_PRIV_H__
#define __MMI_WDG_SCREENEFFECT_SPACE_PRIV_H__

typedef struct
{
    float	m_Value;		 //��ǰֵ
    float	m_V;             //�ƶ��ٶ�
    float	m_MinValue;      //�½�
    float	m_MaxValue;      //�Ͻ�
    float  m_MinV;          //��С�ٶ�
    float  m_MaxV;          //����ٶ�
}PointMover_t;

typedef struct
{
    long    m_DrawCount;
    long    m_SpotCount;        //�̶������
    long    m_IteratCount;      //��������
    long    m_dataLength;
    float  *m_S0x;
    float  * m_S0y;
    float  * m_S1x;
    float  * m_S1y;
    PointMover_t mover[2];
    u32 prevtm;
} SpaceData_t;

// effect functions declare
MAERet_t ScreenEffectSpace_OnCreate(void *pThis);
MAERet_t ScreenEffectSpace_OnRelease(void *pThis);
MAERet_t ScreenEffectSpace_OnStart(void *pThis,void *pCfgData);
MAERet_t ScreenEffectSpace_OnStop(void *pThis);
void ScreenEffectSpace_OnTimer(void *pThis);
void ScreenEffectSpace_OnDraw(void *pThis, IDisplay *pDisp, s32 x, s32 y);
boolean ScreenEffectSpace_SetProperty(void *pThis, u32 P1, u32 P2);
boolean ScreenEffectSpace_OnTouch(void *pThiz, MAEEvent_t evt, s32 x, s32 y);


#endif // __MMI_WDG_SCREENEFFECT_SPACE_PRIV_H__
#endif // __SCREEN_EFFECT_SPACE_SUPPORT__
