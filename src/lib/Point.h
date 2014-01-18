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

#ifndef POINT_H_
#define POINT_H_

#include <string>

class Point {

	public:
		Point();
		Point(double x, double y, double z);
		virtual ~Point();
		
		double getX();
		double getY();
		double getZ();
		void setX( double x );
		void setY( double y );
		void setZ( double z );
		
		void addition( Point* point );
		void subtraction( Point* point );
		void product( Point* point );
		void division( Point* point );
		
		void addition( double scalar );
		void subtraction( double scalar );
		void product( double scalar );
		void division( double scalar );
		
		bool equals( Point* point );
		double norm( Point* point );
		std::string toString();
	
	protected:
		double x;
		double y;
		double z;		
};

#endif /*POINT_H_*/
