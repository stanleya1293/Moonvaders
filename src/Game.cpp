#include "Game.h"

//default settings
#define DEFAULT_TITLE "Moonvaders"
#define DEFAULT_WIDTH 1000
#define DEFAULT_HEIGHT 800
//


Game::Game() : _window(Window(DEFAULT_TITLE, DEFAULT_WIDTH, DEFAULT_HEIGHT)) {}

Game::~Game() {}

void Game::run() const {
	while(_window.isOpen()) {
		_window.update();
	}
}
