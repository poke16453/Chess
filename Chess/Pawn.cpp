#include "Pawn.h"
Pawn::Pawn(int cord, char label, sf::Texture* pawnTexture) : 
Piece(cord, label, pawnTexture)
{

}


//Still need to code in el crossant
int* Pawn::getValidMoveLocations() {
	// Take in first move bool and P/p
	// if first move only add one move too array
	// if black P + 8, if white - 8
	int* validMoves = new int[2];

	validMoves[0] = -1;
	int Cord = cord;

	if (label == 'p') {
		if (onFirstTurn) {
			for (int i = 0; i < 2; i++) {
				validMoves[i] = Cord - 8;
				Cord = Cord - 8;
			}
		}
		else {
			validMoves[0] = cord - 8;
		}
	}
	else {
		if (onFirstTurn) {
			for (int i = 0; i < 2; i++) {
				validMoves[i] = Cord + 8;
				Cord = Cord + 8;
			}
		}
		else {
			validMoves[0] = cord + 8;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		if (validMoves[i] < 0 && validMoves[i] > 64) {
			validMoves[i] = -1;
		}
	}
	
	return validMoves;
}