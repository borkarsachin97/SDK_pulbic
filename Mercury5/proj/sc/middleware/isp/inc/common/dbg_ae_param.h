DBG_ITEM_ATT(DBG_AE_START,	eDBG_ITEM_TYPE_MAX,	1,	1,	1, 0, 0xffff),
DBG_ITEM_ATT(DBG_AE_HIST_TYPE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 2),
DBG_ITEM_ATT(DBG_AE_CALI_AVOFFSET,	eDBG_ITEM_TYPE_S32,	1,	4,	0, -0xffff, 0xffff),
DBG_ITEM_ATT(DBG_AE_CALI_BVOFFSET,	eDBG_ITEM_TYPE_S32,	1,	4,	0, -0xffff, 0xffff),
DBG_ITEM_ATT(DBG_AE_CALI_ISO100GAIN,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 0xffff),
DBG_ITEM_ATT(DBG_AE_CALI_MINISO,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 0xffff),
DBG_ITEM_ATT(DBG_AE_ISO,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffff),
DBG_ITEM_ATT(DBG_AE_LVX10,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 200),
DBG_ITEM_ATT(DBG_AE_AV,	eDBG_ITEM_TYPE_S32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	10, 10, 0xffff),
DBG_ITEM_ATT(DBG_AE_TV,	eDBG_ITEM_TYPE_S32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	1, 1, 0xffff),
DBG_ITEM_ATT(DBG_AE_BV,	eDBG_ITEM_TYPE_S32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	40, -0xffff, 0xffff),
DBG_ITEM_ATT(DBG_AE_ASV,	eDBG_ITEM_TYPE_S32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	1024, 1024, 0xffff),
DBG_ITEM_ATT(DBG_AE_DSV,	eDBG_ITEM_TYPE_S32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	1024, 1024, 0xffff),
DBG_ITEM_ATT(DBG_AE_CUR_AVGY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 512),
DBG_ITEM_ATT(DBG_AE_CUR_WY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 512),
DBG_ITEM_ATT(DBG_AE_IS_STABLE,	eDBG_ITEM_TYPE_U8|eDBG_ITEM_TYPE_TMPVALUE,	1,	1,	0, 0, 1),
DBG_ITEM_ATT(DBG_AE_DEFAULT_TARGET,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_TARGET_LUT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_TARGET_LUT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	16,	64,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_TARGET_LUT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	16,	64,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_INIT_SHUTTER,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 0xffffff),
DBG_ITEM_ATT(DBG_AE_INIT_GAIN,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1024, 0xffffff),
DBG_ITEM_ATT(DBG_AE_INIT_FNUM,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 0xffffff),
DBG_ITEM_ATT(DBG_AE_MIN_FPS,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 4, 480),
DBG_ITEM_ATT(DBG_AE_FPS_CTRL,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 3),
DBG_ITEM_ATT(DBG_AE_SHUTTER_COMP_GAIN,	eDBG_ITEM_TYPE_U8,	1,	1,	0, 0, 1),
DBG_ITEM_ATT(DBG_AE_SCENE_MODE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_SCENE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_METERING_TYPE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_FLICKER_MODE,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_FLICKER,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_EVCOMP_GRAD,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_EVCOMP,	eDBG_ITEM_TYPE_S32,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_CONV_RATIO_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 1, 1024),
DBG_ITEM_ATT(DBG_AE_CONV_RATIO_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 1, 1024),
DBG_ITEM_ATT(DBG_AE_CONV_RATIO_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_CONV_INTO_STABLE_THD,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_CONV_OUT_STABLE_THD,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_WIN_X_NUM,	eDBG_ITEM_TYPE_U8,	1,	1,	0, 1, 16),
DBG_ITEM_ATT(DBG_AE_WIN_Y_NUM,	eDBG_ITEM_TYPE_U8,	1,	1,	0, 1, 16),
DBG_ITEM_ATT(DBG_AE_EXPO_TBL_NUM,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 16),
DBG_ITEM_ATT(DBG_AE_EXPO_TBL,	eDBG_ITEM_TYPE_U32_MATRIX,	160004,	256,	0, 1, 32),
DBG_ITEM_ATT(DBG_AE_HDR_SHORT_EXPO_TBL_NUM,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 16),
DBG_ITEM_ATT(DBG_AE_HDR_SHORT_EXPO_TBL,	eDBG_ITEM_TYPE_U32_MATRIX,	160004,	256,	0, 1, 32),
DBG_ITEM_ATT(DBG_AE_WEIGHTING_TBL,	eDBG_ITEM_TYPE_U32_MATRIX,	960032,	12288,	0, 0, 512),
DBG_ITEM_ATT(DBG_AE_CUR_FPS,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_CONV_RATIO_FINAL,	eDBG_ITEM_TYPE_U16|eDBG_ITEM_TYPE_TMPVALUE,	1,	2,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_DR_BT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_DR_BT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_DR_BT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_DR_DT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_DR_DT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_DR_DT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_DR_BT_SORTY_WT,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_DR_DT_SORTY_WT,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_DR_BT_FINAL_PCENT,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_DR_DT_FINAL_PCENT,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_DR_BT_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 512),
DBG_ITEM_ATT(DBG_AE_DR_DT_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 512),
DBG_ITEM_ATT(DBG_AE_DR_BT_BLOCK_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_DR_DT_BLOCK_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_DR,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 4177920),
DBG_ITEM_ATT(DBG_AE_STRATEGY,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 3),
DBG_ITEM_ATT(DBG_AE_STRATEGY_WEIGHTING,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_STRATEGY_UPPER_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_STRATEGY_UPPER_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_STRATEGY_UPPER_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_STRATEGY_LOWER_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_STRATEGY_LOWER_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_STRATEGY_LOWER_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_ENABLE_STRETCH,	eDBG_ITEM_TYPE_U8,	1,	1,	0, 0, 1),
DBG_ITEM_ATT(DBG_AE_STGY_BT_PCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_STGY_BT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_STGY_BT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_STGY_BT_TARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_STGY_BT_TARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_STGY_BT_TARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 4177920),
DBG_ITEM_ATT(DBG_AE_STGY_BT_STS_PCENT,	eDBG_ITEM_TYPE_U32_ARRAY,	8,	32,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_STGY_BT_STS_TARGET,	eDBG_ITEM_TYPE_U32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_STGY_BT_STS_FINALTARGET,	eDBG_ITEM_TYPE_U32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_PCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_TARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_TARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_TARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 4177920),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_TARGETBYBV_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_TARGETBYBV_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_TARGETBYBV_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_BLKYWGHT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_BLKYWGHT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_BLKYWGHT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_SORTY_WT,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_FINAL_PCENT,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_FINAL_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_BLOCK_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_BT_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_PCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_TARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_TARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_TARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_FINAL_PCENT,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_FINAL_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_MT_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_STGY_DT_PCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_STGY_DT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_STGY_DT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_STGY_DT_TARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_STGY_DT_TARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_STGY_DT_TARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_STGY_DT_STS_PCENT,	eDBG_ITEM_TYPE_U32_ARRAY,	8,	32,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_STGY_DT_STS_TARGET,	eDBG_ITEM_TYPE_U32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_STGY_DT_STS_FINALTARGET,	eDBG_ITEM_TYPE_U32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_PCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_TARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 16),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_TARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_TARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_SORTY_WT,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_FINAL_PCENT,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_FINAL_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_BLOCK_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_Y,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_DT_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_MAIN_FINAL_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 2550),
DBG_ITEM_ATT(DBG_AE_ENABLE_BACKLIGHT,	eDBG_ITEM_TYPE_U8,	1,	1,	0, 0, 1),
DBG_ITEM_ATT(DBG_AE_ENABLE_CENTEROVEREXP,	eDBG_ITEM_TYPE_U8,	1,	1,	0, 0, 1),
DBG_ITEM_ATT(DBG_AE_FGWIN_RATIO,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 1024),
DBG_ITEM_ATT(DBG_AE_FGBG_BL_HIST_PCENT,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 1024),
DBG_ITEM_ATT(DBG_AE_FGBG_BL_HIST_WGHT,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 1024),
DBG_ITEM_ATT(DBG_AE_FGBG_COE_HIST_PCENT,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 1024),
DBG_ITEM_ATT(DBG_AE_FGBG_COE_HIST_WGHT,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 1, 1024),
DBG_ITEM_ATT(DBG_AE_FGBG_BACKLIGHT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_FGBG_BACKLIGHT_PROB_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -0xffff, 0xffff),
DBG_ITEM_ATT(DBG_AE_FGBG_BACKLIGHT_PROB_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -0xffff, 0xffff),
DBG_ITEM_ATT(DBG_AE_FGBG_CENTEROVEREXP_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_FGBG_CENTEROVEREXP_PROB_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -0xffff, 0xffff),
DBG_ITEM_ATT(DBG_AE_FGBG_CENTEROVEREXP_PROB_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -0xffff, 0xffff),
DBG_ITEM_ATT(DBG_AE_FGBG_BACKLIGHT_FINAL_PROB,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_FGBG_CENTEROVEREXP_FINAL_PROB,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_FGBG_BL_DIFF,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_COE_DIFF,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_BL_HISTY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_COE_HISTY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_BL_BLKY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_COE_BLKY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_BL_FGY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_COE_FGY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_BL_BGY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_COE_BGY,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_BL_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FGBG_COE_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 0xffffff),
DBG_ITEM_ATT(DBG_AE_FINAL_SCENE_TARGET,	eDBG_ITEM_TYPE_U32|eDBG_ITEM_TYPE_TMPVALUE,	1,	4,	0, 0, 255),
DBG_ITEM_ATT(DBG_AE_HIST_STS,	eDBG_ITEM_TYPE_U32_ARRAY|eDBG_ITEM_TYPE_TMPVALUE,	128,	512,	0, 0, 34560),
DBG_ITEM_ATT(DBG_AE_ENABLE_WDR,	eDBG_ITEM_TYPE_U8,	1,	1,	0, 0, 1),
DBG_ITEM_ATT(DBG_AE_WDR_BT_BLKPCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_BT_BLKPCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_BT_BLKPCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_BT_BLKWGHT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_BT_BLKWGHT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_BT_BLKWGHT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_BT_SKIPPCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_BT_SKIPPCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_BT_SKIPPCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_BT_PCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_BT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_BT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_BT_TARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_BT_TARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_BT_TARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_BT_DEFTARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_BT_DEFTARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_BT_DEFTARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_BT_UPPER_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_BT_UPPER_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_BT_UPPER_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_BT_LOWER_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_BT_LOWER_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_BT_LOWER_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_DT_TARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_DT_TARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_DT_TARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_DT_UPPER_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_DT_UPPER_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_DT_UPPER_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_DT_LOWER_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_DT_LOWER_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_DT_LOWER_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_MT_PCENT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_MT_PCENT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_MT_PCENT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_MT_TARGET_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_MT_TARGET_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1000),
DBG_ITEM_ATT(DBG_AE_WDR_MT_TARGET_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_BLENDOPT,	eDBG_ITEM_TYPE_U8,	1,	1,	0, 0, 1),
DBG_ITEM_ATT(DBG_AE_WDR_MAXDTRATIO,	eDBG_ITEM_TYPE_U32,	1,	4,	0, 0, 8192),
DBG_ITEM_ATT(DBG_AE_WDR_TARGETBYFIX_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_TARGETBYFIX_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_WDR_TARGETBYFIX_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, -81920, 360448),
DBG_ITEM_ATT(DBG_AE_WDR_TARGETBYFLAT_NUM,	eDBG_ITEM_TYPE_U16,	1,	2,	0, 0, 8),
DBG_ITEM_ATT(DBG_AE_WDR_TARGETBYFLAT_Y,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	0, 0, 1024),
DBG_ITEM_ATT(DBG_AE_WDR_TARGETBYFLAT_X,	eDBG_ITEM_TYPE_S32_ARRAY,	8,	32,	1024, 1024, 8192),
DBG_ITEM_ATT(DBG_AE_END,	eDBG_ITEM_TYPE_MAX,	1,	1,	1, 0, 0xffff),