/* 
 * File:   Board.h
 * Author: Chen
 *
 * Created on March 3, 2015, 5:36 PM
 */

#ifndef BOARD_H
#define	BOARD_H
#include <vector>
class Board {
public:
    int getXSize();
    int getYSize();
    Board(int x, int y);
    virtual ~Board();
private:
    std::vector< std::vector<int> > board;
};

#endif	/* BOARD_H */

