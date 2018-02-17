#include "game.h"

// Private variables:
//  Board gameBoard;
//  Turn turn;

// functions:
Game::Game();
// check if move is valid
bool Game::moveIsValid(int xcurr, int ycurr, int xnew, int ynew){
// TODO: check for which piece is located at origin
// TODO: check for which piece is located at target destination
// TODO: check if motion of piece is valid
  return true;
};
// update board only
void Game::moveSquares(int xcurr, int ycurr, int xnew, int ynew){
  if(moveIsValid(xcurr,ycurr,xnew,ynew)){
    gameBoard.move(xcurr, ycurr, xnew, ynew);
  }
};
// checks if game is over
bool Game::isOver(){
  bool wFlag = false;
  bool bFlag = false;
  for(int x=0; x<8; x++){
    for(int y = 0; y<8; y++){
      if(gameBoard.getPiece(x,y).equals("King")){
        if(gameBoard.getTeam(x,y).equals("White")){
          wFlag = true;
        }else if(gameBoard.getTeam(x,y).equals("Black")){
          bFlag = true;
        }
      }
    }
  }
  return !(wFlag&&bFlag);
};