#include <GLFW/glfw3.h>
#include <iostream>




int main() {

	if (!glfwInit()) 
	{
		return -1;
	}

	GLFWwindow* window = glfwCreateWindow(1280, 720, "GameDevelopementProject", NULL, NULL);

	return 0;
}