#include "Arduino.h"
#include "square.h"
#include "board.h"


Board::Board(){
  for(int y=0; y<8; y++){
    squares[1][y].setPiece("Pawn");
    squares[1][y].setTeam("White");
    squares[6][y].setPiece("Pawn");
    squares[6][y].setTeam("Black");
    squares[0][y].setTeam("White");
    squares[7][y].setTeam("Black");
    for(int x=2; x<6; x++){
      squares[x][y].setPiece("None");
      squares[x][y].setTeam("None");
    }
  }
  squares[0][0].setPiece("Rook");
  squares[0][1].setPiece("Knight");
  squares[0][2].setPiece("Bishop");
  squares[0][3].setPiece("King");
  squares[0][4].setPiece("Queen");
  squares[0][5].setPiece("Bishop");
  squares[0][6].setPiece("Knight");
  squares[0][7].setPiece("Rook");
  squares[7][0].setPiece("Rook");
  squares[7][1].setPiece("Knight");
  squares[7][2].setPiece("Bishop");
  squares[7][3].setPiece("Queen");
  squares[7][4].setPiece("King");
  squares[7][5].setPiece("Bishop");
  squares[7][6].setPiece("Knight");
  squares[7][7].setPiece("Rook");
}
String Board::getPiece(int x, int y){
  return squares[x][y].getPiece();
}
String Board::getTeam(int x, int y){
  return squares[x][y].getTeam();
}
void Board::move(int xcurr, int ycurr, int xnew, int ynew){
  squares[xnew][ynew].setPiece(squares[xcurr][ycurr].getPiece());
  squares[xnew][ynew].setTeam(squares[xcurr][ycurr].getTeam());
  squares[xcurr][ycurr].setPiece("None");
  squares[xcurr][ycurr].setTeam("None");
}