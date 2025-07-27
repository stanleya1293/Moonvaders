#include "Window.h"

int main() {
	Window window("Moonvaders", 1000, 800);	
	while(window.isOpen()) {
		window.update();
	}
	return 0;
}
