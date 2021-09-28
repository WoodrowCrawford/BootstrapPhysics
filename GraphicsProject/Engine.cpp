#include "Engine.h"
#include "GLFW/glfw3.h"
#include <gl_core_4_4.h>
#include <stdio.h>


Engine::Engine()
{

}


Engine::Engine(int width, int height, const char* title)
{
	
}


Engine::~Engine()
{

}

int Engine::run()
{
	int exitCode = 0;

	//For start
	exitCode = start();

	if (exitCode)
	{
		return exitCode;
	}


	//For update
	exitCode = update();
	

	//For end
	exitCode = end();
	if (exitCode)
	{
		return exitCode;
	}

	return 0;
}

int Engine::start()
{
	//Initialize
	if (!glfwInit())
	{
		return -1;
	}

	//Create a window
	m_window = glfwCreateWindow(1280, 720, "Test Window", nullptr, nullptr);

	if (m_window)
	{
		glfwTerminate();
		return -2;
	}

	glfwMakeContextCurrent(m_window);



	//Load OpenGL
	if (ogl_LoadFunctions() == ogl_LOAD_FAILED)
	{
		glfwDestroyWindow(m_window);
		glfwTerminate();
		return -3;
	}
	int majorVersion = ogl_GetMajorVersion();
	int minorVersion = ogl_GetMinorVersion();
	printf("OpenGL version %i.%i\n", majorVersion, minorVersion);
}

int Engine::update()
{
	glfwSwapBuffers(m_window);
	glfwPollEvents();
	
}

int Engine::draw()
{
	if (!m_window) return -5;

	glfwSwapBuffers(m_window);
	return 0;
}

int Engine::end()
{
	if (!m_window) return -6;

	//Clean up and exit
	glfwDestroyWindow(m_window);
	glfwTerminate();
	return 0;
}

bool Engine::getGameOver()
{
	bool gameIsOver = glfwWindowShouldClose(m_window);
	gameIsOver = gameIsOver || glfwGetKey(m_window, GLFW_KEY_ESCAPE) == GLFW_PRESS;

	return gameIsOver;
}
