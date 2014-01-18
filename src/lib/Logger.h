/*
 *	Copyright (c) 2008 Marco Merli <yohji@marcomerli.net>
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software Foundation,
 *	Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

typedef enum {
	DEBUG = 0,
	INFO = 1,
	WARN = 2,
	ERROR = 2,
	FATAL = 3
} level;

class Logger
{
	public:
		Logger() {};
		~Logger() {};
		
		void debug( const void* );
		void info( const void* );
		void warn( const void* );
		void error( const void* );
		void fatal( const void* );	
};

#endif /*LOGGER_H_*/
