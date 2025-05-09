#pragma once
#include <string>
#include "Piece.h"
#include "Pawn.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Board
{
public:
	std::string board = "00000000pppppppp00000000000000000000000000000000pppppppp00000000";
	
	//vector <pieces> piecesOnTheBoard
	
	//texture initialization here
	sf::Texture boardTexture;
	sf::Sprite boardSprite;

	sf::Texture wPawnTexture;

	//Piece initialization here
	Pawn bp1;
	Pawn bp2;
	Pawn bp3;
	Pawn bp4;
	Pawn bp5;
	Pawn bp6;
	Pawn bp7;
	Pawn bp8;
	
	//array of pieces currently on the board
	std::vector<Piece> piecesOnTheBoard;

	//pass all the textures when you init board
	Board(sf::Texture* boardTexture, sf::Texture* wPawnTexture /*more textures pls*/);
	~Board();
	void overwriteBoardSpace(int cord, char label);
	void displayBoard();
	void drawBoardToScreen(sf::RenderWindow* window);

	void initializeBoardFromArray(std::string boardString);
	int* turnArrayIndexIntoScreenCordinates(int index);
	void drawImageOnScreen(sf::RenderWindow* window, int x, int y, Piece piece);

private:

};