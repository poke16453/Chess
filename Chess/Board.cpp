#include "Board.h"

Board::Board(sf::Texture* boardTexture, sf::Texture* wPawnTexture) : 
boardTexture(*boardTexture),
boardSprite(*boardTexture),
wPawnTexture(*wPawnTexture), 
bp1(48, 'p', wPawnTexture),
bp2(48, 'p', wPawnTexture),
bp3(48, 'p', wPawnTexture),
bp4(48, 'p', wPawnTexture),
bp5(48, 'p', wPawnTexture),
bp6(48, 'p', wPawnTexture),
bp7(48, 'p', wPawnTexture),
bp8(48, 'p', wPawnTexture) {

	//pieces definition
	//wp1 = Pawn(48, 'p', &wPawnTexture);
};


Board::~Board() {

};

//this function overwrites a location on the board with the given char
void Board::overwriteBoardSpace(int cord, char label) {
	board[cord] = label;
}


void Board::displayBoard() {
	//1 2 3 4 5 6 7 8
	// 0 0 0 0 0 
	//B 0 0 0 0 0 ...
	//C ...

	//white pieces are capitalized
	//8 R N B K Q B N R 
	//7 P P P P P P P P 
	//6 0 0 0 0 0 0 0 0 
	//5 0 0 0 0 0 0 0 0 
	//4 0 0 0 0 0 0 0 0 
	//3 0 0 0 0 0 0 0 0
	//2 p p p p p p p p 
	//1 r n b k q b n R 
	//  a b c d e f g h
	int j = 0;
	for (int i = 0; i < board.length(); i++) {
		printf("%c ", board[i]);
		j++;
		if (j == 8) {
			printf("\n");
			j = 0;
		}
	}
}

void Board::drawBoardToScreen(sf::RenderWindow* window) {
	window->draw(boardSprite);
}

//$$$ULTIMATE SWAG MONEY GOAL$$$:
//give a board string -> print out all the pieces on the screen
//if we have a string,
//I want to have a black pawn with p and a white pawn for P

//take an array,
//for loop it,
//(just want to set it up not move anything)

/// <summary>
/// takes in a string of a board you want and initializes pieces for that board
/// </summary>
/// <param name="boardString"></param>
void Board::initializeBoardFromArray(std::string boardString) {

	for (int i = 0; i < boardString.size(); i++) {
		if (boardString[i] == 'p') {
			piecesOnTheBoard.push_back(Pawn('p', i, & wPawnTexture));
		}
	}
}

/// <summary>
/// take in an array index and determines the cordinates of the piece on the screen
/// </summary>
int* Board::turnArrayIndexIntoScreenCordinates(int index) {
	//0->63
	//spit out (x, y)
	
	int x = 0;
	int y = 0;

	for (int i = 0; i < 63; i++) {
		
		if (i == index) {
			break;
		}
		
		x += 80;
		
		if (x > 560) {
			x = 0;
			y += 80;
		}
	}
	int* cords = new int[2];
	cords[0] = x;
	cords[1] = y;
	return cords;
}

//draw image on board square???
void Board::drawImageOnScreen(sf::RenderWindow* window, int x, int y, Piece piece) {
	piece.pieceSprite.setPosition({(float)x, (float)y});

	window->draw(piece.pieceSprite);
}
