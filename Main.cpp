#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {

	if (!glfwInit())return 1;

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(glfw GLFW_CONTEXT_VERSION_MINOR, 3);
	GLFWwindow* window = glfwCreateWindow(1080, 720, "My Window", NULL, NULL);

	glfwMakeContextCurrent(window);
	
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}
	glfwTerminate();
	return 0;
}