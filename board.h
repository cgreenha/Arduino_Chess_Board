#ifndef _BOARD_H
#define _BOARD_H

#include "Arduino.h"
#include "square.h"

class Board{
private:
  Square squares[8][8];
public:
  Board();
  String getPiece(int x, int y);
  String getTeam(int x, int y);
  void move(int xcurr, int ycurr, int xnew, int ynew);
};
#endif