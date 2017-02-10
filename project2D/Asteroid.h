#pragma once
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "BaseObject.h"

class Asteroid : public BaseObject
{
public:
	Asteroid();
	~Asteroid();

	// VARIABLES
	float fSpeed;


	// FUNCTIONS 
	// 1. Check Asteroid List Size 
	float getSize()
	{
		return m_asteroidSize;
	}
	// 2. Set/ReSet Asteroid List Size
	void setSize(int Size)
	{
		m_asteroidSize = Size;
	}

	// 3. Update
	void update(float deltaTime) override;


private:
	
	// VARIABLES
	int m_asteroidSize;


	////std::list<Asteroids*> m_gameObjects;
	//Bullet* CreateBullet(float xPos, float yPos, float rotation)
	//{
	//	Bullet* bullet = new Bullet();
	//	//Set up the bullet using the arguments to the function
	//	return bullet;
	//}

	//void update(float deltaTime)
	//{
	//	aie::Input input = aie::Input:getInstance()

	//		if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	//		{
	//			_bulletLists.push_back(bullet);
	//		}

	// SCREEN WRAP
	//	for (auto it = m_bulletList.begin(); it != m_bulletList.end(); ++it)
	//	{
	//		Bullet* bullet = *it;
	//		if (bullet->getX() < 0) bullet->setX(getWindowWidth());
	//		if (bullet->getX() > 0) getWindowWidth()) bullet->setX(0);
	//		if (bullet->getY() < 0) bullet->setY(getWindowWidth());
	//		if (bullet->getY() > 0) getWindowWidth()) bullet->setY(0);

	//		bullet->update(deltaTime);
	//	}
	//}

	//int main()
	//{
	//	std::list<Bullet*> m_bulletLists;
	//	return 0;
	//}
};