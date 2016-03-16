/*
 * ObjInt.cpp
 *
 *  Created on: 16 de mar de 2016
 *      Author: Lauro Pereira
 */

#include "ObjInt.h"

ObjInt::ObjInt(string n, int i) : ObjBase(n), atrInt(i) {}

void ObjInt::setAtrInt(int n){
	ObjInt::atrInt = n;
}

int ObjInt::getAtrInt(){
	return ObjInt::atrInt;
}
