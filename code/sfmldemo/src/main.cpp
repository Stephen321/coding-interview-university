//////////////////////////////////////////////////////////// 
// Headers 
//////////////////////////////////////////////////////////// 

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 
#pragma comment(lib,"opengl32.lib") 
#pragma comment(lib,"glu32.lib") 

#include <iostream> 
#include "SFML\Graphics\RenderWindow.hpp"
#include "SFML\Window\Event.hpp"

int main() {
	srand((unsigned int)time(NULL));
	sf::RenderWindow window(sf::VideoMode(1280, 720, 32), "sfmldemo");

	bool running = true;

	while (running) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed:
				running = false;
				break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape)
					running = false;
				break;
			default:
				break;
			}
		}

		window.clear(sf::Color(128,170,128));

		window.display();
	}
	return EXIT_SUCCESS;
}