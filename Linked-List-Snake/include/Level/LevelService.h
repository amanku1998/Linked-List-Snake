#pragma once
#include "../../include/Level/LevelNumber.h"

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

	private:
		LevelController* level_controller;
		LevelNumber current_level;

		void createLevelController();
		void destroy();

		void spawnPlayer();
	};
}