#include "..\Inc\SpriteManager.h"
#include<iostream>

std::vector<sf::Texture*> images;

SpriteManager::SpriteManager(){
	progress = 0;
	time = 0;
}

sf::Sprite SpriteManager::makeSprite(sf::String filepath){
	images.push_back(new sf::Texture());
	images[images.size() - 1]->loadFromFile(filepath);
	return sf::Sprite(*(images[images.size() - 1]));
}

void SpriteManager::draw(sf::Sprite sprite, float x, float y, sf::RenderWindow &window){
	sprite.setPosition(x, y);
	window.draw(sprite);
}

void SpriteManager::draw (sf::Text button_text, sf::RenderWindow &window) {
	font.loadFromFile ("Resources/Fonts/consola.ttf");

	button_text.setFont (font);
	window.draw (button_text);
}