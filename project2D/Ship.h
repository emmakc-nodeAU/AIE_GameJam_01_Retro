#pragma once
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "BaseObject.h"

class Ship : public BaseObject
{
public:
	Ship();
	~Ship();

	// FUNCTIONS
	// 1. Update
	void update(float deltaTime) override;

	


};