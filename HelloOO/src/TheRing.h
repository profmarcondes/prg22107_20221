/*
 * TheRing.h
 *
 *  Created on: Apr 25, 2022
 *      Author: hugom
 */

#ifndef THERING_H_
#define THERING_H_

#include <iostream>
#include <string>
using namespace std;

class TheRing {
private:
	TheRing();

	static TheRing * _instance;

public:
	void sayIt() { cout << "My precious!!!" << endl; }
	static TheRing * getInstanceOf();


	virtual ~TheRing();
};

#endif /* THERING_H_ */
