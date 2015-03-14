#pragma once
#include <vector>
#include "Frame.h"
#include <stdlib.h>
#include <time.h>

class Board
{
public:
	const int boardx = 800;
	const int boardy = 800;
	Board(int x, int y);
	~Board();
	bool set(int x, int y, int value);
	int get(int x, int y);
	void draw();
	bool getEvent(sf::Event &buffer);
	bool isOpen();
	void close();
	bool nextIteration();
	void setDirection(int direction);
	void endGame(bool win);
	Frame frame;

private:
	
	bool cs;
	std::vector<std::vector<int>> board;
	int getXSize();
	int getYSize();
	struct Coord{
		int x;
		int y;
		int direction;
		int length;
	}snake,apple;
	void generateApple();
};

