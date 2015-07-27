#pragma once

#include<SFML\Graphics.hpp>
#include "SpriteManager.h"

class Button{
	SpriteManager sprite_mangr;
	sf::Sprite button = sprite_mangr.makeSprite ("Resources/Textures/UI/Button.png");
	float x, y;
	int width, height;
public:
	Button(sf::Sprite, int width, int height);
	Button();
	~Button();

	void draw (sf::RenderWindow *window);
	bool handleEvents(sf::Event event);
	void setPos (float x, float y);
};