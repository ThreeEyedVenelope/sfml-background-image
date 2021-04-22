#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Blue Zone", sf::Style::Fullscreen);
	
	sf::Texture textureBlueZone;
	textureBlueZone.loadFromFile("graphics/blue-zone.jpg");
	sf::Sprite spriteBG;
	spriteBG.setTexture(textureBlueZone);
	spriteBG.setPosition(0, 0);

	while (window.isOpen()) {
		sf::Event event; 
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				window.close();
			}
		}

		window.clear();
		window.draw(spriteBG);
		window.display();
	}

	return 0;
}