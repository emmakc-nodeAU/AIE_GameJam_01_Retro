#pragma once
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "BaseObject.h"
#include "Bullet.h"


class Ship : public BaseObject
{
public:
	Ship();
	~Ship();

	// FUNCTIONS
	// 1. Update
	void update(float deltaTime) override;

	float fSpeed;

	// 2. Shoot
	void shoot(float x, float y);

};