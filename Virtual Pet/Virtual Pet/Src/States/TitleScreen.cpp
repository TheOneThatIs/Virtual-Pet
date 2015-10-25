#include "..\Inc\States\TitleScreen.h"

TitleScreen::TitleScreen () {
	title = sprite_mangr.makeSprite ("Resources/Textures/The Goddess of Life Title Page.png");
}


TitleScreen::~TitleScreen () {}


void TitleScreen::init () {

}

void TitleScreen::destroy () {

}

void TitleScreen::handleEvents (sf::Event event) {
	if (b_newGame.handleEvents (event))
		manager->changeState (new Play());
    if (b_options.handleEvents (event))
        manager->changeState (new Options ());
}

void TitleScreen::update () {
	
}

void TitleScreen::pause () {

}

void TitleScreen::resume () {

}

void TitleScreen::draw (sf::RenderWindow *window) {
	sprite_mangr.draw (title, 0, 0, *window);//Draw background
    b_newGame.draw (window);
    b_options.draw (window);
}