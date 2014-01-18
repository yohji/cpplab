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

#ifndef VECTOR_H_
#define VECTOR_H_

#include <string>
#include "Point.h"

class Vector {

	public:
		Vector();
		Vector(Point* head);
		Vector(Point* head, Point* base);
		virtual ~Vector();
		
		Point* getHead();
		Point* getBase();
		double getMagnitude();
		void setHead( Point* head );
		void setBase( Point* base );
		void setMagnitude( double magnitude );
		
		void addition( Vector* vector );
		void subtraction( Vector* vector );
		void product( double scalar );
		
		bool equals( Vector* vector );
		bool isFree();
		bool hasSameBase( Vector* vector );
		std::string toString();
	
	protected:
		Point* head;
		Point* base;
		double magnitude;
		
		void calculateMagnitude();
		Vector* getPrimitive();
};

#endif /*VECTOR_H_*/
