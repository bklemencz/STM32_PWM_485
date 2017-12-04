#ifndef __pwm_H
#define __pwm_H

#include "stm32f0xx_hal.h"
#include "tim.h"

typedef struct {
  uint8_t TimerNr;
  uint32_t Channel;
  uint16_t DutyTGT;
  uint16_t DutyACT;
  uint8_t ON;
} PWM_Channel_t;

void StartPWM ();
void StopPWM();



#endif
