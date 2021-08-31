/*
 * Description: main file
 *
 * Author: ninja
 *
 * Date: 2017-12-06
 */

#include <Arduino.h>

#include "display/lcd1602.h"

#define ButtonPin 2

extern LiquidCrystal LCD1602;

// function declare
void gpio_setup();
void button_isr();


void setup(){
  gpio_setup();
  lcd1602_init();
}


void loop(){
  printNumber(1, 0);
  printNumber(2, 3);
  printNumber(3, 6);
  printNumber(4, 9);
  printNumber(5, 12);

}


void gpio_setup() {
  pinMode(ButtonPin, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(ButtonPin), button_isr, LOW);

}

void button_isr() {


} 