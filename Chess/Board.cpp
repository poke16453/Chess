#include "Board.h"

Board::Board(sf::Texture* boardTexture, sf::Texture* wPawnTexture) : 
boardTexture(*boardTexture),
boardSprite(*boardTexture),
wPawnTexture(*wPawnTexture), 
wp1(48, 'p', wPawnTexture) {

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
