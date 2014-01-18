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

#include <stdlib.h>
#include <iostream>
#include "../lib/Application.h"

using namespace std;

void interpreterArgv( int, char** );

int main( int argc, char** argv )
{
	interpreterArgv( argc, argv );
	
	Application app;
	string usr, pwd;
	
	cout << "Username: ";
	cin >> usr;
	cout << "Password: ";
	cin >> pwd;
	
	if ( app.checkAuthorities( usr, pwd ) == true )
		cout << endl << "Welcome, " << usr << endl;
	else {
		cout << endl << "Authentication failed." << endl;
		exit( 1 );
	}

	return 0;
}

void interpreterArgv( int argc, char** argv )
{
	cout << "Arguments: [" << argc - 1 << "]\n";
	
	int index;
	for ( index = 1 ; argv[index] != NULL ; index++ )
		cout << "\t-->\t" << argv[index] << endl;
}
