#include "command.h"

bool Command::isValidCommand(String initialCommand){
  // break string into From and To with indexOf("to"), and substr(); set to lowercase
  String commandLowerCase = initialCommand;
  commandLowerCase.toLowerCase();
  String toString = "";
  String fromString = "";
  const String MOVEFROM = "move from";
  const String TO = "to";
  int begin;
  int end;
  // find beginning and end of to first half of string
  begin = commandLowerCase.indexOf(MOVEFROM) + MOVEFROM.length();
  if(begin < 0){return false; }
  end = commandLowerCase.indexOf(TO,begin) - 1;
  if(end < 0){return false; }
  fromString = commandLowerCase.substring(begin,end);
  toString = commandLowerCase.substring(end + 1 + TO.length());
  // TODO: check if toString and fromString have a letter and number
  // TODO: Add subfunction to find letter and number (will be doing twice);
  // TODO: update return value
  return true;
};

Command::Command(String initialCommand){
// TODO: Check initialCommand string for fromX, fromY, toX, and toY values upon initialization
  commandString = initialCommand;
};

int Command::getFromX(){
  return fromX;
};

int Command::getFromY(){
  return fromY;
};

int Command::getToX(){
  return toX;
};

int Command::getToY(){
  return toY;
};
