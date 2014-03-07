#include "Element.h"
#include "Iterator.h"
#include <stdio.h>

Element *getElement(LinkedList *list, int data){
 Iterator *iter = getIterator(list);
 Element *elem;
 
 // elem = iter->next();
 // if(elem->data == data)
	// return elem;

 // elem = iter->next();
 // if(elem->data == data)
	// return elem;
	
	for(elem = iter->next();elem != NULL && elem->data !=data ;elem = iter->next())
	printf("elem : %d\n", elem->data);
	return elem;
}
