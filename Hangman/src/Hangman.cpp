//============================================================================
// Name        : Hangman.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Jogador.h"
#include "Letra.h"
#include "Palavra.h"
#include "Vocabulario.h"

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	/*
	Letra obj('H');
	cout << "A letra é: " << obj << endl;
	obj.visivel(true);
	cout << "A letra é: " << obj << endl;

	Palavra obj2("Banana","fruta");
	obj2.apresentaPalavra();
	if(obj2.verificaLetra(Letra('a'))){
		cout << "Encontrou a letra!" << endl;
	} else {
		cout << "Não encontrou a letra!" << endl;
	}
	obj2.apresentaPalavra();
	*/

	Jogador _player("Hugo");
	Vocabulario _dic;
	Palavra p = _dic.escolhePalavra();
	int erros = 0;

	while(!p.completa() && erros < 5){
		p.apresentaPalavra();
		if(!p.verificaLetra( _player.palpite() )){
			erros++;
		}
	}

	if(p.completa()){
		cout << "Você ganhou!!!" << endl;
	} else {
		cout << "Você perdeu!!!" << endl;
	}


	return 0;
}


















