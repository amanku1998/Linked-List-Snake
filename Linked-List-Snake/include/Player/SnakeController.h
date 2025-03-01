#pragma once
#include <SFML/System/Vector2.hpp>
#include "Direction.h"
#include "LinkedListLib/Node.h"
#include "LinkedListLib/LinkedList.h"
#include "Food/FoodType.h"

namespace Player
{
	using namespace LinkedListLib;
	using namespace Food;

	enum class TimeComplexity
	{
		NONE,
		ONE,
		N,
	};

	enum class LinkedListOperations
	{
		NONE,
		INSERT_AT_HEAD,
		INSERT_AT_TAIL,
		INSERT_AT_MID,
		REMOVE_AT_HEAD,
		REMOVE_AT_TAIL,
		REMOVE_AT_MID,
		DELETE_HALF_LIST,
		REVERSE_LIST,
	};

	enum class InputState
	{
		WAITING,
		PROCESSING
	};

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
		float restart_counter;
		Direction current_snake_direction;
		InputState current_input_state;

		const float movement_frame_duration = 0.1f;

		int player_score;
		TimeComplexity time_complexity;
		LinkedListOperations last_linked_list_operation;

		void processPlayerInput();
		void updateSnakeDirection();
		void moveSnake();
		void processSnakeCollision();
		void handleRestart();
		void reset();
		void destroy();

	public:

		LinkedList* linked_list;
		const float restart_duration = 2.f;

		SnakeController();
		~SnakeController();

		void initialize();
		void update();
		void render();

		void spawnSnake();
		void respawnSnake();
		void setSnakeState(SnakeState state);
		SnakeState getSnakeState();
		int getPlayerScore();
		TimeComplexity getTimeComplexity();
		LinkedListOperations getLastOperation();

		void createLinkedList();
		void delayedUpdate();
		std::vector<sf::Vector2i> getCurrentSnakePositionList();

		void processBodyCollision();
		void processElementsCollision();
		void processFoodCollision();
		void OnFoodCollected(FoodType food_type);
	};
}