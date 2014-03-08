#include "unity.h"
#include "Element.h"
#include "Iterator.h"
#include "mock_Iterator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getElement_given_1_in_List_with_data_4_should_return_the_element(void){
	LinkedList list;
	Iterator iterator = {.next=getNext};
	Element elem = {.data = 4};
	Element *returnElem;
	
	getIterator_ExpectAndReturn(&list,&iterator);
	getNext_ExpectAndReturn(&elem);
	
	//Call SuT
	printf("======TEST 1=====\n");
	returnElem = getElement(&list , 4);
	
	TEST_ASSERT_NOT_NULL(returnElem);
	TEST_ASSERT_EQUAL(4, returnElem->data);
}

void test_getElement_given_2_in_List_with_last_is_data_4_should_return_the_element(void){
	LinkedList list;
	Iterator iterator = {.next=getNext};
	Element elem[] = {{.data = 1},
					  {.data = 4}};
	Element *returnElem;
	
	getIterator_ExpectAndReturn(&list,&iterator);
	getNext_ExpectAndReturn(&elem[0]);
	getNext_ExpectAndReturn(&elem[1]);
	
	//Call SuT
	printf("======TEST 2=====\n");
	returnElem = getElement(&list , 4);
	
	TEST_ASSERT_NOT_NULL(returnElem);
	TEST_ASSERT_EQUAL(4, returnElem->data);
}
void test_getElement_given_3_in_List_with_last_is_data_4_should_return_the_element(void){
	LinkedList list;
	Iterator iterator = {.next=getNext};
	Element elem[] = {{.data = 1},
					  {.data = 3},
					  {.data = 4}};
	Element *returnElem;
	
	getIterator_ExpectAndReturn(&list,&iterator);
	getNext_ExpectAndReturn(&elem[0]);
	getNext_ExpectAndReturn(&elem[1]);
	getNext_ExpectAndReturn(&elem[2]);
	
	//Call SuT
	printf("======TEST 3=====\n");
	returnElem = getElement(&list , 4);
	
	TEST_ASSERT_NOT_NULL(returnElem);
	TEST_ASSERT_EQUAL(4, returnElem->data);
}
void test_getElement_given_3_in_List_with_last_is_data_4_should_return_NULL(void){
	LinkedList list;
	Iterator iterator = {.next=getNext};
	Element elem[] = {{.data = 1},
					  {.data = 3},
					  {.data = 6}};
	Element *returnElem;
	
	getIterator_ExpectAndReturn(&list,&iterator);
	getNext_ExpectAndReturn(&elem[0]);
	getNext_ExpectAndReturn(&elem[1]);
	getNext_ExpectAndReturn(&elem[2]);
	getNext_ExpectAndReturn(NULL);
	
	//Call SuT
	printf("======TEST 4=====\n");
	returnElem = getElement(&list , 4);
	
	TEST_ASSERT_NULL(returnElem);
	//TEST_ASSERT_EQUAL(4, returnElem->data);
}
void test_getElement_given_5_in_List_with_last_is_data_4_should_return_the_element(void){
	LinkedList list;
	Iterator iterator = {.next=getNext};
	Element elem[] = {{.data = 1},
					  {.data = 3},
					  {.data = 4},
					  {.data = 5},
					  {.data = 6}};
	Element *returnElem;
	
	getIterator_ExpectAndReturn(&list,&iterator);
	getNext_ExpectAndReturn(&elem[0]);
	getNext_ExpectAndReturn(&elem[1]);
	getNext_ExpectAndReturn(&elem[2]);

	
	//Call SuT
	printf("======TEST 5=====\n");
	returnElem = getElement(&list , 4);
	
	TEST_ASSERT_NOT_NULL(returnElem);
	TEST_ASSERT_EQUAL(4, returnElem->data);
}
void test_getElement_given_6_in_List_with_last_is_data_4_should_return_the_element(void){
	LinkedList list;
	Iterator iterator = {.next=getNext};
	Element elem[] = {{.data = 1},
					  {.data = 3},
					  {.data = 4},
					  {.data = 5},
					  {.data = 6},
					  {.data = 7}};
	Element *returnElem;
	
	getIterator_ExpectAndReturn(&list,&iterator);
	getNext_ExpectAndReturn(&elem[0]);
	getNext_ExpectAndReturn(&elem[1]);
	getNext_ExpectAndReturn(&elem[2]);

	
	//Call SuT
	printf("======TEST 6=====\n");
	returnElem = getElement(&list , 4);
	
	TEST_ASSERT_NOT_NULL(returnElem);
	TEST_ASSERT_EQUAL(4, returnElem->data);
}
void test_getElement_given_7_in_List_with_last_is_data_4_should_return_the_element(void){
	LinkedList list;
	Iterator iterator = {.next=getNext};
	Element elem[] = {{.data = 1},
					  {.data = 3},
					  {.data = 4},
					  {.data = 5},
					  {.data = 6},
					  {.data = 7},
					  {.data = 8}};
	Element *returnElem;
	
	getIterator_ExpectAndReturn(&list,&iterator);
	getNext_ExpectAndReturn(&elem[0]);
	getNext_ExpectAndReturn(&elem[1]);
	getNext_ExpectAndReturn(&elem[2]);

	
	//Call SuT
	printf("======TEST 7=====\n");
	returnElem = getElement(&list , 4);
	
	TEST_ASSERT_NOT_NULL(returnElem);
	TEST_ASSERT_EQUAL(4, returnElem->data);
}