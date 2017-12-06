/*
 * Description: lcd 16X2 header file
 *
 * Author: ninja
 *
 * Date: 2017-12-06
 */
#ifndef __LCD1602_H
#define __LCD1602_H

#include <Arduino.h>

#include <LiquidCrystal.h>

/*
 *  The Cuicuit:
 *  LCD RS pin to D12
 *  LCD Enable pin to D11
 *  LCD D4 pin to D5
 *  LCD D5 pin to D4
 *  LCD D6 pin to D3
 *  LCD D7 pin to D2
 *  LCD Vee tied to a pot to control brightness
 *  LCD Vss and R/W tied to ground
 *  LCD Vcc to +5V
*/

#define RS_PIN    12
#define EN_PIN    11
#define D4_PIN    5
#define D5_PIN    4
#define D6_PIN    3
#define D7_PIN    2



void lcd1602_init();

void custom0(unsigned char col);
void custom1(unsigned char col);
void custom2(unsigned char col);
void custom3(unsigned char col);
void custom4(unsigned char col);
void custom5(unsigned char col);
void custom6(unsigned char col);
void custom7(unsigned char col);
void custom8(unsigned char col);
void custom9(unsigned char col);

void printNumber(unsigned int number, unsigned char col);


#endif
