/*
  wiring_private.h - Internal header file.
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2005-2006 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/

#ifndef WiringPrivate_h
#define WiringPrivate_h

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdarg.h>


#include "Arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

extern uint8_t PeripheralControl;

uint32_t countPulseASM(volatile uint8_t *port, uint8_t bit, uint8_t stateMask, unsigned long maxloops);

typedef void (*voidFuncPtr)(void);

#ifndef CORE_ATTACH_OLD
  void __attribute__((naked)) __attribute__((noreturn)) isrBody();
#endif
#ifdef __cplusplus
} // extern "C"
#endif

#endif
