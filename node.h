#ifndef NODE_H
#define NODE_H

#include "linked_list.h"

typedef struct Node {
	int id;
	char * label;
	LinkedList * adjList;
} Node;

typedef struct CompoundNode {
	Node * node;
	int weight;
	Node * pi;
} CompoundNode;

Node * Node_new(int, char *);
CompoundNode * CompoundNode_new(Node *, int, Node *);

#endif
