// Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//display the board
//display pieces
//have a game



//4/10/25 - Implemented basic pawn class and some of the foundations
#include <iostream>
#include "Game.h"

//textures initialization
sf::Texture bPawnTexture = sf::Texture("C:\\Users\\jacob\\Desktop\\ChessRes\\Pawn.png");
sf::Texture boardTexture = sf::Texture("C:\\Users\\jacob\\Desktop\\ChessRes\\ChessBoard.png");

Game game = Game(&boardTexture, &bPawnTexture);


//OBJECTIVES FOR CODING SESSION 4/29/25
//1. figure out how to display a image on a square on the chess board
//2. figure out how to get the users clicks

int main()
{
    //bool check = bPawnTexture.loadFromFile("C:\\Users\\jacob\\Desktop\\ChessRes\\Pawn.png");
    //game.board.drawImageOnScreen(&game.window, cords[0], cords[1], game.board.boardSprite);
    game.draw();
    //printf("%d %d\n", cords[0], cords[1]);

    //game.draw();
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

