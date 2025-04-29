// Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//display the board
//display pieces
//have a game



//4/10/25 - Implemented basic pawn class and some of the foundations
#include <iostream>
#include "Game.h"

//textures initialization
sf::Texture bPawnTexture = sf::Texture("C:\\Users\\ander\\Desktop\\black-pawn-d7aeaeC-600.jpg");
sf::Texture boardTexture = sf::Texture("C:\\Users\\ander\\Desktop\\black-pawn-d7aeaeC-600.jpg");

Game game = Game(&boardTexture, &bPawnTexture);

int main()
{
    game.draw();
    //for (int i = 0; i < 7; i++) {
    //    //the variable name of an array in C++ is a POINTER to the first element
    //    board.overwriteBoardSpace(game.piecesOnTheBoard[i]->cord, game.piecesOnTheBoard[i]->label);
    //}

    //game.displayBoard();
    //printf("\n");

    //int* validSpaces = game.piecesOnTheBoard[1]->getValidMoveLocations();
    //
    //game.overwriteBoardSpace(validSpaces[0], 'x');
    //game.overwriteBoardSpace(validSpaces[1], 'x');
    //game.displayBoard();
    ////need a way to get a position of the for "letter, number" from a array index
    ////for (int i = 0; i < 144; i++) {
    ////    int num;
    ////    int Char; 
    ////    // b 3 
    ////    // 
    ////    if ()
    ////}
    return 0;
}

