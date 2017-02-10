#include "ship.h"
#include <Input.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>


Ship::Ship(): BaseObject(0.0f,0.0f)
{
	fSpeed = 3.1516;
}

Ship::~Ship()
{
}

void Ship::update(float deltaTime)
{
	// INPUT for Ship movement
	aie::Input* input = aie::Input::getInstance();

	//glm::vec3 rotationPos;

	//if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	//{
	//	// Shoot
	//}

	// ROTATION
	if (input->isKeyDown(aie::INPUT_KEY_A))
	{
		// Rotate Counter Clockwise
		m_fRotation += fSpeed * deltaTime;
	}

	if (input->isKeyDown(aie::INPUT_KEY_D))
	{
		// Rotate Clockwise
		m_fRotation -= fSpeed * deltaTime;
	}


}

void Ship::shoot(float x, float y)
{

}
