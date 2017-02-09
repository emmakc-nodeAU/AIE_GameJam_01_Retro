#include "Bullet.h"
#include <Input.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>


Bullet::Bullet() : BaseObject(0.0f, 0.0f)
{
	fSpeed = 500;
}

Bullet::~Bullet()
{
}

void Bullet::update(float deltaTime)
{
	// MOVEMENT (Bullet Movement)
	aie::Input* input = aie::Input::getInstance();

	//glm::vec3 rotationPos;

	if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	{
		// Shoot
	}

	// ROTATION
	if (input->isKeyDown(aie::INPUT_KEY_A))
	{
		// Rotate Counter Clockwise
		m_fRotation = fSpeed * deltaTime;
	}

	if (input->isKeyDown(aie::INPUT_KEY_D))
	{
		// Rotate Clockwise
		m_fRotation = -fSpeed * deltaTime;
	}

}

void Bullet::shoot(float x, float y)
{

}
