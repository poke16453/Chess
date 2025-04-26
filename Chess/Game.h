#pragma once
#include <SFML/Graphics.hpp>
#include "Board.h"

class Game
{
public:
	Game();
	sf::RenderWindow window; 

	//we need to init an instance of board here
	Board Board;

	//whole game draw loop
	void draw();


private:

};