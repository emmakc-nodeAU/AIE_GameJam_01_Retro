#pragma once
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "BaseObject.h"

class Bullet : public BaseObject
{
public:
	Bullet();
	~Bullet();

	// FUNCTIONS
	// 1. Update
	void update(float deltaTime) override;

	float fSpeed;

	// 2. Shoot
	void shoot(float x, float y);

};