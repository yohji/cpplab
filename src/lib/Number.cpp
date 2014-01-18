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

#include "Number.h"

using namespace std;

Number::Number() {
	
	integerNumber = 0;
	longNumber = 0;
	floatNumber = 0;
	doubleNumber = 0;
}

Number::Number( int value ) {

	integerNumber = value;
}

Number::Number( long value ) {

	longNumber = value;
}

Number::Number( float value ) {
	
	floatNumber = value;
} 

Number::Number( double value ) {
	
	doubleNumber = value;
}

void Number::logger()
{
	if ( integerNumber != 0 ) 
		std::cout << integerNumber << endl;
		
	else if ( longNumber != 0 )
		std::cout << longNumber << endl;
		
	else if ( floatNumber != 0 )
		std::cout << floatNumber << endl;
		
	else if ( doubleNumber != 0 )
		std::cout << doubleNumber << endl;
}
