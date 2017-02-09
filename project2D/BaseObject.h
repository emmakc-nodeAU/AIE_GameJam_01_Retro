#pragma once
#include <glm/ext.hpp>
#include <glm/glm.hpp>


class BaseObject
{
public:
	BaseObject(float a_floatX, float a_floatY);

	virtual ~BaseObject();

	// VARIABLES
	//int iShip;
	//int iAsteroid;
	//int iBullet;

	// FUNCTIONS
	// 1. UPDATE
	virtual void update(float deltaTime);
	
	// 2. Position
	void setPosition(float x, float y)
	{
		m_fX = x;
		m_fY = y;
	}
	
	float getX()
	{
		return m_fX;
	}
	
	float getY()
	{
		return m_fY;
	}

	// 3. Movement
	void setMovement(float x, float y)
	{
		m_fmovementX = x;
		m_fmovementY = y;
	}
	float getMovementX()
	{
		return m_fmovementX;
	}

	float getMovementY()
	{
		return m_fmovementY;
	}

	// 4. Rotation
	float getRotation()
	{
		return m_fRotation;
	}
	void setRotation(float rot)
	{
		m_fRotation = rot;
	}
protected:

	// Position
	float m_fX;
	float m_fY;
	// Movement
	float m_fmovementX;
	float m_fmovementY;
	// Rotation
	float m_fRotation;

};