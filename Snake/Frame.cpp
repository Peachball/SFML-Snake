#include "Frame.h"
#include "Defaults.h"
#include <string>

#define DEFAULT_TITLE "NOT A SNAKE"

Frame::Frame(std::string title)
{
	frame.create(sf::VideoMode(800, 800), "Something something");
	pen = COLOR::WHITE;

}

Frame::Frame(){
	frame.create(sf::VideoMode(800, 800), "Something else"); pen = COLOR::WHITE;
}

Frame::Frame(int x, int y){
	frame.create(sf::VideoMode(x, y), "Other constructor");
	pen = sf::Color::White;
}

Frame::~Frame()
{
	frame.close();
	std::this_thread::sleep_for(std::chrono::milliseconds(20));
}

void Frame::setPenColor(sf::Color color){
	pen = color;
}

//Note, this literally draws whatever based on pixels, and not by a scale
//like standard draw
void Frame::drawRectangle(double xsize, double ysize, int xcoord, int ycoord){
	sf::RectangleShape buffer(sf::Vector2f(xsize, ysize));
	buffer.setFillColor(pen);
	buffer.setPosition(xcoord, frame.getSize().y-ycoord);
	frame.draw(buffer);
}

void Frame::display(){
	frame.display();
}

void Frame::clear(){
	frame.clear(COLOR::BLACK);
}

bool Frame::isOpen(){
	return frame.isOpen();
}

//Add event stuff...
bool Frame::getEvent(sf::Event &buffer){
	return frame.pollEvent(buffer);
}

void Frame::close(){
	frame.close();
}