#include "node.h"
#include "dot.h"
#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LABEL_SIZE 10


void main(int argc, char ** argv) {
	char * fileName = "class-graph.dot";
	LinkedList * graphNodeList = readDotFile(fileName);
	/*
	LinkedList * graphNodeList = malloc(sizeof(LinkedList));

	Node * s = Node_new(90, "node90");
	s->adjList = (LinkedList *)malloc(sizeof(LinkedList));
	LinkedList_add(graphNodeList, (void *)s);
	
	Node * n1 = Node_new(11, "node11");
	LinkedList_add(graphNodeList, (void *)n1);
	CompoundNode * cn1 = CompoundNode_new(n1, 25, s);
	LinkedList_add(s->adjList, (void *)cn1);

	Node * n2 = Node_new(21, "node21");
	LinkedList_add(graphNodeList, (void *)n2);
	CompoundNode * cn2 = CompoundNode_new(n2, 23, s);
	LinkedList_add(s->adjList, (void *)cn2);

	Node * n3 = Node_new(31, "node31");
	LinkedList_add(graphNodeList, (void *)n3);
	CompoundNode * cn3 = CompoundNode_new(n3, 17, s);
	LinkedList_add(s->adjList, (void *)cn3);

	fprintf(stdout, "Nodes in the graph:\n");
	void * next = LinkedList_next(graphNodeList);
	while (NULL != next) {
		fprintf(stdout, "%s\n", ((Node *) next)->label);
		next = LinkedList_next(graphNodeList);
	}

	fprintf(stdout, "Adjencent nodes of s:\n");
	next = LinkedList_next(s->adjList);
	while (NULL != next) {
		fprintf(stdout, "%s: %d\n", (((CompoundNode *) next)->node)->label, (((CompoundNode *) next)->weight));
		next = LinkedList_next(s->adjList);
	}
	*/
}
