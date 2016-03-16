/*
 * ObjDouble.h
 *
 *  Created on: 16 de mar de 2016
 *      Author: Lauro Pereira
 */

#ifndef OBJDOUBLE_H_
#define OBJDOUBLE_H_

#include "ObjBase.h"

class ObjDouble: public ObjBase {
public:
	ObjDouble(string, double);
	void setAtrDouble(double n);
	double getAtrDouble();

private:
	double atrDouble;
};

#endif /* OBJDOUBLE_H_ */
