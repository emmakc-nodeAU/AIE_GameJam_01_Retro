#include "ship.h"
#include <Input.h>


Ship::Ship(): BaseObject(0.0f,0.0f)
{
}

Ship::~Ship()
{
}

void Ship::update(float deltaTime)
{
	// INPUT for Ship movement
	aie::Input* input = aie::Input::getInstance();

	if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	{
		// Shoot
	}

	if (input->isKeyDown(aie::INPUT_KEY_A))
	{
		// Rotate Counter Clockwise
		m_fRotation = 5 * deltaTime;
	}

	if (input->isKeyDown(aie::INPUT_KEY_D))
	{
		// Rotate Clockwise
		m_fRotation =- 5 * deltaTime;
	}


}
