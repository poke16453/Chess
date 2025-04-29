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

	while (window.isOpen())
	{
		window.clear();
		board.drawBoardToScreen(&window);
		window.display();
	}
}