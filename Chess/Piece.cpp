#include "Piece.h"
Piece::Piece()
{

}

Piece::Piece(int cord)
{
	//this->pieceTexture = sf::Texture("C:\\Users\\jacob\\Desktop\\ChessRes\\ChessBoard.png");
	//this->pieceSprite = sf::Sprite(pieceTexture);
	this->cord = cord;
}

int* Piece::getValidMoveLocations() {
	int test = -1;
	return &test;
}