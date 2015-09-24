#include "..\Inc\States\ChooseProperty.h"

ChooseProperty::ChooseProperty () {
	b_forest_prop = Button ("", 24, 137, 257, 250);
	b_volcano_prop = Button ("", 274, 137, 257, 250);
	b_beach_prop = Button ("", 524, 137, 257, 250);
}

ChooseProperty::~ChooseProperty () {}

void ChooseProperty::init () {

}

void ChooseProperty::destroy () {

}

void ChooseProperty::handleEvents (sf::Event event) {
	//Save save("Resources/Saves/Properties.sav");
	
	if (b_forest_prop.handleEvents (event)) {
		//save.write ("Properties:","Forest");
		std::cout << "Unlocked Forest\n";
	}

	if (b_volcano_prop.handleEvents (event)) {
		//save.write ("Properties:", "Volcano");
		std::cout << "Unlocked volcano\n";
	}

	if (b_beach_prop.handleEvents (event)) {
		//save.write ("Properties:", "Beach");
		std::cout << "Unlocked beach\n";
	}
}

void ChooseProperty::update () {
	
}

void ChooseProperty::pause () {

}

void ChooseProperty::resume () {

}

void ChooseProperty::draw (sf::RenderWindow *window) {
	sprite_mangr.draw (choose_property, 0, 0, *window);
}