#pragma once

#include "States\State.h"
#include "UI\Button.h"
#include "Util\Animation.h"

class Play: public State{
	SpriteManager sprite_mangr;

public:
	Play();
	~Play();

	void init() override;
	void destroy() override;

	void handleEvents(sf::Event event) override;
	void update() override;

	void pause() override;
	void resume() override;

	void draw(sf::RenderWindow *window) override;
};