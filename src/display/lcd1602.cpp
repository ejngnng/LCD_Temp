/*
 * Description: lcd 16X2 source file
 *
 * Author: ninja
 *
 * Date: 2017-12-06
 */
#include "lcd1602.h"

LiquidCrystal LCD1602(RS_PIN, EN_PIN, D4_PIN, D5_PIN, D6_PIN, D7_PIN);

// customer big font character
byte bar1[8] =
{
        B11100,
        B11110,
        B11110,
        B11110,
        B11110,
        B11110,
        B11110,
        B11100
};

byte bar2[8] =
{
        B00111,
        B01111,
        B01111,
        B01111,
        B01111,
        B01111,
        B01111,
        B00111
};

byte bar3[8] =
{
        B11111,
        B11111,
        B00000,
        B00000,
        B00000,
        B00000,
        B11111,
        B11111
};

byte bar4[8] =
{
        B11110,
        B11100,
        B00000,
        B00000,
        B00000,
        B00000,
        B11000,
        B11100
};

byte bar5[8] =
{
        B01111,
        B00111,
        B00000,
        B00000,
        B00000,
        B00000,
        B00011,
        B00111
};

byte bar6[8] =
{
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B11111,
        B11111
};

byte bar7[8] =
{
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00111,
        B01111
};

byte bar8[8] =
{
        B11111,
        B11111,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
};

/* self define Nunber 0 */
void custom0(unsigned char col){
  LCD1602.setCursor(col, 0);
  LCD1602.write(2);
  LCD1602.write(8);
  LCD1602.write(1);
  LCD1602.setCursor(col, 1);
  LCD1602.write(2);
  LCD1602.write(6);
  LCD1602.write(1);
}

/* self define Nunber 1 */
void custom1(unsigned char col){
  LCD1602.setCursor(col,0);
  LCD1602.write(32);
  LCD1602.write(32);
  LCD1602.write(1);
  LCD1602.setCursor(col,1);
  LCD1602.write(32);
  LCD1602.write(32);
  LCD1602.write(1);
}

/* self define Nunber 2 */
void custom2(unsigned char col){
  LCD1602.setCursor(col,0);
  LCD1602.write(5);
  LCD1602.write(3);
  LCD1602.write(1);
  LCD1602.setCursor(col, 1);
  LCD1602.write(2);
  LCD1602.write(6);
  LCD1602.write(6);
}

/* self define Nunber 3 */
void custom3(unsigned char col){
  LCD1602.setCursor(col,0);
  LCD1602.write(5);
  LCD1602.write(3);
  LCD1602.write(1);
  LCD1602.setCursor(col, 1);
  LCD1602.write(7);
  LCD1602.write(6);
  LCD1602.write(1);
}

/* self define Nunber 4 */
void custom4(unsigned char col){
  LCD1602.setCursor(col,0);
  LCD1602.write(2);
  LCD1602.write(6);
  LCD1602.write(1);
  LCD1602.setCursor(col, 1);
  LCD1602.write(32);
  LCD1602.write(32);
  LCD1602.write(1);
}

/* self define Nunber 5 */
void custom5(unsigned char col){
  LCD1602.setCursor(col,0);
  LCD1602.write(2);
  LCD1602.write(3);
  LCD1602.write(4);
  LCD1602.setCursor(col, 1);
  LCD1602.write(7);
  LCD1602.write(6);
  LCD1602.write(1);
}

/* self define Nunber 6 */
void custom6(unsigned char col){
  LCD1602.setCursor(col,0);
  LCD1602.write(2);
  LCD1602.write(3);
  LCD1602.write(4);
  LCD1602.setCursor(col, 1);
  LCD1602.write(2);
  LCD1602.write(6);
  LCD1602.write(1);
}

/* self define Nunber 7 */
void custom7(unsigned char col){
  LCD1602.setCursor(col,0);
  LCD1602.write(2);
  LCD1602.write(8);
  LCD1602.write(1);
  LCD1602.setCursor(col, 1);
  LCD1602.write(32);
  LCD1602.write(32);
  LCD1602.write(1);
}

/* self define Nunber 8 */
void custom8(unsigned char col){
  LCD1602.setCursor(col, 0);
  LCD1602.write(2);
  LCD1602.write(3);
  LCD1602.write(1);
  LCD1602.setCursor(col, 1);
  LCD1602.write(2);
  LCD1602.write(6);
  LCD1602.write(1);
}

/* self define Nunber 9 */
void custom9(unsigned char col){
  LCD1602.setCursor(col, 0);
  LCD1602.write(2);
  LCD1602.write(3);
  LCD1602.write(1);
  LCD1602.setCursor(col, 1);
  LCD1602.write(7);
  LCD1602.write(6);
  LCD1602.write(1);
}


void printNumber(unsigned int value, unsigned char col) {
  if(value >= 0 && value <= 9){
    switch(value){
      case 0:
          custom0(col);
          break;
      case 1:
          custom1(col);
          break;
      case 2:
          custom2(col);
          break;
      case 3:
          custom3(col);
          break;
      case 4:
          custom4(col);
          break;
      case 5:
          custom5(col);
          break;
      case 6:
          custom6(col);
          break;
      case 7:
          custom7(col);
          break;
      case 8:
          custom8(col);
          break;
      case 9:
          custom9(col);
          break;
      default:
          break;
    }
  }
}


void lcd1602_init(){
  // assignes each segment a write number
  LCD1602.createChar(1,bar1);
  LCD1602.createChar(2,bar2);
  LCD1602.createChar(3,bar3);
  LCD1602.createChar(4,bar4);
  LCD1602.createChar(5,bar5);
  LCD1602.createChar(6,bar6);
  LCD1602.createChar(7,bar7);
  LCD1602.createChar(8,bar8);

  // sets the LCD's rows and colums:
  LCD1602.begin(16, 2);
}
