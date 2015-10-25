#include "..\..\Inc\States\Options.h"


Options::Options () {
}


Options::~Options () {
}

void Options::init () {

}

void Options::destroy () {

}

void Options::handleEvents (sf::Event event) {
    if (back.handleEvents (event))
        manager->changeState (new TitleScreen ());
}

void Options::update () {

}

void Options::pause () {

}

void Options::resume () {

}

void Options::draw (sf::RenderWindow *window) {
    sprite_mangr.drawText ("Options", 0, 0, 50, sf::Color::White, *window);
    back.draw (window);
}