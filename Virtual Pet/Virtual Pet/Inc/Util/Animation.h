#pragma once

#include<SFML\Graphics.hpp>
#include "SpriteManager.h"

using namespace sf;

class Animation{
private:
	SpriteManager sprite_mangr;
	sf::Sprite spritesheet;
	
	IntRect src_rect;
	IntRect frame;
	int time;

public:
	Animation::Animation();
	Animation(String file_path, int frame_width, int frame_height, IntRect src_rect);
	~Animation();

	void draw(RenderWindow *window, int x, int y);
	void update();
};