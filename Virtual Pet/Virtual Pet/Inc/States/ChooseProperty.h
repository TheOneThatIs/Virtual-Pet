#pragma once
#include "States\State.h"
class ChooseProperty: public State {
private:
	sf::Sprite choose_property = sprite_mangr.makeSprite("Resources/Textures/Choose Property.png");
public:
	ChooseProperty ();
	~ChooseProperty ();

	void ChooseProperty::init ();
	void ChooseProperty::destroy ();
	void ChooseProperty::handleEvents (sf::Event event);
	void ChooseProperty::update ();
	void ChooseProperty::pause ();
	void ChooseProperty::resume ();
	void ChooseProperty::draw (sf::RenderWindow *window);
};