#pragma once

#include "Pets/Pet.h"
#include "SpriteManager.h"
#include "World/World.h"
#include<vector>

class Player {
private:
	SpriteManager sprite_mangr;

	int health, max_health;
	std::vector<Pet> pets;
	sf::Sprite spritesheet = sprite_mangr.makeSprite ("Resources/Sprites/Player_M.png");

public:
	Player ();
	~Player ();
};