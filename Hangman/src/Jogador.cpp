/*
 * Jogador.cpp
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#include "Jogador.h"

Letra Jogador::palpite(){
	string input;
	cout << "Diga o seu palpite: ";
	getline(cin,input);
	return Letra(input[0]);
}

Jogador::~Jogador() {
	// TODO Auto-generated destructor stub
}

