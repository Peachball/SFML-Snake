/* 
 * File:   Frame.h
 * Author: Chen
 *
 * Created on March 7, 2015, 8:54 PM
 */

#ifndef FRAME_H
#define	FRAME_H
#include <ncurses.h>
#include <iostream>

class Frame {
public:
    Frame();
    Frame(const Frame& orig);
    virtual ~Frame();
    void close();
private:

};

#endif	/* FRAME_H */

