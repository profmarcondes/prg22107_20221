//============================================================================
// Name        : DiceGame.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Die {
private:
	int _faceValue;

public:
	Die(){
		cout << "Creating Dice (" << this << ")" << endl;
		srand(time(NULL));
		roll();
	}
	int getFaceValue() { return this->_faceValue; }
	void roll(){ _faceValue = (rand() % 6) + 1; }
};

class DiceGame {
private:
	Die _die1;
	Die _die2;

public:
	bool play();
};

bool DiceGame::play() {
	_die1.roll();
	int fv1 = _die1.getFaceValue();
	_die2.roll();
	int fv2 = _die2.getFaceValue();

	cout << "Die 1 value: " << fv1 << ", Die 2 value: " << fv2 << endl;

	if ( (fv1+fv2) == 7 ) {
		return true;
	} else {
		return false;
	}
}


int main() {
	cout << "Welcome to DiceGame" << endl; // prints !!!Hello World!!!
	DiceGame game;
	int won = 0;
	int lose = 0;

	for(int i = 0; i < 1000; i++){
		if(game.play()){
			won++;
		} else {
			lose++;
		}
	}

	cout << "Won " << won << " times, Lose " << lose << " times" << endl;
	cout << "Win percentage: " << won/1000.0 << endl;

	return 0;
}































