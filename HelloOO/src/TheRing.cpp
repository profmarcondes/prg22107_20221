/*
 * TheRing.cpp
 *
 *  Created on: Apr 25, 2022
 *      Author: hugom
 */

#include "TheRing.h"

TheRing * TheRing::_instance = 0;


TheRing::TheRing() {
	cout << "Forging the The Ring!" << endl;
}

TheRing::~TheRing() {
	cout << "Destroying the The Ring!" << endl;
}


TheRing * TheRing::getInstanceOf() {
	if (_instance == 0){
		_instance = new TheRing();
	}
	return _instance;
}

