#include "..\..\Inc\UI\Button.h"
#include<iostream>
#include "Util\Utilities.h"

Button::Button (sf::String text, int width, int height) {
	font.loadFromFile ("Resources/Fonts/consola.ttf");
	this->text.setFont (font);
	this->text.setString(text);
	this->text.setCharacterSize (24);
	this->text.setColor (Color::Black);

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
	sprite_mangr.draw (text, *window);
}

bool Button::handleEvents (sf::Event event) {
	if (event.type == sf::Event::MouseButtonReleased) {
		if (mousePos.x >= x && mousePos.x <= x + width) {
			if (mousePos.y >= y && mousePos.y <= y + height) {
				std::cout << "Clicked on button. ";
				return true;
			}
			else return false;
		}
		else return false;
	}
	else return false;
}

void Button::setPos (float x, float y) {
	this->x = x;
	this->y = y;
}