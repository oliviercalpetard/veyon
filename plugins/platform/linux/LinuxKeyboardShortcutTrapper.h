/*
 * LinuxKeyboardShortcutTrapper.h - dummy KeyboardShortcutTrapper implementation 
 *
 * Copyright (c) 2018 Tobias Junghans <tobydox@users.sf.net>
 *
 * This file is part of Veyon - http://veyon.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef LINUX_KEYBOARD_SHORTCUT_TRAPPER_H
#define LINUX_KEYBOARD_SHORTCUT_TRAPPER_H

#include "KeyboardShortcutTrapper.h"

class LinuxKeyboardShortcutTrapper : public KeyboardShortcutTrapper
{
	Q_OBJECT
public:
	LinuxKeyboardShortcutTrapper( QObject* parent = nullptr ) :
	    KeyboardShortcutTrapper( parent )
	{
	}

	~LinuxKeyboardShortcutTrapper() override
	{
	}

	void setEnabled( bool on ) override
	{
		Q_UNUSED(on);
	}

} ;

#endif
