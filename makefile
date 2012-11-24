CC = gcc

dijk: main.o dot.o linked_list.o node.o
	$(CC) -o dijk main.o dot.o linked_list.o node.o

main.o: main.c
	$(CC) -c main.c

dot.o: dot.c
	$(CC) -c dot.c

linked_list.o: linked_list.c
	$(CC) -c linked_list.c

node.o: node.c
	$(CC) -c node.c

clean:
	rm -f dijk main.o dot.o linked_list.o node.o
