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
#include "Vector.h"

Vector::Vector() {

	head = new Point( 0, 0, 0 );
	base = new Point( 0, 0, 0 );
	calculateMagnitude();
}

Vector::Vector(Point* head) {

	this->head = head;
	base = new Point( 0, 0, 0 );
	calculateMagnitude();
}

Vector::Vector(Point* head, Point* base) {
	
	this->head = head;
	this->base = base;
	calculateMagnitude();
}

Vector::~Vector() {

	if ( this )
		delete this;
}

Point* Vector::getHead()
{
	return head;
}

Point* Vector::getBase()
{
	return base;
}

double Vector::getMagnitude()
{
	return magnitude;
}

void Vector::setHead( Point* head )
{
	this->head = head;
}

void Vector::setBase( Point* base )
{
	this->base = base;
}

void Vector::calculateMagnitude()
{
	magnitude = head->norm( base );
}

void Vector::setMagnitude( double magnitude )
{
	this->magnitude = magnitude;
}

bool Vector::equals( Vector* vector )
{
	bool equals = false;
	if ( head->equals( vector->head ) &&
		 base->equals( vector->base ) &&
		 magnitude == vector->magnitude )
		 equals = true;
	
	return equals;
}

bool Vector::isFree()
{
	bool primitive = true;
	if ( base->equals( new Point(0, 0, 0) ) )
		primitive = false;
	
	return primitive;
}

bool Vector::hasSameBase( Vector* vector )
{
	bool same = false;
	if ( base->equals( vector->base ) )
		same = true;
	
	return same;
}

Vector* Vector::getPrimitive()
{
	Point* h = new Point();
	h->setX( head->getX() - base->getX() );
	h->setY( head->getY() - base->getY() );
	h->setZ( head->getZ() - base->getZ() );
	
	Vector* primitive = new Vector();
	primitive->setHead( h );
	primitive->setBase( new Point(0, 0, 0) );
	primitive->setMagnitude( magnitude );
	
	return primitive;
}

void Vector::addition( Vector* vector )
{
	if ( hasSameBase( vector ) ) {
		head->addition( vector->head );
		calculateMagnitude(); 
	}
}

void Vector::subtraction( Vector* vector )
{
	if ( hasSameBase( vector ) ) {
		head->subtraction( vector->head );
		calculateMagnitude();
	}
}

void Vector::product( double scalar )
{
	head->product( scalar );
	base->product( scalar );
	calculateMagnitude();	
}

std::string Vector::toString()
{
	std::string toString;
	
	toString.append( "(" );
	toString.append( head->toString() );
	toString.append( ", " );
	toString.append( base->toString() );
	toString.append( ", " );
	
	char buffer [256];
	sprintf( buffer, "%g", magnitude );
	toString.append( buffer );
	toString.append( ")" );
	
	return toString;
}
