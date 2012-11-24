#include "linked_list.h"

bool LinkedList_add(LinkedList * list, 
                    void * ptr) {
	if (NULL == list) return false;
	if (NULL == list->head) {
		list->head = (GenericNode *) malloc(sizeof(GenericNode));
		if (NULL == list->head) return false;
		list->iter = list->head;
		(list->head)->ptr = (unsigned int) ptr;
		(list->head)->next = NULL;
	}
	else {
		GenericNode * curr = list->head;
		while (curr->next != NULL) curr = curr->next;
		curr->next = (GenericNode *) malloc(sizeof(GenericNode));
		if (curr->next == NULL) return false;
		(curr->next)->ptr = (unsigned int) ptr;
		(curr->next)->next = NULL;
	}
	return true;
}

void * LinkedList_next(LinkedList * list) {
	if (NULL == list->iter) return NULL;
	unsigned int ref = (list->iter)->ptr;
	list->iter = (list->iter)->next;
	return ((void *) ref);
}
