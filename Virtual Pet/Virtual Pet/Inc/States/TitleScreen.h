#pragma once

#include "States\State.h"
#include "UI\Button.h"

class TitleScreen: public State {
	Button button;
public:
	TitleScreen ();
	~TitleScreen ();

	void init () override;
	void destroy () override;

	void handleEvents (sf::Event event) override;
	void update () override;

	void pause () override;
	void resume () override;

	void draw (sf::RenderWindow *window) override;
};