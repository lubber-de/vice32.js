/*
 * uiperipheral.h
 *
 * Written by
 *  Andreas Boose <viceteam@t-online.de>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef VICE_UI_PERIPHERIAL_H
#define VICE_UI_PERIPHERIAL_H

#include "uimenu.h"

extern UI_CALLBACK(uiperipheral_set_fsdevice_directory);
extern UI_CALLBACK(uiperipheral_set_rawdevice_name);

extern ui_menu_entry_t uiperipheral_set_device8_type_submenu[];
extern ui_menu_entry_t uiperipheral_set_device9_type_submenu[];
extern ui_menu_entry_t uiperipheral_set_device10_type_submenu[];
extern ui_menu_entry_t uiperipheral_set_device11_type_submenu[];


#endif
