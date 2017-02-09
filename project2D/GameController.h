#pragma once
#include "Application2D.h"
//#include "BaseObject.h"
//#include "Score.h"
//#include "Canvas.h"

//namespace aie 
//{
//// Forward Declaring
//	class Texture;
//}

class GameController
{
public:
	GameController();
	~GameController();

	// VARIABLES

	int iAsteroidNumber = 0;

	// FUNCTIONS
	// Texture
	//const aie::Texture* () {};

	// Update
	void Update(float deltaTime);

	// Render2D
	virtual void Render2D();




private:


};
