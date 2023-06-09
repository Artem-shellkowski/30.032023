﻿#pragma once
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH{ 800.f };
const float WINDOW_HEIGHT{ 800.f };
const std::string WINDOW_TITLE{ "SFML SPACE SHOOTER " };
const size_t FPS{ 60 };

const std::string IMAGES_FOLDER{ "images\\" };
const std::string PLAYER_FILE_NAME{ "playerShip3_orange.png" };
const sf::Vector2f PLAYER_START_POS{ WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 };
const int METEORS_QTY{ 20 };
const sf::Vector2f GAMEOVER_START_POS{ WINDOW_WIDTH * 2, WINDOW_HEIGHT * 2 };
const std::string GAMEOVER_FILE_NAME{ "gameover.png" };

const std::string LASER_FILE_NAME{ "laserBlue12.png" };
const float LASER_SPEED = -15.f;
const int FIRE_COOLDOWN = 200;

const std::string FONT_FILE_NAME = "Samson.ttf";
const int FONT_SIZE = 32;
