#include "UI/UIElement/RectangleShapeView.h"

namespace UI
{
	namespace UIElement
	{
		RectangleShapeView::RectangleShapeView() = default;

		RectangleShapeView::~RectangleShapeView() = default;

		void RectangleShapeView::initialize(sf::Vector2f rectangle_size, sf::Vector2f rectangle_position, int outline_thickness, sf::Color fill_color, sf::Color outline_color)
		{
			UIView::initialize();

		}

		void RectangleShapeView::update()
		{

		}

		void RectangleShapeView::render()
		{

		}
	}
}