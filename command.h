#ifndef _COMMAND_H
#define _COMMAND_H

#include "Arduino.h"

class Command{
private:
  String commandString = "";
  int fromX = -1;
  int fromY = -1;
  int toX = -1;
  int toY = -1;
  bool isValidCommand(String initialCommand);
// TODO: Add void setToAndFrom()
public:
  Command(String initialCommand);
  int getFromX(void);
  int getFromY(void);
  int getToX(void);
  int getToY(void);
};

#endif