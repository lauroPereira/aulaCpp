/*
 * ObjBase.cpp
 *
 *  Created on: 16 de mar de 2016
 *      Author: Lauro Pereira
 */

#include "ObjBase.h"

using namespace std;

ObjBase::ObjBase(string n): name(n){}

void ObjBase::showName(){
	cout <<  ObjBase::name << endl;
}

string ObjBase::getName(){
	return ObjBase::name;
}
