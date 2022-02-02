/*Linked List*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
void printlinkedlist(Node *n)
{
	while(n != NULL)
	{
		cout<<n->data<<" ";
		n= n->next;
	}
}
int main()
{	
	Node *head = new Node();
	Node *second = new Node();
	Node *third = new Node();
	head->data = 5 ;
	head->next = second;
	second->data = 6 ;
	second->next=third;
	third->data=7;
	third->next=NULL;
	printlinkedlist(head);
 	return 0;
}

