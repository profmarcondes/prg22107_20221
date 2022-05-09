/*
 * Jogador.h
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#ifndef JOGADOR_H_
#define JOGADOR_H_

#include "Letra.h"
#include <iostream>
#include <string>
using namespace std;

class Jogador {
public:
	Jogador(string n): _nome(n), _vitorias(0), _jogadas(0) {}

	Letra palpite();

	virtual ~Jogador();

private:
	string  _nome;
	int 	_vitorias;
	int 	_jogadas;

};

#endif /* JOGADOR_H_ */
