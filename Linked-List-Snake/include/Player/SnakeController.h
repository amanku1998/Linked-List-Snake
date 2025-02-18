#pragma once
#include <SFML/System/Vector2.hpp>
#include "Direction.h"
#include "LinkedList/SingleLinkedList.h"

namespace Player
{
	using namespace LinkedList;

	enum class SnakeState
	{
		ALIVE,
		DEAD,
	};

	class SnakeController
	{

	private:
		const int initial_snake_length = 10;

		const sf::Vector2i default_position = sf::Vector2i(25, 13);
		const Direction default_direction = Direction::RIGHT;

		SnakeState current_snake_state;
		float elapsed_duration;
		Direction current_snake_direction;

		const float movement_frame_duration = 0.1f;

		void processPlayerInput();
		void updateSnakeDirection();
		void moveSnake();
		void processSnakeCollision();
		void handleRestart();
		void reset();
		void destroy();

	public:

		SingleLinkedList* single_linked_list;

		SnakeController();
		~SnakeController();

		void initialize();
		void update();
		void render();

		void spawnSnake();
		void respawnSnake();
		void setSnakeState(SnakeState state);
		SnakeState getSnakeState();

		void createLinkedList();
		void delayedUpdate();
	};
}