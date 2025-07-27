#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Window {
public:
	Window(const std::string &title, int width, int height);
	Window() = default;
	~Window();
	void update() const;
	inline bool isOpen() const { return !glfwWindowShouldClose(_window); }
	inline void setWidth(int width) { _width = width; }
	inline void setHeight(int height) { _height = height; }
	inline int getWidth() const { return _width; } 
	inline int getHeight() const { return _height; }
private:
	std::string _title;
	int _width;
	int _height;
	GLFWwindow* _window;
};
#endif
