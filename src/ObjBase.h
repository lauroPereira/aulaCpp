/*
 * ObjBase.h
 *
 *  Created on: 16 de mar de 2016
 *      Author: Lauro Pereira
 */

#ifndef OBJBASE_H_
#define OBJBASE_H_

#include <iostream>
#include <iomanip>

using namespace std;

class ObjBase {
	const string name;

public:
	ObjBase(string);
	void showName();
	string getName();

};

#endif /* OBJBASE_H_ */
