#pragma once

#include"SFML\Graphics.hpp"
#include <vector>

class SpriteManager{
	sf::Font font;
	int progress, time;
public:
	SpriteManager();

	sf::Sprite makeSprite(sf::String filepath);
	void draw(sf::Sprite sprite, float x, float y, sf::RenderWindow &window);
	void draw (sf::Text button_text, sf::RenderWindow &window);
};