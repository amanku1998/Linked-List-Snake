#pragma once
#include <vector>
#include "LevelModel.h"
#include <Element/ElementData.h>

namespace Level
{
	using namespace Element;

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
		const std::vector<ElementData>& getElementDataList(int level_to_load);
	};
}