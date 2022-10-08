#include <iostream>
#include <GLFW/glfw3.h>

void glfwTest () {
    GLFWwindow* window;

  if(!glfwInit()) {
    fprintf( stderr, "Failed to initialize GLFW\n" );
    exit(EXIT_FAILURE);
  }

  window = glfwCreateWindow(300, 300, "GLFW TEST", NULL, NULL);

  if(!window) {
    fprintf(stderr, "Failed to open GLFW window\n");
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  while(!glfwWindowShouldClose(window)) {
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwTerminate();
}

int main () {
  std::cout << "HELLO FROM SUBMODULES!" << std::endl;

  glfwTest();

  return 0;
}