// Copyright 2024 Dylan Gardham (@spacejoey86)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// Split serial PIO
// #define SERIAL_DEBUG
#define SERIAL_USART_TX_PIN GP22
#define SERIAL_PIO_USE_PIO1
