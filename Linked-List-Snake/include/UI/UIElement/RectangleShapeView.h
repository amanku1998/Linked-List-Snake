#pragma once
#include "UIView.h"

namespace UI
{
	namespace UIElement
	{
		class RectangleShapeView : public UIView
		{
		protected:
			sf::RectangleShape rectangle_shape;

		public:
			RectangleShapeView();
			virtual ~RectangleShapeView();

			virtual void initialize(sf::Vector2f rectangle_size, sf::Vector2f rectangle_position, int outline_thikness = 0, sf::Color fill_color = sf::Color::Transparent, sf::Color outline_color = sf::Color::Transparent);
			virtual void update() override;
			virtual void render() override;

		};
	}
}