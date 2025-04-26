#pragma once
#include <SFML/Graphics.hpp>

class Piece
{
public:
	Piece();
	Piece(int cord);
	
	//label is string for the board
	char label;
	int cord = -1;
	bool preformedSpecialMove = false;
	bool onFirstTurn = true;

	//a fuction that returns an array of valid locations
	//the piece can move to
	virtual int* getValidMoveLocations();
	

private:

};