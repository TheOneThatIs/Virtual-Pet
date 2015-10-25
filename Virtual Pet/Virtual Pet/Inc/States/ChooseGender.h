#pragma once
#include "State.h"

class ChooseGender: public State {
public:
    ChooseGender ();
    ~ChooseGender ();

    void init ();
    void destroy ();

    void handleEvents (sf::Event event);
    void update ();

    void pause ();
    void resume ();

    void draw (sf::RenderWindow *window);
};