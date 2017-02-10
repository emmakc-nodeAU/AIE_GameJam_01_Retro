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

	void update(float deltaTime) override;

	float fSpeed;


};