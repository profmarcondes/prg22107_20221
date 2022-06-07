/*
 * World.h
 *
 *  Created on: Apr 25, 2022
 *      Author: hugom
 */

#ifndef WORLD_H_
#define WORLD_H_

#include <iostream>
#include <string>
using namespace std;

#include "TheRing.h"

class World {
private:
	string _nome;
	//TheRing _precious;

public:
	World(string value);
	void sayHi();
	virtual ~World();

	string nome() { return _nome; }
	void nome(string value) { _nome = value; }

private:
	void sayIt(string what);

};

#endif /* WORLD_H_ */


