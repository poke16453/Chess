#pragma once
#include <SFML/Graphics.hpp>

class Piece
{
public:
	Piece(char label, int cord, sf::Texture* pieceTexture);
	
	//label is string for the board
	char label;
	int cord;
	bool preformedSpecialMove = false;
	bool onFirstTurn = true;

	//a function that returns an array of valid locations
	//the piece can move to
	virtual int* getValidMoveLocations();

	sf::Texture pieceTexture;
	sf::Sprite pieceSprite;
	

private:

};