#pragma once
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "BaseObject.h"
#include <list>


class Bullet : public BaseObject
{
public:
	Bullet();
	~Bullet();

	float m_timer;

	// FUNCTIONS
	// 1. Update

	float getSize()
	{
		return m_bulletSize; 
	}

	// 2. Set/ReSet Asteroid List Size
	void setSize(int Size)
	{
		m_bulletSize = Size;
	}


	void update(float deltaTime) override;

	float fSpeed;

	float m_bulletSize;


};