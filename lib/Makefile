CFLAGS = -Wall -g -DDEBUG	
CC = g++

NumTest: main.o stack.o queue.o slist.o dlist.o heap.o bst.o avl.o
		${CC} ${CFLAGS} -o NumTest main.o node.o

main.o: main.cpp
		${CC} ${CFLAGS} -c main.cpp
		
stack.o: Stack.cpp
		${CC} ${CFLAGS} -c Stack.cpp

queue.o: Queue.cpp
		${CC} ${CFLAGS} -c Queue.cpp

slist.o: Slist.cpp
		${CC} ${CFLAGS} -c Slist.cpp

dlist.o: Dlist.cpp
		${CC} ${CFLAGS} -c Dlist.cpp

head.o: Heap.cpp
		${CC} ${CFLAGS} -c Heap.cpp

bst.o: Bst.cpp
		${CC} ${CFLAGS} -c Bst.cpp

avl.o: Avl.cpp
		${CC} ${CFLAGS} -c Avl.cpp
		
clean: 
		rm -f core *.o