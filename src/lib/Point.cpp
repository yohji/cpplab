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

#include <stdio.h>
#include <cmath>
#include "Point.h"

Point::Point() {
	
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(double x, double y, double z) {
	
	this->x = x;
	this->y = y;
	this->z = z;
}

Point::~Point() {

	if ( this )
		delete this;
}

double Point::getX()
{
	return x;
} 

double Point::getY()
{
	return y;
}

double Point::getZ()
{
	return z;
}

void Point::setX( double x )
{
	this->x = x;
}

void Point::setY( double y )
{
	this->y = y;
}

void Point::setZ( double z )
{
	this->z = z;
}

bool Point::equals( Point* point )
{
	bool equals = false;
	if ( x == point->x &&
		 y == point->y &&
		 z == point->z )
		 equals = true;
	
	return equals;
}

void Point::addition( Point* point )
{
	x = x + point->x;
	y = y + point->y;
	z = z + point->z;
}
		
void Point::subtraction( Point* point )
{
	x = x - point->x;
	y = y - point->y;
	z = z - point->z;
}

void Point::product( Point* point )
{
	x = x * point->x;
	y = y * point->y;
	z = z * point->z;
}
		
void Point::division( Point* point )
{
	x = x / point->x;
	y = y / point->y;
	z = z / point->z;
}

void Point::addition( double scalar )
{
	x = x + scalar;
	y = y + scalar;
	z = z + scalar;
}
	
void Point::subtraction( double scalar )
{
	x = x - scalar;
	y = y - scalar;
	z = z - scalar;
}

void Point::product( double scalar )
{
	x = x * scalar;
	y = y * scalar;
	z = z * scalar;
}
	
void Point::division( double scalar )
{
	x = x / scalar;
	y = y / scalar;
	z = z / scalar;
}

double Point::norm( Point* point )
{
	double xx = pow( x - point->x , 2 );
	double yy = pow( y - point->y , 2 );
	double zz = pow( z - point->z , 2 );
	double norm = sqrt( xx + yy + zz );
	
	return norm;
}

std::string Point::toString()
{
	std::string toString;
	char buffer [256];
	
	sprintf( buffer, "%g", x );
	toString.append( buffer );
	toString.append( "|" );
	
	sprintf( buffer, "%g", y );
	toString.append( buffer );
	toString.append( "|" );
	
	sprintf( buffer, "%g", z );
	toString.append( buffer );
	
	return toString;
}
