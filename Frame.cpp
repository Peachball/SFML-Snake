/* 
 * File:   Frame.cpp
 * Author: Chen
 * 
 * Created on March 7, 2015, 8:54 PM
 */

#include "Frame.h"


Frame::Frame() {
    initscr();
    raw();
    noecho();
    refresh();
    getch();
}



void Frame::close(){
    endwin();
}