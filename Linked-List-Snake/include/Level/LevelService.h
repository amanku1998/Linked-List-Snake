#pragma once
#include "../../include/Level/LevelNumber.h"

namespace Level
{
	class LevelController;

	class LevelService
	{
	public:
		LevelController* level_controller;
		LevelNumber current_level;

		LevelService();
		~LevelService();

		void initialize();
		void update();
		void render();

		void createLevel(LevelNumber level_to_load);

	private:

		void createLevelController();
		void destroy();
	};
}