#include "Arduino.h"
#include "square.h"
using namespace std;

Square::Square(){
  pieceOnSquare = Piece::None;
  teamOnSquare = Team::None;
}
String Square::getPiece(){
  if(pieceOnSquare == Piece::None){
    return "None";
  }else if(pieceOnSquare == Piece::King){
    return "King";
  }else if(pieceOnSquare == Piece::Queen){
    return "Queen";
  }else if(pieceOnSquare == Piece::Rook){
    return "Rook";
  }else if(pieceOnSquare == Piece::Bishop){
    return "Bishop";
  }else if(pieceOnSquare == Piece::Knight){
    return "Knight";
  }else if(pieceOnSquare == Piece::Pawn){
    return "Pawn";
  }else{
    // TODO: Create error case
  }
}
void Square::setPiece(String sPiece){
  if(sPiece.equals("None")){
    pieceOnSquare = Piece::None;
  }else if(sPiece.equals("King")){
    pieceOnSquare = Piece::King;
  }else if(sPiece.equals("Queen")){
    pieceOnSquare = Piece::Queen;
  }else if(sPiece.equals("Rook")){
    pieceOnSquare = Piece::Rook;
  }else if(sPiece.equals("Bishop")){
    pieceOnSquare = Piece::Bishop;
  }else if(sPiece.equals("Knight")){
    pieceOnSquare = Piece::Knight;
  }else if(sPiece.equals("Pawn")){
    pieceOnSquare = Piece::Pawn;
  }else{
    // TODO: Create error case
  }
}
String Square::getTeam(){
  if(teamOnSquare == Team::White){
    return "White";
  }else if(teamOnSquare == Team::Black){
    return "Black";
  }else if(teamOnSquare == Team::None){
    return "None";
  }
}
void Square::setTeam(String sTeam){
  if(sTeam.equals("White")){
    teamOnSquare = Team::White;
  }else if(sTeam.equals("Black")){
    teamOnSquare = Team::Black;
  }else if(sTeam.equals("None")){
    teamOnSquare = Team::None;
  }
  else{
    // TODO: Create error case
  }
}