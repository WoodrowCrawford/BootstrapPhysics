#pragma once
struct GLFWwindow;
class Engine
{
public:
	Engine() {}
	Engine(int width, int height, const char* title);
	~Engine();

	int run();

private:
	int start();
	int update();
	int draw();
	int end();



	bool getGameOver();

private:
	GLFWwindow* m_window = nullptr;
	
};

