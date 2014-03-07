#ifndef Element_H
#define Element_H

#include "Iterator.h"

typedef struct Element_t{
 struct Element_t *next;
 int data;
}Element;

Element *getElement(LinkedList *list, int data);

#endif // Element_H
