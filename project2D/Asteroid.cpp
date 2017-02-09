#include "Asteroid.h"
#include <Input.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>



// Constructor
Asteroid::Asteroid() : BaseObject(0.0f, 0.0f)
{
	fSpeed = 100;
}

// Destructor
Asteroid::~Asteroid()
{
}

void Asteroid::update(float deltaTime)
{

}