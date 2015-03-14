/* 
 * File:   Board.cpp
 * Author: Chen
 * 
 * Created on March 3, 2015, 5:36 PM
 */

#include "Board.h"

Board::Board(int x, int y) {
    this->board.resize(x);
    for(int counter = 0;counter<x;counter++){
        this->board.at(counter).resize(y);
    }
    //Fill up board
    for(int counterX = 0;counterX < x;counterX++){
        for(int counterY = 0;counterY<y;counterY++){
            board[counterX][counterY] = 0;
        }
    }
}


Board::~Board() {
}




