//============================================================================
// Name        : HelloOO.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "World.h"

void criarMundo();

World g_obj("Global World");

int main() {
	cout << "Entrando na main! " << endl;

	criarMundo();

	cout << "Finalizando a main! " << endl;
	return 0;
}

void criarMundo(){

	World * obj;

	obj = new World("Local World");


	TheRing * ptr = TheRing::getInstanceOf();

	ptr->sayIt();

	obj->sayHi();

	obj->nome("Mordor");

	cout << "O novo mundo é " << obj->nome() << endl;

	obj->sayHi();

	delete obj;

}




























