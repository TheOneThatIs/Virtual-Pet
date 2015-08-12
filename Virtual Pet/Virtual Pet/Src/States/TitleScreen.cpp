#include "..\Inc\States\TitleScreen.h"
#include "States\ChooseProperty.h"

TitleScreen::TitleScreen () {
	title = sprite_mangr.makeSprite ("Resources/Textures/Title Screen.png");
}


TitleScreen::~TitleScreen () {}


void TitleScreen::init () {

}

void TitleScreen::destroy () {

}

void TitleScreen::handleEvents (sf::Event event) {
	if (button.handleEvents (event))
		manager->changeState (new ChooseProperty());
}

void TitleScreen::update () {
	
}

void TitleScreen::pause () {

}

void TitleScreen::resume () {

}

void TitleScreen::draw (sf::RenderWindow *window) {
	button.draw (window);
	sprite_mangr.draw (title, 200, 100, *window);
}