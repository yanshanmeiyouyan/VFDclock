#ifndef __SW3518_H
#define __SW3518_H

#include "I2C.h"
#include "USART.h"

#define SW3518_ADDR 0x3C
#define SW3518_IC_VERSION 0x01
#define SW3518_FCX_STATUS 0x06
#define SW3518_PWR_STATUS 0x07
#define SW3518_I2C_ENABLE 0x12
#define SW3518_I2C_CTRL 0x13
#define SW3518_ADC_DATA_TYPE 0x3A
#define SW3518_ADC_DATA_BUF_H 0x3B
#define SW3518_ADC_DATA_BUF_L 0x3C
#define SW3518_PWR_CONF 0xA6
#define SW3518_QC_CONF0 0xAA
#define SW3518_VID_CONF0 0xAF
#define SW3518_PD_CONF1 0xB0
#define SW3518_PD_CONF2 0xB1
#define SW3518_PD_CONF3 0xB2
#define SW3518_PD_CONF4 0xB3
#define SW3518_PD_CONF5 0xB4
#define SW3518_PD_CONF6 0xB5
#define SW3518_PD_CONF7 0xB6
#define SW3518_PD_CONF8 0xB7
#define SW3518_PD_CONF9 0xB8
#define SW3518_QC_CONF1 0xB9
#define SW3518_QC_CONF2 0xBA
#define SW3518_PD_CONF10 0xBE
#define SW3518_VID_CONF1 0xBF

#define USBC 1
#define USBA 2

#define VIN 1
#define VOUT 2

u16 getVoltage(u8 P);
u16 getCurrent(u8 USB);

#endif

