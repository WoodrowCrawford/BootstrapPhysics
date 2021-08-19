#include "PhysicsGame.h"
#include "Input.h"
#include "Font.h"
#include "Sphere.h"
#include "Gizmos.h"
#include <glm/ext.hpp>



bool PhysicsGame::startup()
{
	//Sets the maximum # of lines, triangles, 2d lines, etc...
	aie::Gizmos::create(225U, 225U, 65535U, 65535U);

	m_renderer = new aie::Renderer2D();
	setBackgroundColour(2.8f, 0.0f, 1.7f);

	m_font = new aie::Font("../bin/font/consolas.ttf", 32);

	m_scene = new PhysicsScene();
	m_scene->setTimeStep(0.01f);

	//Sets the gravity in the scene
	m_scene->setGravity(glm::vec2{ 0.0f, 0.0f });
	
	//Creates a ball (does not add it to the scene)
	Sphere* ball = new Sphere(glm::vec2(), glm::vec2(), 10, 10, glm::vec4(2.8f, 2.0f, 5.0f, 1.0f));

	//Adds the ball to the scene
	m_scene->addActor(ball);

	return true;
}

void PhysicsGame::shutdown()
{
	delete m_font;
	delete m_renderer;
	delete m_scene;
}

void PhysicsGame::update(float deltaTime)
{
	//Get the input instance
	aie::Input* input = aie::Input::getInstance();

	aie::Gizmos::clear();

	m_scene->update(deltaTime);

	//Exit on Esc
	if (input->isKeyDown(aie::INPUT_KEY_ESCAPE)) 
	{
		quit();
	}
}

void PhysicsGame::draw()
{
	clearScreen();

	m_renderer->begin();

	//Draws the scene
	m_scene->draw();

	//Draw the Gizmos
	static float aspectRatio = 16.0f / 9.0f;

	//left right bottom top zNear zFar
	aie::Gizmos::draw2D(glm::ortho<float>(-100, 100, -100 / aspectRatio, 100 / aspectRatio, -1.0f, 1.0f));

	//Draw FPS
	char fps[32];
	sprintf_s(fps, 32, "FPS: %i", getFPS());

	//Sets the render color and draws the text at the given location
	m_renderer->setRenderColour(1.0f, 1.0f, 1.0f, 1.0f);
	m_renderer->drawText(m_font, fps, 0.0f, 720.0f - 32.0f);

	m_renderer->end();
}
