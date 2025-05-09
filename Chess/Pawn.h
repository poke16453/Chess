#pragma once
#include "Piece.h"

class Pawn: public Piece
{
public:
	Pawn();
	//gerald the first pawn 5/8/25
	Pawn(int cord, char label, sf::Texture* pieceTexture);
	int* getValidMoveLocations() override;

private:

};

