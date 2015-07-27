#include "..\Inc\States\TitleScreen.h"
#include "States\Play.h"

TitleScreen::TitleScreen () {
	button.setPos (60, 189);
}


TitleScreen::~TitleScreen () {

}


void TitleScreen::init () {

}

void TitleScreen::destroy () {

}

void TitleScreen::handleEvents (sf::Event event) {
	if (button.handleEvents (event))
		manager->changeState (new Play ());
}

void TitleScreen::update () {
	
}

void TitleScreen::pause () {

}
void TitleScreen::resume () {

}

void TitleScreen::draw (sf::RenderWindow *window) {
	button.draw (window);
}