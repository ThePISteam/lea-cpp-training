#include <stdio.h>
#include "Board.h"

int main()
{
  Board myBoard = Board(5, 5);
  myBoard.print();

  return 0;
}