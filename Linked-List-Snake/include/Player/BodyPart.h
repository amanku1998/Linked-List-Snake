#pragma once
#include "UI/UIElement/ImageView.h"
#include "Player/Direction.h"

namespace Player
{
	class BodyPart
	{
	protected:
		UI::UIElement::ImageView* bodypart_image;

		sf::Vector2i grid_position;
		Direction direction;

		float bodypart_width;
		float bodypart_height;

		void createBodyPartImage();
		void initializeBodyPartImage();
		sf::Vector2f getBodyPartScreenPosition();
		float getRotationAngle();
		void destroy();

	public:

		BodyPart();
		~BodyPart();

		void initialize(float width, float height, sf::Vector2i pos, Direction dir);
		void setDirection(Direction direction);

		void updatePosition();
		void render();
	};
}