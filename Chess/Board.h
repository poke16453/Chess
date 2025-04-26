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
	
	//texture initialization here
	sf::Texture boardTexture;
	sf::Sprite boardSprite;

	sf::Texture wPawnTexture;

	//Piece initialization here
	Pawn wp1;

	//array of pieces currently on the board
	std::vector<Piece> piecesOnTheBoard;

public:
	//pass all the textures when you init board
	Board(sf::Texture* boardTexture, sf::Texture* wPawnTexture /*more textures pls*/);
	~Board();
	void overwriteBoardSpace(int cord, char label);
	void displayBoard();
	void drawBoardToScreen(sf::RenderWindow* window);


private:

};