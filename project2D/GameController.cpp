#include "GameController.h"
#include "Application2D.h"
#include "Input.h"
#include "Texture.h"


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
	//m_2dRender =	new aie::Renderer2D();

	//m_texture =	new aie::Texture("./textures/numbered_grid.tga");

	//m_font =		new aie::Font("./font/consolas.ttf", 32);

	//m_audio =		new aie::Audio("./audio/powerup.wav");
}

void GameController::shutdown()
{
	delete m_audio;
	delete m_font;
	delete m_texture;
	delete m_2dRender;
}


void GameController::update(float deltaTime)
{
	m_timer += deltaTime;

	// SPAWN GENERATOR: Asteroids
	for (int i = 0; i < iAsteroidNumber; ++i)
	{

		aie::Input* input = aie::Input::getInstance();

		if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
		{
			// Shoot
		}

		if (input->wasKeyPressed(aie::INPUT_KEY_A))
		{
			// Rotate CounterClockwise
		}

		if (input->wasKeyPressed(aie::INPUT_KEY_D))
		{
			// Rotate Clockwise
		}


		/*
		int m_asteroid[i]; // temp until class is made.
		int m_ship;		   // temp until class is made.

		//	Generates Asteroid Numbers
		for ((m_asteroid[i]->Position() - m_ship->Position()).glm::length() < 20)
		{
			// Calculates the position of the asteroid if it enters, remove health /detroy ship.
		}
		*/


		/*
		for ((m_bullet[e]->Position() - m_asteroid[i]->Position()).gml::length() < 20)
		{
			if (m_asteroid[i] == 1) // Large Asteroid
			{
				// Destroy large asteroid, spawn 2 medium asteroids and add points.
			}

			if (m_asteroid[i] == 2) // Medium Asteroid
			{
				// Destroy medium asteroid, spawn 1 small asteroid and add points.
			}

			else
			{
				// Destroy Asteroid and add points.
			}
		}
		*/

	}




}

void GameController::draw()
{
	clearScreen();

	m_2dRender->begin();
}