/*
 * ObjDouble.cpp
 *
 *  Created on: 16 de mar de 2016
 *      Author: Lauro Pereira
 */

#include "ObjDouble.h"

ObjDouble::ObjDouble(string n, double d) : ObjBase(n), atrDouble(d) {}

void ObjDouble::setAtrDouble(double n){
	ObjDouble::atrDouble = n;
}

double ObjDouble::getAtrDouble(){
	return ObjDouble::atrDouble;
}
