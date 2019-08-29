/* Copyright 2018 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#pragma once
#include "quantum.h"

#define LAYOUT( \
    K31,           K32, \
    K11, K12, K21, K22, \
    K13, K14, K23, K24  \
  ) \
{ \
  {  K11,  K21, K31 }, \
  {  K12,  K22, K32 }, \
  {  K13,  K23, KC_NO }, \
  {  K14,  K24, KC_NO }  \
}
