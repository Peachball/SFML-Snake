#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <iostream>
#include <thread>
#include <chrono>

class Frame
{
public:
	Frame(std::string title);
	Frame();
	Frame(int x, int y);
	~Frame();
	bool isOpen();
	void setPenColor(sf::Color color);
	void drawRectangle(double xsize, double ysize, int xcoord, int ycoord);
	void display();
	bool getEvent(sf::Event &buffer);
	void close();
	sf::RenderWindow frame;
	void clear();

private:
	
	sf::Color pen;
	std::vector<sf::Event> events;
	std::thread * listener;
};

