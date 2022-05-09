/*
 * World.cpp
 *
 *  Created on: Apr 25, 2022
 *      Author: hugom
 */

#include "World.h"


World::World(string value) {
	_nome = value;
	// TODO Auto-generated constructor stub
	cout << "Hello " << _nome << "!" << endl;

}

void World::sayHi() {
	cout << "Hi " << _nome << "!" << endl;
}

World::~World() {
	// TODO Auto-generated destructor stub
	cout << "Goodbye " << _nome << "!" << endl;
}

