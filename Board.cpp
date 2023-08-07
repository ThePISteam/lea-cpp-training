#include "Board.h"

Board::Board(int length, int hight)
    // Creating a board, a 2D array of cells
{
    _length = length;
    _hight = hight;
    _board = new Cell* [_length];    
    for (int i = 0; i < _length; i ++)
    {
        _board[i] = new Cell[_hight];
    }
}
    
Board::~Board()
{
    delete[] _board;
}


void Board::print()
{
    for (int i = 0; i < _length; i ++)
    {
        for (int j = 0; j < _hight; j++)
        {
            std::cout<< _board[i][j].color;
        }
    }
}


