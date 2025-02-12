#pragma once
#include <vector>
#include "LevelModel.h"

namespace Level
{
	class LevelView;

	class LevelController
	{

	private:
		LevelModel* level_model;
		LevelView* level_view;

	public:

		LevelController();
		~LevelController();

		void initialize();
		void update();
		void render();

		void destroy();

		float getCellWidth();
		float getCellHeight();
	};
}