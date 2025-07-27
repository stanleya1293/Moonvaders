#include "Window.h"

Window::Window(const std::string &title, int width, int height) : _title(title), 
	_width(width), _height(height), _window(nullptr) {
	
	glfwInit();
	_window = glfwCreateWindow(_width, _height, _title.c_str(), NULL, NULL);
	glfwMakeContextCurrent(_window);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}

Window::~Window() {
	glfwDestroyWindow(_window);
	glfwTerminate();
}

void Window::update() const {
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(_window);
	glfwPollEvents();
}

