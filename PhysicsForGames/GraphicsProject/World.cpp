#include "World.h"
#include "glm/ext.hpp"

World::World(int width, int height)
{
	m_width = width;
	m_height = height;
}

void World::start()
{
	//Initialize the quad
	m_quad.setTransform(glm::mat4(10.0f));
	m_quad.start();

	//Create camera transforms
	//m_camera.setTransform(glm::lookAt(
		//glm::vec3(1.0f, 1.0f, 1.0f),
		//glm::vec3(0.0f),
		//glm::vec3(0.0f, 1.0f, 0.0f)
	//));
	m_camera.setPosition
	);
}

void World::update()
{
}

void World::draw()
{
	m_quad.draw();
}

void World::end()
{
}

glm::mat4 World::getProjectionViewModel()
{
	return m_projectionMatrix * m_camera.getTransform() * m_quad.getTransform();
}