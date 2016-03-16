/*
 * ObjInt.h
 *
 *  Created on: 16 de mar de 2016
 *      Author: Lauro Pereira
 */

#ifndef OBJINT_H_
#define OBJINT_H_

#include "ObjBase.h"

class ObjInt: public ObjBase {
	int atrInt;
public:
	ObjInt(string, int);
	void setAtrInt(int n);
	int getAtrInt();
};

#endif /* OBJINT_H_ */
