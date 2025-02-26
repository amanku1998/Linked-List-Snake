#pragma once
#include <vector>
#include <SFML/System/Vector2.hpp>
#include "Level/LevelService.h"
#include "Player/SnakeController.h"

namespace Player
{
	class SnakeController;

	class PlayerService
	{
	private:
		SnakeController* snake_controller;
		void createController();
		void destroy();

	public:

		TimeComplexity getTimeComplexity();
		LinkedListOperations getLastOperation();

		PlayerService();
		~PlayerService();

		void initialize();
		void update();
		void render();

		void spawnPlayer();
		int getPlayerScore();
		std::vector<sf::Vector2i> getCurrentSnakePositionList();
	};

}