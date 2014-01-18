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

#include "Application.h"

using namespace std;

Application::Application() {
	
	storeAuthorities["usr"] = "yohji";
	storeAuthorities["pwd"] = "yohji";
}

bool Application::checkAuthorities( string usr, string pwd )
{
	bool result = false;
	
	if ( usr == storeAuthorities.at( "usr" ) && pwd == storeAuthorities.at( "pwd" ) )
		result = true;
	
	return result;
}
