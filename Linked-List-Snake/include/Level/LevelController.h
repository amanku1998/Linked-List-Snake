#pragma once
#include <vector>
#include "LevelModel.h"

namespace Level
{
	class LevelView;

	class LevelController
	{
	public:

		LevelController();
		~LevelController();

		void initialize();
		void update();
		void render();

		void destroy();

		float getCellWidth();
		float getCellHeight();

	private:
		LevelModel* level_model;
		LevelView* level_view;
	};
}