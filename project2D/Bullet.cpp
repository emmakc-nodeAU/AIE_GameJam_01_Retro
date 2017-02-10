#include "Bullet.h"
#include <Input.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "Ship.h"



Bullet::Bullet() : BaseObject(0.0f, 0.0f)
{
	fSpeed = 500;

	m_ship = new Ship();
}

Bullet::~Bullet()
{
}

void Bullet::update(float deltaTime)
{
}

Bullet * Bullet::CreateBullet(float xPos, float yPos, float rotation)
{
	Bullet* bullet = new Bullet();
	return bullet;
}

int main()
{
	//std::list <Bullet*> bulletList; // Bullet array.

	return 0;
}


