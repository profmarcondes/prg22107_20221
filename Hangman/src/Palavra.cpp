/*
 * Palavra.cpp
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#include "Palavra.h"

Palavra::Palavra(string p, string d): _pontuacao(p.size()), _dica(d){
	for( string::iterator it=p.begin(); it != p.end(); it++ ){
		_palavra.push_back(Letra(*it));
	}
}

void Palavra::apresentaPalavra(){
	cout << "A palavra é: " << *this << " (dica: " << _dica << ", " << _palavra.size() << " letras )" << endl;
}

bool Palavra::verificaLetra(Letra l){
	vector<Letra>::iterator it;
	it = find(_palavra.begin(), _palavra.end(), l);
	if( it != _palavra.end()){
		while(it != _palavra.end()){
			(*it).visivel(true);
			it = find(++it, _palavra.end(), l);
		}
		return true;
	} else {
		return false;
	}
}

bool Palavra::completa(){
	vector<Letra>::iterator it;
	for(it=_palavra.begin(); it != _palavra.end(); it++){
		if(!(*it).visivel()){
			return false;
		}
	}
	return true;
}

ostream& operator<<(ostream &output, const Palavra &p){
	for( vector<Letra>::const_iterator it=p._palavra.begin(); it!=p._palavra.end(); it++){
		output << *it;
	}
	return output;
}

Palavra::~Palavra() {
	// TODO Auto-generated destructor stub
}




















