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
	m_timer += deltaTime;

	// MOVEMENT (Bullet Movement)
	aie::Input* input = aie::Input::getInstance();
	
	if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	{
		Bullet* bullet = CreateBullet(m_ship->GetY(), m_ship->GetX, m_ship->GetRotation());
		bulletList.push_back(bullet);
	}

	for (auto it = bulletList.begin(); it != bulletList.end(); ++it)
	{
		Bullet* bullet = *it;
		
		if (bullet->getX() < 0)					delete bullet; 
		if (bullet->getX() > getWindowWidth())	delete bullet;
		if (bullet->getY() > 0)					delete bullet;
		if (bullet->getY() < getWindowHeight)	delete bullet;

		bullet->update(deltaTime);

	}

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


