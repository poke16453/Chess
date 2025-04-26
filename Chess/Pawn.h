#pragma once
#include "Piece.h"

class Pawn: public Piece
{
public:
	Pawn();
	Pawn(int cord, char label);
	int* getValidMoveLocations() override;

	sf::Texture pawnTexture;
	sf::Sprite pawnSprite;

private:

};

