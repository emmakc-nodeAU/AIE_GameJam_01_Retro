#pragma once
#include "Application2D.h"
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "Renderer2D.h"
//#include "BaseObject.h"
//#include "Score.h"
//#include "Canvas.h"

//namespace aie 
//{
//// Forward Declaring
//	class Texture;
//}

class GameController : public aie::Application
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
	void update(float deltaTime) override;

	// Render2D
	virtual void draw() override;

	virtual bool startup() override;  // Use this to load textures
	virtual void shutdown() override; // Use this to delete textures
	/*
	Startup is an easier way to preload assets in for them to be used later
	in other classfiles rather than loading them in the constructor which might
	break the application / leak memory.

	Shutdown will be used similiar but this will replace the deconstructor.
	*/


protected:

	aie::Renderer2D*	m_2dRender;      // Renders the gameObject.
	aie::Texture*		m_texture;       // Gets the allocated texture.
	aie::Font*			m_font;          // Loads the font.
	aie::Audio*			m_audio;         // Imports Audio.

	float m_timer;


};
