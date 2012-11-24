#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

Node * Node_new(int id,
                char * label) {
	Node * n = (Node *) malloc(sizeof(Node));
	if (NULL == n) return NULL;
	n->id = id;
	n->label = (char *) malloc(sizeof(char) * (strlen(label)+1));
	if (NULL == (n->label)) {
		if (n) free(n);
		return NULL;
	}
	strcpy(n->label, label);
	n->adjList = NULL;
	return n;
}

CompoundNode * CompoundNode_new(Node * n,
                                int w,
                                Node * pi) {
	CompoundNode * cn = (CompoundNode *) malloc(sizeof(CompoundNode));
	if (NULL == cn) return NULL;
	cn->node = n;
	cn->weight = w;
	cn->pi = pi;
	return cn;
}
