// Copyright 2023 Maria (@toril940)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define WS2812_EXTERNAL_PULLUP

#define WS2812_PWM_DRIVER PWMD17
#define WS2812_PWM_CHANNEL 1
#define WS2812_DMA_STREAM STM32_DMA1_STREAM1
#define WS2812_DMA_CHANNEL 1
// #define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM17_UP

#define LED_DRIVER_COUNT 1
#define LED_MATRIX_LED_COUNT 8
#define LED_DRIVER_1_LED_TOTAL 8
#define LED_DRIVER_ADDR_1 0b1110100

#define LED_CAPS_LOCK_PIN B11