#include "..\..\Inc\UI\Button.h"
#include<iostream>
#include "Util\Utilities.h"

Button::Button (sf::String text, float x, float y, int width, int height) {
	this->x = x;
	this->y = y;

	this->text.setCharacterSize (18);
	this->text.setColor (sf::Color::Black);
	this->text.setString(text);

	this->width = width;
	this->height = height;
}

Button::Button () {
	width = 100;
	height = 25;
}

Button::~Button () {}

void Button::draw (sf::RenderWindow *window) {
	sprite_mangr.draw (button, x, y, *window);
	sprite_mangr.draw (text, x, y, width, height, *window);
}

bool Button::handleEvents (sf::Event event) {
	if (event.type == sf::Event::MouseButtonReleased) {
		if (mousePos.x >= x && mousePos.x <= x + width) {
			if (mousePos.y >= y && mousePos.y <= y + height) {
				return true;
			}
			else return false;
		}
		else return false;
	}
	else return false;
}