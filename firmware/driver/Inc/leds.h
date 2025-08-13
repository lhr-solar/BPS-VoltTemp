#pragma once

#include "stm32xx_hal.h"
#include "common.h"
#include "pinConfig.h"
#include "config.h"

void leds_init(void);

void set_heartbeat_led(State pin_state);

void volttemp_led_on(void);
