#pragma once
#include <string>
#include "Piece.h"
#include "Pawn.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Board
{
private:
	std::string board = "0000000000000000000000000000000000000000000000000000000000000000";
	
	//vector <pieces> piecesOnTheBoard
	
	Pawn wp1;



	//array of pieces currently on the board
	std::vector<Piece> piecesOnTheBoard;

	sf::Texture boardTexture;
	sf::Sprite boardSprite;


public:
	Board();
	~Board();
	void overwriteBoardSpace(int cord, char label);
	void displayBoard();
	void drawBoardToScreen(sf::RenderWindow* window);


private:

};