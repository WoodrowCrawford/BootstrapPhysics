#pragma once
#include "Mesh.h"

class Quad : public Mesh
{
public:
	Quad() : Mesh() {};
	Quad(glm::vec4 color);
	Vertex* generateVertices(unsigned int& vertexCount, unsigned int& triCount) override;


	glm::vec4 getColor() { return m_color; }
	void setColor(glm)
private:
	glm::vec4 m_color = glm::vec4(1.0f);
};



