#pragma once
#include <SFML/Graphics.hpp>
#include "Board.h"

class Game
{
public:
	Game(sf::Texture* boardTexture, sf::Texture* wpawnTexture);
	~Game();
	sf::RenderWindow window; 

	//we need to init an instance of board here
	Board board;

	//whole game draw loop
	void draw();


private:

};