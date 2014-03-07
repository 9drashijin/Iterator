#ifndef Iterator_H
#define Iterator_H

typedef struct{
	void *head;
	void *tail;
} LinkedList;

typedef struct{
	LinkedList *list;
	void *current;
	void *(*next)(void);
}Iterator;

void *getIterator(LinkedList *list);
void *getNext(void);

#endif // Iterator_H
