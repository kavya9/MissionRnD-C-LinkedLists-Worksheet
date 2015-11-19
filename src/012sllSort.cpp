/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *current;
	int flag0 = 0, flag1 = 0, flag2 = 0;
	current = head;
	while (current != NULL)
	{
		if (current->data == 0)flag0++;
		else if (current->data == 1)flag1++;
		else flag2++;
		current = current->next;
	}
	current = head;
	while (flag0>0)
	{
		current->data = 0;
		current = current->next;
		flag0--;
	}
	while (flag1>0)
	{
		current->data = 1;
		current = current->next;
		flag1--;
	}
	while (flag2>0)
	{
		current->data = 2;
		current = current->next;
		flag2--;
	}
}