/*
 * Copyright (C) 2017 Jianhui Zhao <jianhuizhao329@gmail.com>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef _HELPERS_H
#define _HELPERS_H

#include <inttypes.h>
#include <stdbool.h>
#include "config.h"

#define UMQTT_CLR_BITS(byte, pos, bits)	byte &= ~(((2 << (bits - 1)) - 1) << pos)
#define UMQTT_SET_BITS(byte, val, pos)		byte |= val << pos

#define UMQTT_PUT_U16(buf, num) 			\
 	do {									\
 		*((uint16_t *)buf) = htons(num);	\
 		buf += 2;							\
 	} while (0)

#define UMQTT_PUT_STRING(buf, len, str) 	\
 	do {									\
 		UMQTT_PUT_U16(buf, len);			\
 		memcpy(buf, str, len); 				\
 		buf += len;							\
 	} while (0)

#endif