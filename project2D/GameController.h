#pragma once
#include "Application2D.h"
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include "Renderer2D.h"
#include <list>
//#include "BaseObject.h"
//#include "Score.h"
//#include "Canvas.h"

//namespace aie 
//{
//// Forward Declaring
//	class Texture;
//}
class Ship;
class Bullet;
class Asteroid;

class GameController : public aie::Application
{
public:
	GameController();
	~GameController();

	// VARIABLES

	int iAsteroidNumber = 10;

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
	Startup is an easier way to preload assets into the game, to be referenced later
	in other classes. rather than loading them in the constructor which might
	break the application / leak memory.

	Shutdown will be used similiar but this will replace the deconstructor.
	*/

	// Asteroid

	// Create an asteroid
	//m_Asteroid = new Asteroid();

	////<type> <name> = <initial value>
	

	Asteroid* createAsteroid(float X, float Y, float size);

	// Asteroid spawning
	void spawnAsteroids();

protected:

	aie::Renderer2D*	m_2dRender;      // Renders the gameObject.
	aie::Texture*		m_textureShip;   // Gets the allocated texture.
	aie::Texture*		m_textureBullet; // Gets the allocated texture.
	aie::Font*			m_font;          // Loads the font.
	aie::Audio*			m_audio;         // Imports Audio.

	float m_timer;

	// Ship
	Ship* m_ship;
	// Bullet
	Bullet* m_bullet;
	// Asteroid 
	std::list<Asteroid*> m_Asteroids;
};
