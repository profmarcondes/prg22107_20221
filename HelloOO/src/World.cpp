/*
 * World.cpp
 *
 *  Created on: Apr 25, 2022
 *      Author: hugom
 */

#include "World.h"


World::World(string value) {
	_nome = value;
	sayIt("Hello");
}

void World::sayHi() {
	sayIt("Hi");
}

World::~World() {
	sayIt("Goodbye");
}

void World::sayIt(string what){
	cout << what << " " << _nome << "!" << endl;
}
