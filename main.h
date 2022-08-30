#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

struct player {
  int row;
  int col;
  short previousBackground[8*8];
};

struct enemy {
  int row;
  int col;
  int velocity;
  short previousBackground[6*6];
};

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
