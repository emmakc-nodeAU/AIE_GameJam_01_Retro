#include "Bullet.h"
#include <Input.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>



Bullet::Bullet() : BaseObject(0.0f, 0.0f)
{
	fSpeed = 5;

	m_fmovementX = fSpeed;
	m_fmovementY = fSpeed;

	m_fRotation = 0;

	m_bulletSize = 10;


}

Bullet::~Bullet()
{
}

void Bullet::update(float deltaTime)
{

	//glm::vec2 moveDir = glm::rotate(glm::vec2(0, 1), m_fRotation);

	// Momentum += Speed * Direction
	m_fmovementX = std::sin(m_fRotation) * fSpeed;
	m_fmovementY = -std::cos(m_fRotation) * fSpeed;

	m_fX += -m_fmovementX;
	m_fY += -m_fmovementY;
}




