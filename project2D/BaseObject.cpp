#include "GameController.h"
#include "Application2D.h"
#include "Input.h"
#include "Texture.h"
#include "BaseObject.h"

BaseObject::BaseObject(float a_floatX, float a_floatY)
{
	m_fX = a_floatX;
	m_fY = a_floatY;
	m_fmovementX = 0;
	m_fmovementY = 0;
	m_fRotation = 0;
}

BaseObject::~BaseObject()
{

}

void BaseObject::update(float deltaTime)
{
	// Update Movement
	m_fX += m_fmovementX;
	m_fY += m_fmovementY;

}