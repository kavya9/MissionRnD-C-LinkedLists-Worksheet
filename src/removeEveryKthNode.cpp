/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *current, *previous;
	int  cnt;
	if(K<=0) return NULL;
	if (head == NULL) return NULL;
	current = head;
	previous = head;
	if (K == 1) return NULL;
	cnt = K - 1;
	while (cnt>0)
	{
		if (current->next == NULL) break;
		previous = current;
		current = current->next;
		cnt--;
		if (cnt == 0)
		{
			cnt = K;
			previous->next = current->next;
		}
	}
		return head;
}