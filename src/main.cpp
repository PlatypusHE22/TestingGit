#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    glfwInit();

    GLFWwindow* window = glfwCreateWindow(800, 600, "Testing some stuff", NULL, NULL);

    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
