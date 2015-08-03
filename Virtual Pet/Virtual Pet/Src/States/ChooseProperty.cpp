#include "..\Inc\States\ChooseProperty.h"


ChooseProperty::ChooseProperty () {

}

ChooseProperty::~ChooseProperty () {}

void ChooseProperty::init () {

}

void ChooseProperty::destroy () {

}

void ChooseProperty::handleEvents (sf::Event event) {

}

void ChooseProperty::update () {

}

void ChooseProperty::pause () {

}

void ChooseProperty::resume () {

}

void ChooseProperty::draw (sf::RenderWindow *window) {
	sprite_mangr.draw (choose_property, 0, 0, *window);
}