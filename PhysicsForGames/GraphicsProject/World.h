#pragma once
#include "Quad.h"
#include "Camera.h"
class World
{
public:

	World(int width, int height);
	~World() {}

	void start();
	void update();
	void draw();
	void end();

	glm::mat4 getProjectionViewModel();


private:
	int m_width = 1280, m_height = 720;

	Quad m_quad;


	Camera m_camera = Camera();
	glm::mat4 m_projectionMatrix;


};

