#include "Cell.h"
#include <iostream>

class Board
{
private:
    int _length;
    int _hight;
    Cell** _board;

public:
    Board(int length, int hight);
    ~Board();
    int insert(int col, int color);
    void print();
};


    
