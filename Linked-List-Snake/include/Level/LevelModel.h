#pragma once
#include <SFML/System/Vector2.hpp>
#include <vector>
#include "LevelData.h"

namespace Level
{
	class LevelModel
	{
	public:

		static const int number_of_rows = 28;
		static const int number_of_columns = 50;

		LevelModel();
		~LevelModel();

		void initialize(int width, int height);

		float getCellWidth();
		float getCellHeight();

	private:

		std::vector<LevelData> level_configurations;

		float cell_width;
		float cell_height;
	};
}