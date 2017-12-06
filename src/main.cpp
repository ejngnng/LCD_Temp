/*
 * Description: main file
 *
 * Author: ninja
 *
 * Date: 2017-12-06
 */

#include <Arduino.h>

#include "display/lcd1602.h"

extern LiquidCrystal LCD1602;


void setup(){
  lcd1602_init();
}


void loop(){
  printNumber(1, 0);
  printNumber(2, 3);
  printNumber(3, 6);
  printNumber(4, 9);
  printNumber(5, 12);

}
