#include "..\..\Inc\UI\Button.h"
#include<iostream>
#include "Util\Utilities.h"


Button::Button (sf::String text, float x, float y, int width, int height, sf::Color color) {
	this->x = x;
	this->y = y;

	this->text.setCharacterSize (18);
	this->text.setColor (color);
	this->text.setString(text);

	this->width = width;
	this->height = height;

    normalButton = sprite_mangr.makeSprite ("Resources/Textures/UI/Button 2.png", sf::IntRect (0, 0, 138, 38));
    hoverButton = sprite_mangr.makeSprite ("Resources/Textures/UI/Button 2.png", sf::IntRect (0, 50, 138, 38));
}

Button::Button (sf::String text, float x, float y, int width, int height, sf::Color color, sf::Sprite normal, sf::Sprite hover) {
    this->x = x;
    this->y = y;

    this->text.setCharacterSize (18);
    this->text.setColor (color);
    this->text.setString (text);

    this->width = width;
    this->height = height;

    normalButton = normal;
    hoverButton = hover;
}


Button::Button () {
	width = 100;
	height = 25;
}

Button::~Button () {}

void Button::draw (sf::RenderWindow *window) {
    if (state == NORMAL)
        sprite_mangr.draw (normalButton, x, y, *window);
    if (state == HOVER)
        sprite_mangr.draw (hoverButton, x, y, *window);
	sprite_mangr.draw (text, x, y, width, height, *window);
}

//    !!! BUG !!!    If handleEvents() is not called, the button will not draw.
bool Button::handleEvents (sf::Event event) {
    if (event.type == sf::Event::MouseMoved) {
        if (mousePos.x >= x && mousePos.x <= x + width) {
            if (mousePos.y >= y && mousePos.y <= y + height) {
                state = HOVER;    //Hovering over button
            } else
                state = NORMAL;
        } else
            state = NORMAL;
    }

	if (event.type == sf::Event::MouseButtonReleased) {
		if (mousePos.x >= x && mousePos.x <= x + width) {
			if (mousePos.y >= y && mousePos.y <= y + height) {
				return true;    //Clicked on button.
			}
			else return false;
		}
		else return false;
	}
	else return false;
}