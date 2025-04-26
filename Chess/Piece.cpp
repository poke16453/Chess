#include "Piece.h"
Piece::Piece(char label, int cord, sf::Texture pieceTexture) : pieceSprite(pieceTexture)
{
	this->label = label;
	this->cord = cord;
	this->preformedSpecialMove = false;
	this->onFirstTurn = true;
}

int* Piece::getValidMoveLocations() {
	return nullptr;
}