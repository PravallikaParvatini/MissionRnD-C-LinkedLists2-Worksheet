/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	int count = 0, count1, median;
	struct node *temp = head;
	if (head == NULL)
		return -1;
	else
	{
		while (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		count1 = (count / 2);
		while ((count1)+(count % 2) - 2 >= 0)
		{
			head = head->next;
			count1--;
		}
		if (count % 2 != 0)
			median = head->num;
		else
			median = ((head->num) + (head->next->num)) / 2;
		return median;
	}
}
