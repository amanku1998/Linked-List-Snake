#pragma once
#include"LinkedListLib/SingleLinked/SingleLinkedList.h"
#include <vector>
#include <SFML/System/Vector2.hpp>
#include "LinkedListLib/Node.h"

namespace Element
{
	class Obstacle;
	struct ElementData;

	using namespace LinkedListLib;

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

		std::vector<sf::Vector2i> getElementsPositionList();
		bool processElementsCollision(LinkedListLib::Node* head_node);
	};
}