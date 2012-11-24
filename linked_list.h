#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct GenericNode{
	unsigned int ptr;
	struct GenericNode * next;
} GenericNode;

typedef struct LinkedList {
	GenericNode * head;
	GenericNode * iter;
} LinkedList;

bool LinkedList_add(LinkedList *, void *);
void * LinkedList_next(LinkedList *);

#endif
