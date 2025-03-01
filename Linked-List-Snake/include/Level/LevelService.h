#pragma once
#include "../../include/Level/LevelConfig.h"
//#include "LevelModel.h"

namespace Level
{
	class LevelController;

	class LevelService
	{
	public:
		LevelService();
		~LevelService();

		void initialize();
		void update();
		void render();

		void createLevel(LinkedListType linked_list_type);
		void setCurrentLevelNumber(LevelNumber level_to_load);

		float getCellWidth();
		float getCellHeight();

		LevelNumber getCurrentLevel();
		LinkedListType getCurrentLinkedListType();

	private:
		LevelController* level_controller;
		LevelNumber current_level;
		LinkedListType current_linked_list_type;

		void createLevelController();
		void destroy();

		void spawnPlayer();
		void spawnFood();
		void spawnLevelElements(LevelNumber level_to_load);
	};
}