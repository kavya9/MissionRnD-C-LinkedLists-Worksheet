/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if(head==NULL) return NULL;
	int temp;
	struct node *outer, *current, *previous, *sorted;
	sorted = NULL;
	outer = head;
	while (outer->next != sorted)
	{
		current = head;
		previous = head;
		while (current->next != sorted)
		{
			previous = current;
			current = current->next;
			if (previous->num > current->num)
			{
				temp = previous->num;
				previous->num = current->num;
				current->num = temp;
			}
		}
		sorted = current;
	}
	return head;
}