#pragma once

#include "State.h"
#include "TitleScreen.h"

#include "UI\Button.h"

class Options: public State{
    Button back = Button ("Back", 750, 545, 138, 38, sf::Color::White);
public:
    Options ();
    ~Options ();

    void init () override;
    void destroy () override;

    void handleEvents (sf::Event event) override;
    void update () override;

    void pause () override;
    void resume () override;

    void draw (sf::RenderWindow *window) override;
};