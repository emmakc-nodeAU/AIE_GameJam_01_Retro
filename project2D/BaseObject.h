#pragma once
#include "GameController.h"
#include "Application2D.h"
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "Renderer2D.h"

class BaseObject : public aie::Application
{
public:
	BaseObject(float a_floatX, float a_floatY);

	~BaseObject();

	// VARIABLES
	int iShip;
	int iAsteroid;
	int iBullet;

	// FUNCTIONS
	// 1. UPDATE
	void update(float deltaTime) override;

protected:

	// Position
	float m_fX;
	float m_fY;
	float m_timer;
	// Movement
	float m_fmovementX;
	float m_fmovementY;

};