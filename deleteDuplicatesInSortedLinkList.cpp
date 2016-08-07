//copyright Allen X
//Sun 1:59 PM

#include<iostream>
using namespace std;

typedef struct node {
	int nodeValue;
	struct node *next;
}ListNode;

ListNode *deleteDuplicates(ListNode *head) {
	if (head == NULL) {
		return head;
	}
	ListNode *currentNode = head;
	if (currentNode -> nodeValue == currentNode -> next -> nodeValue) {
		currentNode -> next = currentNode -> next -> next;
	} else {
		currentNode = currentNode -> next;
	}
	return head;
}

int main() {
	ListNode *tail;
	tail -> nodeValue = 3;
	tail -> next = NULL;
	ListNode *foo2;
	foo2 -> nodeValue = 3;
	foo2 ->next = tail;
	ListNode *foo1;
	foo1 -> nodeValue = 2;
	foo1 -> next = foo2;
    ListNode *head;
	head -> nodeValue = 1;
	head -> next = foo1;

	ListNode *newHead = deleteDuplicates(head);

	while (newHead != NULL) {
		cout<<"The new list is:"<<endl;
		cout<<newHead -> nodeValue;
		newHead = newHead -> next;
	}
	return 0;
}
