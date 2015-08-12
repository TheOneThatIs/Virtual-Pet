#pragma once

#include<SFML\Graphics.hpp>
#include "SpriteManager.h"

class Button{

	sf::Text text;

	SpriteManager sprite_mangr;
	sf::Sprite button = sprite_mangr.makeSprite ("Resources/Textures/UI/Button.png");
	float x, y;
	int width, height;
public:
	Button (sf::String text, float x, float y, int width, int height);
	Button();
	~Button();

	void draw (sf::RenderWindow *window);
	bool handleEvents(sf::Event event);
};