/*
 * Letra.h
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#ifndef LETRA_H_
#define LETRA_H_

#include <iostream>
using namespace std;

class Letra {
public:
	Letra(char a): _valor(a), _visivel(false) { }

	bool visivel(){ return _visivel; }
	void visivel(bool v){ _visivel = v; }

	bool operator==(const Letra &l) { return (tolower(_valor) == tolower(l._valor) ); }
	friend ostream& operator<<(ostream &output, const Letra &l){
		(l._visivel) ? output << l._valor : output << "-";
		return output;
	}

private:
	char _valor;
	bool _visivel;

};

#endif /* LETRA_H_ */










