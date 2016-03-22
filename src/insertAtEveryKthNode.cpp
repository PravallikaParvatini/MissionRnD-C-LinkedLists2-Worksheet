/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	int count = 0;
	struct node *temp1 = head, *temp2 = head,*n;
	if (head == NULL)
		return NULL;
	while (temp1 != NULL)
	{
		count++;
		if (count%K == 0)
		{
			count = 0;
			n = (struct node *)malloc(sizeof(struct node));
			n->num = K;
			n->next = temp1->next;
			temp1->next = n;
			temp1 = n->next;
		}
		else
		temp1 = temp1->next;
	}
	return head;
}
