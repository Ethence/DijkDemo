#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include "node.h"
#include "dot.h"
#include "linked_list.h"
#define LABEL_SIZE 16

LinkedList * readDotFile(char * fileName) {
	//char * nodeFormat = "%d [label=\"%d%[^\"]\"];";
	char * nodeFormat = "%d [label=\"%[^\"]\"];";
	char * edgeFormat = "%d -> %d [weight=%d];";
	LinkedList * list = malloc(sizeof(LinkedList));
	FILE * fin = fopen(fileName, "r");
	char * buff = (char *) malloc(sizeof(char) * MAX_BUFF_LEN);
	while (fgets(buff, MAX_BUFF_LEN, fin) != NULL) {
		//buff[MAX_BUFF_LEN-1] = '\0';
		//fprintf(stdout, "%s\n", buff);
		int id = 0;
		char * lb = (char *) malloc(sizeof(char)*LABEL_SIZE);
		int s = 0, d = 0, w = 0;
		if (2 == sscanf(buff, nodeFormat, &id, lb)) {
			fprintf(stdout, "%d %s\n", id, lb);
		}
		else if (3 == sscanf(buff, edgeFormat, &s, &d, &w)) {
			fprintf(stdout, "%d -> %d: %d\n", s, d, w);
		}
		else continue;
	}
	if (buff) free(buff);
	if (fin) fclose(fin);
}
