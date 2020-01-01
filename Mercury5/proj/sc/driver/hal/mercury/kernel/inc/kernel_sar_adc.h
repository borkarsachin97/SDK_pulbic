/***************************************************************************
 *  kernel_sar_adc.h
 *--------------------------------------------------------------------------
 *  Scope: Sar ADC related definitions
 *
 ****************************************************************************/
#ifndef __KERNEL_SARADC_H__
#define __KERNEL_SARADC_H__


#define REG_SAR_CTRL0               0x00
#define REG_SAR_CKSAMP_PRD         	0x01
#define REG_SAR_GCR_SAR_CH8        	0x02
#define REG_SAR_AISEL_CTRL         	0x11
#define REG_SAR_GPIO_CTRL          	0x12
#define REG_SAR_INT_MASK            0x14
#define REG_SAR_INT_CLR             0x15
#define REG_SAR_INT_FORCE           0x16
#define REG_SAR_INT_STATUS          0x17
#define REG_SAR_CMP_OUT_RDY         0x18
#define REG_SAR_CH_REF_V_SEL        0x19
#define REG_SAR_CH1_UPB             0x20
#define REG_SAR_CH2_UPB             0x21
#define REG_SAR_CH3_UPB             0x22
#define REG_SAR_CH4_UPB             0x23
#define REG_SAR_CH5_UPB             0x24
#define REG_SAR_CH6_UPB             0x25
#define REG_SAR_CH7_UPB             0x26
#define REG_SAR_CH8_UPB             0x27
#define REG_SAR_CH1_LOB             0x30
#define REG_SAR_CH2_LOB             0x31
#define REG_SAR_CH3_LOB             0x32
#define REG_SAR_CH4_LOB             0x33
#define REG_SAR_CH5_LOB             0x34
#define REG_SAR_CH6_LOB             0x35
#define REG_SAR_CH7_LOB             0x36
#define REG_SAR_CH8_LOB             0x37
#define REG_SAR_CH1_DATA            0x40
#define REG_SAR_CH2_DATA            0x41
#define REG_SAR_CH3_DATA            0x42
#define REG_SAR_CH4_DATA            0x43
#define REG_SAR_CH5_DATA            0x44
#define REG_SAR_CH6_DATA            0x45
#define REG_SAR_CH7_DATA            0x46
#define REG_SAR_CH8_DATA            0x47
#define REG_SAR_SMCARD_CTRL         0x50
#define REG_SAR_FCIE_INT_CTRL       0x51
#define REG_SAR_INT_DIRECT2TOP_SEL  0x60

#define BIT0	0x1
#define BIT1	0x2
#define BIT2	0x4
#define BIT3	0x8
#define BIT4	0x10
#define BIT5	0x20
#define BIT6	0x40
#define BIT7	0x80
#define BIT8	0x100
#define BIT9	0x200
#define BIT10	0x400
#define BIT11	0x800
#define BIT12	0x1000
#define BIT13	0x2000
#define BIT14	0x4000
#define BIT15	0x8000

#endif //__KERNEL_SARADC_H__
