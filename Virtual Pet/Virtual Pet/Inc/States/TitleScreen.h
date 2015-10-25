#pragma once

#include "States\State.h"
#include "UI\Button.h"

#include "Play.h"
#include "Options.h"

class TitleScreen: public State {
	Button b_newGame = Button("New Game", 375, 250, 138, 38, sf::Color::White);
    Button b_options = Button ("", 835, 545, 60, 50, sf::Color::White, sprite_mangr.makeSprite ("Resources/Textures/UI/Config.png"), sprite_mangr.makeSprite ("Resources/Textures/UI/Config.png"));
	sf::Sprite title;
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