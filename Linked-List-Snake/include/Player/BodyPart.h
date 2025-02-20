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

		sf::Vector2i getNextPositionUp();
		sf::Vector2i getNextPositionDown();
		sf::Vector2i getNextPositionLeft();
		sf::Vector2i getNextPositionRight();

	public:

		BodyPart();
		~BodyPart();

		void initialize(float width, float height, sf::Vector2i pos, Direction dir);
		void setPosition(sf::Vector2i position);
		void setDirection(Direction direction);

		void updatePosition();
		sf::Vector2i getNextPosition();
		sf::Vector2i getPosition();
		Direction getDirection();

		void render();
	};
}