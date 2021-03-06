//
//  Nibo-NanoVM, a tiny java VM for the Nibo robot
//
//  Copyright (C) 2007 by Nils Springob <nils@nicai-systems.de>
//  Based on work by Benjamin Benz(c't-Bot) and Till Harbaum(NanoVM)
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

/*! @file   display.h
 *  @brief  Routinen zur Displaysteuerung
 *  @author Benjamin Benz (bbe@heise.de)
 *  @author modified by Nils Springob (nils@nicai-systems.de)
 *  @date   2007-01-26
*/

#ifndef display_H_
#define display_H_

#define DISPLAY_LENGTH 20  /*!< Wieviele Zeichen passen in eine Zeile */

/*!
 *  Init Display
 */
void display_init(void);

void display_write(uint8_t mode, uint8_t data);

uint8_t display_read(uint8_t mode);

void display_wait(uint8_t mode);


/*!
 *  Loescht das ganze Display
 */
void display_clear(void);


/*!
 *  Positioniert den Cursor
 *  @param row Zeile
 *  @param column Spalte
 */
void display_cursor (int row, int column) ;

void display_data(char data);

void display_out(char * str, uint8_t length);

void display_print(char * str);

#endif
