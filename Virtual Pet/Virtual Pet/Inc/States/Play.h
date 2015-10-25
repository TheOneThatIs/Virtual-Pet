#pragma once

#include "States\State.h"
#include "UI\Button.h"
#include "Util\Animation.h"

#include "Events\EventManager.h"
#include "Events\Event1.h"

class Play: public State{
    EventManager eventManager;
    Event1 event1;

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