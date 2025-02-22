#pragma once
#include <vector>
#include <SFML/System/Vector2.hpp>

namespace Element
{
	class Obstacle;
	struct ElementData;

	class ElementService
	{
	private:
		std::vector<Obstacle*> obstacle_list;

	public:

		ElementService();
		~ElementService();

		void initialize();
		void update();
		void render();

		const void spawnElements(std::vector<ElementData>& element_data_list, float cell_width, float cell_height);
		void spawnObstacle(sf::Vector2i position, float cell_width, float cell_height);
	};
}