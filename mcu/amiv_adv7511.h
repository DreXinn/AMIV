#ifndef __AMIV_ADV7511_INC_GUARD_H
#define __AMIV_ADV7511_INC_GUARD_H

#include <stdint.h>

#define AMIV_ADV7511_REG_POWER_1					0x41
#define AMIV_ADV7511_REG_POWER_2					0xA1
#define AMIV_ADV7511_REG_INIT_1						0x98
#define AMIV_ADV7511_REG_INIT_2						0x9A
#define AMIV_ADV7511_REG_INIT_3						0x9C
#define AMIV_ADV7511_REG_INIT_4						0x9D
#define AMIV_ADV7511_REG_INIT_5						0xA2
#define AMIV_ADV7511_REG_INIT_6						0xA3
#define AMIV_ADV7511_REG_INIT_7						0xE0
#define AMIV_ADV7511_REG_INIT_8						0xF9
#define AMIV_ADV7511_REG_INIT_9						0xA5
#define AMIV_ADV7511_REG_INIT_10					0xAB

#define AMIV_ADV7511_REG_VIDEO_1					0x15
#define AMIV_ADV7511_REG_VIDEO_2					0x16
#define AMIV_ADV7511_REG_VIDEO_3					0x17
#define AMIV_ADV7511_REG_VIDEO_4					0x18
#define AMIV_ADV7511_REG_VIDEO_5					0xAF
#define AMIV_ADV7511_REG_VIDEO_6					0x40
#define AMIV_ADV7511_REG_VIDEO_7					0xD0

#define AMIV_ADV7511_REG_CLK_1						0xBA
#define AMIV_ADV7511_REG_CLK_2						0xDE

#define AMIV_ADV7511_REG_DETECT						0x42

#define AMIV_ADV7511_REG_AVI_1						0x56

#define AMIV_ADV7511_REG_IRQ						0x96
#define AMIV_ADV7511_REG_STATUS						0xC8

#define AMIV_ADV7511_ERROR_BAD_RECEIVER_BKSV		0x01
#define AMIV_ADV7511_ERROR_RI_MISMATCH				0x02
#define AMIV_ADV7511_ERROR_PJ_MISMATCH				0x03
#define AMIV_ADV7511_ERROR_I2C						0x04
#define AMIV_ADV7511_ERROR_REPEATER_TIMED_OUT		0x05
#define AMIV_ADV7511_ERROR_REPEATERS_EXCEEDED		0x06
#define AMIV_ADV7511_ERROR_HASH_CHECK_FAILED		0x07
#define AMIV_ADV7511_ERROR_TOO_MANY_DEVICES			0x08


void AMIV_ADV7511_Init();
void AMIV_ADV7511_PowerUp();
void AMIV_ADV7511_Config();
void AMIV_ADV7511_ReadEDID();
uint8_t *AMIV_ADV7511_GetEDIDPointer();

static const uint8_t ADV7511_WRRegList[] = {
		0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E,
		0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28,
		0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32,
		0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C,
		0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x44, 0x48, 0x49, 0x4A,
		0x4B, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A,
		0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x60, 0x61, 0x62, 0x63, 0x64,
		0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E,
		0x6F, 0x7F, 0x80, 0x81, 0x82, 0x92, 0x93, 0x94, 0x95, 0x96,
		0x97, 0x98, 0x9A, 0x9C, 0x9D, 0xD0, 0xD5, 0xD6, 0xD7, 0xD8,
		0xD9, 0xDA, 0xDE, 0xDB, 0xDC, 0xDD, 0xA0, 0xA1, 0xA2, 0xA3,
		0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD,
		0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7,
		0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC1, 0xC2,
		0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC9, 0xD0, 0xD5, 0xD6, 0xE0,
		0xF9, 0xFA, 0xFB
};

#define ADV7511_WR_REG_LIST_COUNT		153

#endif
