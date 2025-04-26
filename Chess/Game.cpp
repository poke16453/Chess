#include "Game.h"

Game::Game() : window(sf::VideoMode({640, 640}), "SFML works!") {

}


//drawLoopCoolStuff<-camel case
void Game::draw() {
	

	//call board draw thing and draw the board to the window
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		window.clear();
		Board.drawBoardToScreen(&window);
		window.draw();
		window.display();
	}
}