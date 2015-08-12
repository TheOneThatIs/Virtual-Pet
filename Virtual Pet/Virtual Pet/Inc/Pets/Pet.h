#pragma once
#include<SFML\Graphics.hpp>

class Pet {
	sf::String nickname;
	int health, max_health;
	
public:
	Pet ();
	~Pet ();
	
	void feed ();

	enum mood {
		passive,
		happy,
		estatic,

		annoyed,
		angry,

		down,
		sad,
		depressed
	};
};