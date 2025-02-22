#pragma once
#include "../../include/Level/LevelNumber.h"
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

		void createLevel(LevelNumber level_to_load);
		float getCellWidth();
		float getCellHeight();
		void spawnLevelElements(LevelNumber level_to_load);

	private:
		LevelController* level_controller;
		LevelNumber current_level;

		void createLevelController();
		void destroy();

		void spawnPlayer();
	};
}