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

class World {

	string _nome;

public:
	World(string value);

	void sayHi();

	virtual ~World();
};

#endif /* WORLD_H_ */
