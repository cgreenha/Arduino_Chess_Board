#ifndef _GAME_H
#define _GAME_H

#include "board.h"

enum class Turn {White, Black};

class Game{
private:
  Board gameBoard;
  Turn turn;
public:
  Game();
  // check if move is valid
  bool moveIsValid(int xcurr, int ycurr, int xnew, int ynew);
  // update board only
  void moveSquares(int xcurr, int ycurr, int xnew, int ynew);
  // checks if game is over
  bool isOver();
};

#endif