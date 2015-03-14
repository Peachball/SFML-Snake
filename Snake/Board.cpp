#include "Board.h"

Board::Board(int x, int y)
{
	board.resize(x);
	for (int counter = 0; counter < x; counter++){
		board[counter].resize(y);
	}
	frame.frame.setSize(sf::Vector2u(boardx, boardy));
	frame.frame.setFramerateLimit(10);
	snake.x = x / 2;
	snake.y = y / 2;
	board[snake.x][snake.y] = 1;
	snake.direction = 1;
	snake.length = 1;
	generateApple();
	cs = false;
}

int Board::getXSize(){
	return board.size();
}

int Board::getYSize(){
	return board[0].size();
}

bool Board::set(int x, int y, int value){
	if (x>getXSize() || x<0 || y>getYSize() || y < 0){
		return false;
	}
	board[x][y] = value;
	return true;
}

int Board::get(int x, int y){
	return board[x][y];
}

void Board::draw(){
	frame.clear();
	for (int counterx = 0; counterx < getXSize(); counterx++){
		for (int countery = 0; countery < getYSize(); countery++){
			if (get(counterx, countery) > 0){
				board[counterx][countery] -= 1;
				frame.setPenColor(sf::Color::White);
				frame.drawRectangle(boardx / getXSize(), boardy / getYSize(), boardx / getXSize()*counterx, boardy / getYSize()*(countery+1));
			}
			else if (get(counterx, countery) < 0){
				frame.setPenColor(sf::Color::Red);
				frame.drawRectangle(boardx / getXSize(), boardy / getYSize(), boardx / getXSize()*counterx, boardy / getYSize()*(countery+1) );
			}
		}
	}
	cs = true;
	frame.display();
}

bool Board::nextIteration(){
	switch (snake.direction){
	case 1:
		snake.y++;
		if (snake.y >= getYSize()){
			snake.y = 0;
		}
		break;
	case 2:
		snake.x++;
		if (snake.x >= getXSize()){
			snake.x = 0;
		}
		break;
	case 3:
		snake.y--;
		if (snake.y < 0){
			snake.y = getYSize() - 1;
		}
		break;
	case 4:
		snake.x--;
		if (snake.x < 0){
			snake.x = getXSize() - 1;
		}
		break;
	}
	if (board[snake.x][snake.y] > 0){
		endGame(false);
		return false;
	}
	else if (board[snake.x][snake.y] < 0){
		snake.length++;
		generateApple();
	}
	else if (snake.length == getXSize()*getYSize()){
		endGame(true);
	}
	board[snake.x][snake.y] = snake.length;
	return true;
}

void Board::endGame(bool win){
	sf::Text buffer;
	if (win){
		buffer.setString("YOU WIN");
	}
	else{
		buffer.setString("YOU LOST");
	}
	frame.frame.draw(buffer);
	sf::Event eevent;
	while (eevent.MouseButtonPressed == sf::Mouse::Left){
		frame.getEvent(eevent);
	}
	for (int counterX = 0; counterX < getXSize(); counterX++){
		for (int counterY = 0; counterY < getYSize(); counterY++){
			board[counterX][counterY] = 0;
		}
	}
	snake.length = 1;
	snake.x = getXSize() / 2;
	snake.y = getYSize() / 2;
	snake.direction = 1;
	generateApple();
}
void Board::setDirection(int direction){
	if (snake.direction % 2 != direction % 2&&cs){
		snake.direction = direction;
		cs = false;
	}
}

bool Board::getEvent(sf::Event &buffer){
	return frame.getEvent(buffer);
}
bool Board::isOpen(){
	return frame.isOpen();
}
void Board::close(){
	frame.close();
}

void Board::generateApple(){
	srand(time(NULL));
	int randomNum = (int)(rand() % (getXSize()*getYSize() - snake.length));
	bool status = false;
	for (int counterX = 0; counterX < getXSize(); counterX++) {
		for (int counterY = 0; counterY < getYSize(); counterY++) {
			if (board[counterY][counterX] > 0) {
				continue;
			}
			randomNum--;
			if (randomNum <= 0 && !(board[counterY][counterX] > 0)) {
				apple.y = counterY;
				apple.x = counterX;
				status = true;
				break;
			}
		}
		if (status) {
			break;
		}
		if (counterX == getXSize() - 1) {
			counterX = 0;
		}
	}
	board[apple.x][apple.y] = -1;
}

Board::~Board()
{
}
