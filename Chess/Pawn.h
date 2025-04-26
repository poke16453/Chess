#pragma once
#include "Piece.h"

class Pawn: public Piece
{
public:
	Pawn();
	Pawn(int cord, char label, sf::Texture* pieceTexture);
	int* getValidMoveLocations() override;

private:

};

