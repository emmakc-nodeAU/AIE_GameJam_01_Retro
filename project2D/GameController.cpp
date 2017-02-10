#include "GameController.h"
#include "Application2D.h"
#include "Input.h"
#include "Texture.h"
#include "Ship.h"
#include "Bullet.h"
#include "Asteroid.h"


// Foward Declaring

/////////
GameController::GameController()

{

}

GameController::~GameController()
{

}
/////////

bool GameController::startup()
{
	m_2dRender =	new aie::Renderer2D();


	m_ship = new Ship();

	m_bullet = new Bullet();
	m_bullet->setPosition(40, 40);
	m_ship->setPosition(500, 500);
	// Texture: Ship
	m_textureShip =	new aie::Texture("./textures/ship_01.png");
	// Texture: Bullet
	m_textureBullet = new aie::Texture("./textures/bullet.png");
	// Texture: Asteroid
	m_textureBullet = new aie::Texture("./textures/Asteroids.png");

	//m_font =		new aie::Font("./font/consolas.ttf", 32);

	//m_audio =		new aie::Audio("./audio/powerup.wav");

	return true;
}

void GameController::shutdown()
{
	//delete m_audio;
	//delete m_font;
	delete m_textureShip;
	delete m_textureBullet;
	delete m_bullet;
	delete m_ship;
	delete m_2dRender;

}

Asteroid * GameController::createAsteroid(float X, float Y, float size)
{
	// Create A.
	Asteroid* asteroid = new Asteroid();
	// Assign value of X,Y positions
	X = 0;
	Y = 0;
	// Set Initial Position of Asteroid
	asteroid->setPosition(X, Y);
	// Set Size of Asteroid
	asteroid->setSize(10);
	// Return 
	return 0;
}

Bullet * GameController::createBullet(float x, float y, float size)
{
	Bullet* bullet = new Bullet();
	//pos
	//size
	return 0;
}

void GameController::spawnAsteroids()
{
	// Check Number of Asteroids
	if (m_Asteroids.empty() == true)
	{
		for (int i = 0; i < iAsteroidNumber; ++i)
		{
			Asteroid* asteroid = createAsteroid(0, 0, 10);
			m_Asteroids.push_back(asteroid);
		}
	}
}

void GameController::spawnBullets()
{
	// Tells the console to spawn the bullet at the ship.
	Bullet* bullet = createBullet(m_ship->getX(), m_ship->getY(), m_ship->getRotation());
	bulletList.push_back(bullet);
}



void GameController::update(float deltaTime)
{
	aie::Input* input = aie::Input::getInstance();

	//// Game Time
	m_timer += deltaTime;

	m_ship->update(deltaTime);

	// Asteroids - 
	spawnAsteroids();
	
	for (auto it = bulletList.begin(); it != bulletList.end(); ++it)
	{
		Bullet* bullet = *it;

		if (bullet->getX() < 0)					bulletList.remove(bullet);
		if (bullet->getX() > getWindowWidth())	bulletList.remove(bullet);
		if (bullet->getY() > 0)					bulletList.remove(bullet);
		if (bullet->getY() < getWindowHeight())	bulletList.remove(bullet);

		bullet->update(deltaTime);
	}
	
	//Shoots the bullet
	if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	{
		spawnBullets();
	}


	//// INPUT for Ship movement
	//aie::Input* input = aie::Input::getInstance();

	//if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	//{
	//	// Shoot
	//}

	//if (input->wasKeyPressed(aie::INPUT_KEY_A))
	//{
	//	// Rotate CounterClockwise
	//}

	//if (input->wasKeyPressed(aie::INPUT_KEY_D))
	//{
	//	// Rotate Clockwise
	//}

	// SPAWN GENERATOR: Asteroids
	//for (int i = 0; i < iAsteroidNumber; ++i)
	//{


		// ASTEROID: Collision detection
		/*
		int m_asteroid[i]; // temp until class is made.
		int m_ship;		   // temp until class is made.


		glm::vec3 distanceVector(20,0,0)
		float length = glm::length(distanceVector);

		for ((m_asteroid[i]->Position() - m_ship->Position()).length < 20)
		{
			m_asteroid[i]->update(deltaTime); // Updates position of asteroids.


			//RE: if(length < 20) {//Do Stuff}
			// Calculates the position of the asteroid if it enters, remove health /detroy ship.
		}
		*/

		// BULLET: Collision detection

		/*
		for ((m_bullet[e]->Position() - m_asteroid[i]->Position()).gml::length() < 20)
		{
			if (m_asteroid[i] == 1) // Large Asteroid
			{
				// Destroy large asteroid, spawn 2 medium asteroids and add points. Delete bullet.
			}

			if (m_asteroid[i] == 2) // Medium Asteroid
			{
				// Destroy medium asteroid, spawn 1 small asteroid and add points. Delete bullet
			}

			else
			{
				// Destroy Asteroid and add points. Delete bullet
			}
		}
		*/

	//}




}

void GameController::draw()
{
	clearScreen();

	m_2dRender->begin();
	m_2dRender->drawSprite(m_textureShip,m_ship->getX(),m_ship->getY(),64.0f,64.0f, m_ship->getRotation());
	//m_2dRender->drawSprite(m_textureAsteroids, m_Asteroids->getX(), m_Asteroids->getY(), 64.0f, 64.0f, m_Asteroids->getRotation());
	m_2dRender->drawSprite(m_textureBullet, m_bullet->getX(), m_bullet->getY(), 64.0f, 64.0f, 0);
	m_2dRender->end();
}