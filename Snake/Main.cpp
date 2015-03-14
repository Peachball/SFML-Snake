#include <iostream>
#include "Board.h"
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
int main(){
	Board frame(10,10);
	bool alive = true;
	frame.frame.setPenColor(sf::Color::Blue);
	frame.frame.drawRectangle(10, 10, 10, 10);
	while (frame.isOpen()){

		//Event checking loop
		sf::Event buffer;
		while (frame.getEvent(buffer)){
			frame.frame.setPenColor(sf::Color::Red);
			frame.frame.drawRectangle(10, 10, 10, 10);
			switch (buffer.type){
				case sf::Event::Closed:
					frame.close();
					break;

				//Key Input reader
				case sf::Event::KeyPressed:
					switch (buffer.key.code){
						case sf::Keyboard::Up:
							frame.setDirection(1);
							break;
						case sf::Keyboard::Right:
							frame.setDirection(2);
							break;
						case sf::Keyboard::Down:
							frame.setDirection(3);
							break;
						case sf::Keyboard::Left:
							frame.setDirection(4);
							break;
					}
					break;
			}
			
		}
		alive = frame.nextIteration();
		frame.draw();
		
		if (!alive){
			bool wait = true;
			while (wait){
				sf::Event buffer2;
				while (frame.getEvent(buffer2))
				{
					if (buffer2.mouseButton.button == sf::Mouse::Left){
						wait = false;
					}
				}
			}
		}
	}
}