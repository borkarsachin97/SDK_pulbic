////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (��MStar Confidential Information��) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

/**
* @file    hal_clkgen_top.h
* @version
* @brief   This file contains the HAL interface of clkgen bbtop
*          part.
*
*/

#ifndef __HAL_CLKGEN_COMMON_H__
#define __HAL_CLKGEN_COMMON_H__

/*=============================================================*/
// Include files
/*=============================================================*/

#include "vm_types.ht"

/*=============================================================*/
// Data type definition
/*=============================================================*/

typedef enum
{
    TOP_CLK_AESDMA = 0,
    TOP_CLK_AXI2X,
    TOP_CLK_BDMA,
    TOP_CLK_BIST,
    TOP_CLK_BIST_PM,
    TOP_CLK_BIST_SC_GP,
    TOP_CLK_BIST_VHE_GP,
    TOP_CLK_BIST_DEC_GP,
    TOP_CLK_BOOT,
    TOP_CLK_BT656_0,
    TOP_CLK_BT656_P0_0_P,
    TOP_CLK_BT656_P0_1_P,
    TOP_CLK_BT656_1,
    TOP_CLK_BT656_P1_0_P,
    TOP_CLK_BT656_P1_1_P,
    TOP_CLK_CCIR_IN_CLK,
    TOP_CLK_CPUPLL_CLK,
    TOP_CLK_CSI_MAC_0,
    TOP_CLK_CSI_MAC_1,
    TOP_CLK_CSI2_MAC_P,
    TOP_CLK_CSI2_MAC_4LANE,
    TOP_CLK_CSI2_MAC_4LANE_P,
    TOP_CLK_DC0,
    TOP_CLK_DDR_SYN,
    TOP_CLK_DDRPLL_CLK,
    TOP_CLK_DEC_ODCLK,
    TOP_CLK_DEC_ODCLK_P,
    TOP_CLK_DIP,
    TOP_CLK_ECC,
    TOP_CLK_EMAC_AHB,
    TOP_CLK_EMAC_RX,
    TOP_CLK_EMAC_RX_REF,
    TOP_CLK_EMAC_TESTRX125_IN_LAN,
    TOP_CLK_EMAC_TX,
    TOP_CLK_EMAC_TX_REF,
    TOP_CLK_ETH_BUF,
    TOP_CLK_FCIE,
    TOP_CLK_FCIE_P,
    TOP_CLK_FCLK1,
    TOP_CLK_FCLK1_P,
    TOP_CLK_FCLK2,
    TOP_CLK_FCLK2_P,
    TOP_CLK_FUART,
    TOP_CLK_FUART0_SYNTH_IN,
    TOP_CLK_FUART0_SYNTH_OUT,
    TOP_CLK_GOP0,
    TOP_CLK_GOP1,
    TOP_CLK_GOP2,
    TOP_CLK_HEMCU_216M,
    TOP_CLK_HVD,
    TOP_CLK_HVD_IDB,
    TOP_CLK_IDCLK,
    TOP_CLK_IMI,
    TOP_CLK_IR,
    TOP_CLK_ISP,
    TOP_CLK_ISP_P,
    TOP_CLK_IVE,
    TOP_CLK_JPD,
    TOP_CLK_JPE,
    TOP_CLK_LIVE,
    TOP_CLK_LIVE_PM,
    TOP_CLK_LPLL_CLK,
    TOP_CLK_LPLL_CLK_DIV2,
    TOP_CLK_LPLL_CLK_DIV4,
    TOP_CLK_LPLL_CLK_DIV8,
    TOP_CLK_MAC_LPTX_0,
    TOP_CLK_MAC_LPTX_1,
    TOP_CLK_MCU,
    TOP_CLK_MCU_P,
    TOP_CLK_MCU_PM,
    TOP_CLK_MCU_PM_P,
    TOP_CLK_MFE,
    TOP_CLK_MIIC0,
    TOP_CLK_MIIC1,
    TOP_CLK_MIIC2,
    TOP_CLK_MIIC3,
    TOP_CLK_MIPI_TX_CSI,
    TOP_CLK_MIPI_TX_DSI,
    TOP_CLK_MIU,
    TOP_CLK_MIU_BACH,
    TOP_CLK_MIU_BDMA,
    TOP_CLK_MIU_CMDQ,
    TOP_CLK_MIU_DC0,
    TOP_CLK_MIU_DIG,
    TOP_CLK_MIU_DIP,
    TOP_CLK_MIU_DEC_GP,
    TOP_CLK_MIU_DEC_GP_P,
    TOP_CLK_MIU_EMAC,
    TOP_CLK_MIU_FCIE,
    TOP_CLK_MIU_FF,
    TOP_CLK_MIU_FILE,
    TOP_CLK_MIU_GOP,
    TOP_CLK_MIU_GOP3,
    TOP_CLK_MIU_GOP4,
    TOP_CLK_MIU_GOP5,
    TOP_CLK_MIU_HVD,
    TOP_CLK_MIU_ISP_DMA,
    TOP_CLK_MIU_ISP_DNR,
    TOP_CLK_MIU_ISP_ROT,
    TOP_CLK_MIU_ISP_STA,
    TOP_CLK_MIU_IVE,
    TOP_CLK_MIU_JPD,
    TOP_CLK_MIU_JPE0,
    TOP_CLK_MIU_JPE1,
    TOP_CLK_MIU_MFE,
    TOP_CLK_MIU_MFEH,
    TOP_CLK_MIU_P,
    TOP_CLK_MIU_REC,
    TOP_CLK_MIU_SC_CROP,
    TOP_CLK_MIU_SC_DNR,
    TOP_CLK_MIU_SC_DNR_SAD,
    TOP_CLK_MIU_SC_GP,
    TOP_CLK_MIU_SC_GP_P,
    TOP_CLK_MIU_SC1_DBG,
    TOP_CLK_MIU_SC1_FRM,
    TOP_CLK_MIU_SC1_SNP,
    TOP_CLK_MIU_SC1_SNPI,
    TOP_CLK_MIU_SC2_FRM,
    TOP_CLK_MIU_SC2_SNPI,
    TOP_CLK_MIU_SC3_FRM,
    TOP_CLK_MIU_SD,
    TOP_CLK_MIU_SDIO,
    TOP_CLK_MIU_UHC0,
    TOP_CLK_MIU_URDMA,
    TOP_CLK_MIU_VD_R2,
    TOP_CLK_MIU_VHE,
    TOP_CLK_MIU_VHE_GP,
    TOP_CLK_MIU_VHE_GP_P,
    TOP_CLK_MIU_VIP,
    TOP_CLK_MIU_XD2MIU,
    TOP_CLK_MIU2X,
    TOP_CLK_MIU2X_P,
    TOP_CLK_MIUPLL_CLK,
    TOP_CLK_MPLL_123M,
    TOP_CLK_MPLL_123M_DIV2,
    TOP_CLK_MPLL_144M,
    TOP_CLK_MPLL_144M_DIV2,
    TOP_CLK_MPLL_144M_DIV4,
    TOP_CLK_MPLL_172M,
    TOP_CLK_MPLL_216M,
    TOP_CLK_MPLL_216M_DIV2,
    TOP_CLK_MPLL_216M_DIV4,
    TOP_CLK_MPLL_216M_DIV8,
    TOP_CLK_MPLL_288M,
    TOP_CLK_MPLL_288M_DIV2,
    TOP_CLK_MPLL_288M_DIV4,
    TOP_CLK_MPLL_288M_DIV8,
    TOP_CLK_MPLL_432M,
    TOP_CLK_MPLL_86M,
    TOP_CLK_MPLL_86M_DIV16,
    TOP_CLK_MPLL_86M_DIV2,
    TOP_CLK_MPLL_86M_DIV4,
    TOP_CLK_MSPI0,
    TOP_CLK_MSPI1,
    TOP_CLK_MSPI2,
    TOP_CLK_NLM,
    TOP_CLK_NS_0,
    TOP_CLK_NS_1,
    TOP_CLK_ODCLK,
    TOP_CLK_PAD2ISP_SR_PCLK,
    TOP_CLK_PM_RIU_W_CLK_IN,
    TOP_CLK_PM_SLEEP,
    TOP_CLK_RIU,
    TOP_CLK_RIU_HEMCU_GP,
    TOP_CLK_RIU_MCU_IF,
    TOP_CLK_RIU_MIPI_GP,
    TOP_CLK_RIU_NOGATING,
    TOP_CLK_RIU_PM,
    TOP_CLK_RIU_SC_GP,
    TOP_CLK_RIU_VHE_GP,
    TOP_CLK_RIU_W_CLK_HEMCU_GP,
    TOP_CLK_RIU_W_CLK_IN,
    TOP_CLK_RIU_W_CLK_MCU_IF_GP,
    TOP_CLK_RIU_W_CLK_MIPI_IF_GP,
    TOP_CLK_RIU_W_CLK_SC_GP,
    TOP_CLK_RIU_W_CLK_TOP,
    TOP_CLK_RIU_W_CLK_VHE_GP,
    TOP_CLK_RIUBRDG,
    TOP_CLK_RMII_BUF,
    TOP_CLK_RTC,
    TOP_CLK_RTC_32K,
    TOP_CLK_RTC_32K_DIV4,
    TOP_CLK_RTC_CLK_32K,
    TOP_CLK_SAR,
    TOP_CLK_SD,
    TOP_CLK_SD_1X_P,
    TOP_CLK_SD_2X_P,
    TOP_CLK_SDIO,
    TOP_CLK_SDIO_P,
    TOP_CLK_SD_SYN,
    TOP_CLK_SPI,
    TOP_CLK_SPI_PM,
    TOP_CLK_SR0,
    TOP_CLK_SR1,
    TOP_CLK_SR2,
    TOP_CLK_SR0_MCLK,
    TOP_CLK_SR1_MCLK,
    TOP_CLK_TCK,
    TOP_CLK_TCK_BUF,
    TOP_CLK_UART0,
    TOP_CLK_UART1,
    TOP_CLK_UART2,
    TOP_CLK_UPLL,
    TOP_CLK_UPLL_320M,
    TOP_CLK_UPLL_384M,
    TOP_CLK_UTMI,
    TOP_CLK_UTMI_160M,
    TOP_CLK_UTMI_160M_DIV4,
    TOP_CLK_UTMI_160M_DIV5,
    TOP_CLK_UTMI_160M_DIV8,
    TOP_CLK_UTMI_192M,
    TOP_CLK_UTMI_192M_DIV4,
    TOP_CLK_UTMI_240M,
    TOP_CLK_VD_R2,
    TOP_CLK_VHE,
    TOP_CLK_XTALI,
    TOP_CLK_XTALI_12M,
    TOP_CLK_XTALI_12M_DIV12,
    TOP_CLK_XTALI_12M_DIV128,
    TOP_CLK_XTALI_12M_DIV16,
    TOP_CLK_XTALI_12M_DIV2,
    TOP_CLK_XTALI_12M_DIV4,
    TOP_CLK_XTALI_12M_DIV40,
    TOP_CLK_XTALI_12M_DIV64,
    TOP_CLK_XTALI_12M_DIV8,
    TOP_CLK_XTALI_24M,
    TOP_CLK_XTALI_SC_GP,
    TOP_CLK_XTALI_DEC_GP,
    TOP_CLK_ARMCPU_800M,
    TOP_CLK_ARMCPU_800M_DIV22,
#if 1 // Remove later
    GATE_MCM_AESDMA,
    GATE_MCM_BACH,
    GATE_MCM_EMAC,
    GATE_MCM_FCIE,
    GATE_MCM_GOP,
    GATE_MCM_JPE,
    GATE_MCM_MFE,
    GATE_MCM_SDIO,
    GATE_MCM_USB,
    GATE_MCM_VHE,
    GATE_SRAM_AESDMA,
    GATE_SRAM_BACH,
    GATE_SRAM_EMAC,
    GATE_SRAM_FCIE,
    GATE_SRAM_GOP,
    GATE_SRAM_JPE,
    GATE_SRAM_MAILBOX,
    GATE_SRAM_MFE,
    GATE_SRAM_SDIO,
    GATE_SRAM_USB,
    GATE_SRAM_VHE,
#endif
    TOP_CLK_INVALID
} ClkgenTopClk_e;

#define TOP_CLK_NUM TOP_CLK_INVALID

#endif //__HAL_CLKGEN_COMMON_H__