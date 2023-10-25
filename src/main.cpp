#include "glad/glad.h"
#include <GLFW/glfw3.h>
#include <iostream>

int main(void)
{
    GLFWwindow* window;
    glfwInit();    
    window = glfwCreateWindow(640, 480, "OpenGL", NULL, NULL);
    glfwMakeContextCurrent(window);
   
    gladLoadGL();

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.23f,1.0f,0.50f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_POLYGON);
    
    
    glColor3f(1, 1, 1); 
    glVertex2f(0.5, 1);
    glColor3f(1, 1, 1); 
    glVertex2f(0, 0.5);
    glColor3f(1, 1, 1); 
    glVertex2f(0.5, -0.5);

    glColor3f(1, 1, 1); 
    glVertex2f(0.5, 1);
    glColor3f(1, 1, 1); 
    glVertex2f(0.5, -0.5);
    glColor3f(1, 1, 1); 
    glVertex2f(1, 0.5);
    
    
  glEnd();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}