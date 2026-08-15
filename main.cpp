#include <GLFW/glfw3.h>
#include <iostream>




int main() {

	if (!glfwInit()) 
	{
		return -1;
	}

	GLFWwindow* window = glfwCreateWindow(1280, 720, "GameDevelopementProject", NULL, NULL);

	if (window == nullptr)
	{
		std::cout << "Failed to create window" << std::endl;
		glfwTerminate();
		return -1;
	}

	while (!glfwWindowShouldClose(window))
	{
			glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}