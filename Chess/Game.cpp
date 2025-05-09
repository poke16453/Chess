#include "Game.h"

Game::Game(sf::Texture* boardTexture, sf::Texture* wpawnTexture) : 
window(sf::VideoMode({640, 640}), "SFML works!"), 
board(boardTexture, wpawnTexture) {

}

Game::~Game() {

}

//drawLoopCoolStuff<-camel case
void Game::draw() {
	//call board draw thing and draw the board to the window

	
	int* cords;
	board.initializeBoardFromArray(board.board);


	while (window.isOpen())
	{
		window.clear();
		
		board.drawBoardToScreen(&window);

		for (int i = 0; i < board.piecesOnTheBoard.size(); i++)
		{
			cords = board.turnArrayIndexIntoScreenCordinates(board.piecesOnTheBoard[i].cord);
			board.drawImageOnScreen(&window, cords[0], cords[1], board.piecesOnTheBoard[i]);

		}

		//board.drawImageOnScreen(&window, cords[0], cords[1], board.bp1);
		//board.drawImageOnScreen(&window, cords[1], cords[0], board.bp2);
		//for (int i = 0; i < board.piecesOnTheBoard.size(); i++)
		//{
		//	cords = board.turnArrayIndexIntoScreenCordinates(i);
		//	board.drawImageOnScreen(&window, cords[0], cords[1], board.piecesOnTheBoard[i]);
		//}
		window.display();
	}
}