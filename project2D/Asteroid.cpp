#include "Asteroid.h"
#include <Input.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>



// Constructor
Asteroid::Asteroid() : BaseObject(0.0f, 0.0f)
{
	fSpeed = rand() % 6 - 3;
	if (fSpeed == 0) fSpeed = 1;
	m_fmovementX = fSpeed;

	fSpeed = rand() % 6 - 3;
	if (fSpeed == 0) fSpeed = -1;
	m_fmovementY = fSpeed;

}

// Destructor
Asteroid::~Asteroid()
{
}

void Asteroid::update(float deltaTime)
{
	m_fX += m_fmovementX;
	m_fY += m_fmovementY;
}