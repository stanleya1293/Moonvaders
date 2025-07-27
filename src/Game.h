#ifndef GAME_H
#define GAME_H

#include "Window.h"

class Game {
public:
	Game();
	~Game();
	void run() const;
private:
	Window _window;

};

#endif
