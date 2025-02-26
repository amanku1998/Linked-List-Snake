#pragma once
#include"LinkedList/Node.h"

namespace LinkedList
{
	enum class Operation
	{
		HEAD,
		MID,
		TAIL,
	};

	class SingleLinkedList
	{
	protected:
		Node* head_node;

		float node_width;
		float node_height;
		sf::Vector2i default_position;
		Direction default_direction;

		Node* createNode();

	public:

		int linked_list_size;

		SingleLinkedList();
		~SingleLinkedList();

		void initialize(float width, float height, sf::Vector2i position, Direction direction);
		void render();
		//sf::Vector2i getNewNodePosition(Node* reference_node);
		void insertNodeAtHead();
		void insertNodeAtMiddle();
		void insertNodeAtTail();
		void insertNodeAtIndex(int index);
		void shiftNodesAfterInsertion(Node* new_node, Node* cur_node, Node* prev_node);
		void updateNodeDirection(Direction direction_to_set);
		void updateNodePosition();

		bool processNodeCollision();
		void removeNodeAtHead();
		void removeAllNodes();
		void shiftNodesAfterRemoval(Node* cur_node);
		void removeNodeAtIndex(int index);
		void removeNodeAt(int index);
		void removeNodeAtMiddle();
		void removeNodeAtTail();
		Node* getHeadNode();
		Node* findNodeAtIndex(int index);
		void removeHalfNodes();
		Direction reverse();
		Direction getReverseDirection(Direction reference_direction);
		void reverseNodeDirections();
		std::vector<sf::Vector2i> getNodesPositionList();
		sf::Vector2i getNewNodePosition(Node* reference_node, Operation operation);
		void initializeNode(Node* new_node, Node* reference_node, Operation operation);
		int findMiddleNode();
	};
}