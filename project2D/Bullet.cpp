#include "Bullet.h"
#include <Input.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>



Bullet::Bullet() : BaseObject(0.0f, 0.0f)
{
	fSpeed = 5;

	m_fmovementX = fSpeed;
	m_fmovementY = fSpeed;

	m_bulletSize = 10;

}

Bullet::~Bullet()
{
}

void Bullet::update(float deltaTime)
{
	m_fX += m_fmovementX;
	m_fY += m_fmovementY;
}




