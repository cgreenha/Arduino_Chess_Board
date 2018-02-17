#ifndef _SQUARE_H
#define _SQUARE_H

#include "Arduino.h"
//using namespace std;

enum class Piece {None, King, Queen, Rook, Bishop, Knight, Pawn};
enum class Team {None, White, Black};

class Square{
private:
  Piece pieceOnSquare;
  Team teamOnSquare;
public:
  Square();
  String getPiece();
  void setPiece(String sPiece);
  String getTeam();
  void setTeam(String sTeam);
};
#endif