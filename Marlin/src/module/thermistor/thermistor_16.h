/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// 16 is 100K thermistor - Alternative ATC Semitec 104GT-2 (4.7k pullup) Dagoma.Fr version (measured/tested/approved)
constexpr temp_entry_t temptable_16[] PROGMEM = {
    {OV(5), 320},
    {OV(6), 310},
    {OV(7), 300},
    {OV(8), 295},
    {OV(10), 285},
    {OV(11), 280},
    {OV(12), 275},
    {OV(16), 265},
    {OV(20), 254},
    {OV(22), 250},
    {OV(29), 240},
    {OV(36), 230},
    {OV(45), 222},
    {OV(48), 215},
    {OV(52), 208},
    {OV(72), 202},
    {OV(75), 196},
    {OV(86), 192},
    {OV(89), 188},
    {OV(106), 182},
    {OV(120), 174},
    {OV(131), 170},
    {OV(143), 166},
    {OV(152), 162},
    {OV(168), 158},
    {OV(184), 153},
    {OV(203), 150},
    {OV(221), 145},
    {OV(240), 143},
    {OV(288), 134},
    {OV(343), 125},
    {OV(404), 116},
    {OV(479), 107},
    {OV(553), 98},
    {OV(629), 89},
    {OV(710), 78},
    {OV(781), 69},
    {OV(844), 60},
    {OV(892), 50},
    {OV(932), 41},
    {OV(970), 29},
    {OV(1000), 20},
    {OV(1010), 10},
    {OV(1024), -273} // "for safety"
};

/* converted from old table
// 16 is 100K thermistor - Alternative ATC Semitec 104GT-2 (4.7k pullup) Dagoma.Fr version (measured/tested/approved)
const short temptable_16[][2] PROGMEM = {
  {5*OVERSAMPLENR,320},
  {6*OVERSAMPLENR,310},
  {7*OVERSAMPLENR,300},
  {8*OVERSAMPLENR,295},
  {10*OVERSAMPLENR,285},
  {11*OVERSAMPLENR,280},
  {12*OVERSAMPLENR,275},
  {16*OVERSAMPLENR,265},
  {20*OVERSAMPLENR,254},
  {22*OVERSAMPLENR,250},
  {29*OVERSAMPLENR,240},
  {36*OVERSAMPLENR,230},
  {45*OVERSAMPLENR,222},
  {48*OVERSAMPLENR,215},
  {52*OVERSAMPLENR,208},
  {72*OVERSAMPLENR,202},
  {75*OVERSAMPLENR,196},
  {86*OVERSAMPLENR,192},
  {89*OVERSAMPLENR,188},
  {106*OVERSAMPLENR,182},
  {120*OVERSAMPLENR,174},
  {131*OVERSAMPLENR,170},
  {143*OVERSAMPLENR,166},
  {152*OVERSAMPLENR,162},
  {168*OVERSAMPLENR,158},
  {184*OVERSAMPLENR,153},
  {203*OVERSAMPLENR,150},
  {221*OVERSAMPLENR,145},
  {240*OVERSAMPLENR,143},
  {288*OVERSAMPLENR,134},
  {343*OVERSAMPLENR,125},
  {404*OVERSAMPLENR,116},
  {479*OVERSAMPLENR,107},
  {553*OVERSAMPLENR,98},
  {629*OVERSAMPLENR,89},
  {710*OVERSAMPLENR,78},
  {781*OVERSAMPLENR,69},
  {844*OVERSAMPLENR,60},
  {892*OVERSAMPLENR,50},
  {932*OVERSAMPLENR,41},
  {970*OVERSAMPLENR,29},
  {1000*OVERSAMPLENR,20},
  {1010*OVERSAMPLENR,10},
  {1024*OVERSAMPLENR,-273} // for safety

*/
