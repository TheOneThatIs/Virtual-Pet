#define WIDTH 800
#define HEIGHT 600
#define TITLE "Jonathan Jackson's Template v0.1"

#include "..\Inc\GameCore.h"
#include "States\TitleScreen.h"

Vector2f mousePos;

//Create the window
RenderWindow window(VideoMode(WIDTH, HEIGHT), TITLE);
FloatRect size(0, 0, WIDTH, HEIGHT);

GameCore::GameCore(){
	window.setView(View(size));

	isfullscreen = false; 
	init();

	gameLoop();
}

void GameCore::gameLoop() {
	Clock clock;
	float accumulator = 0.f;

	while (window.isOpen()) {
		Time dt = clock.restart ();
		accumulator += dt.asSeconds ();
		while (accumulator >= TIME_STEP) {
			handleEvents();
			update();

			accumulator -= TIME_STEP;
		}

		draw();
	}
}

void GameCore::draw () {
	window.clear (Color::White);
	manager.drawStates (&window);
	window.display ();
}

void GameCore::handleEvents () {
	Event event;
	while (window.pollEvent (event)) {
		switch (event.type) {
		case Event::Closed:
			window.close ();
			break;
		case Event::KeyPressed:
			if (event.key.code == Keyboard::F11)
				toggleFullscreen ();
			break;
		case Event::Resized:
			sf::FloatRect visibleArea (0.0, 0.0, float (event.size.width), float (event.size.height));
			width = event.size.width;
			height = event.size.height;
			size = visibleArea;
			window.setView (View (visibleArea));
			break;
		}
		manager.handleStateEvents (event);
	}
}

void GameCore::init(){
	manager.pushState (new TitleScreen ());
}

void GameCore::update() {
	mousePos = window.mapPixelToCoords (Mouse::getPosition (window));

	manager.updateStates ();

}

void GameCore::toggleFullscreen(){
	isfullscreen = !isfullscreen;

	if (isfullscreen){
		window.create(sf::VideoMode(width, height), TITLE, Style::Fullscreen);
		window.setView(View(size));
	} else window.create(sf::VideoMode(width, height), TITLE, Style::Default);
}