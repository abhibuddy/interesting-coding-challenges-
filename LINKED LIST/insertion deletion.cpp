/* Insertion and deletion in linkedlist */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node {
	public : 
	int data;
	Node* next;
};
void push(Node **head , int data)
{
	Node* new_node = new Node();
	new_node->data=data;
	new_node->next = *head;
	*head = new_node; 
}
void append(Node **head, int data)
{
	Node* last = *head;
	
	Node* newNode= new Node();
	newNode->data=data;
	newNode->next=NULL;
	if(*head == NULL)
	{
		*head = newNode;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = newNode;
	return;
}
void insertAfter(Node *prev_node,int data)
{
	if(prev_node == NULL)
	{
		cout<<"\nprevious node can't be null\n";
		return;
	}
	Node *new_node = new Node();
	new_node->data=data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}
void deleteNode(Node **head,int data)
{
	Node *prev = NULL;
	Node *temp=*head;
	if(temp != NULL && temp->data==data)
	{
		*head=temp->next;
		delete temp;
		return;
	}
	else 
	while(temp != NULL && temp->data != data)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		return;
	}
	prev->next=temp->next;
	delete temp;
}
void printlist(Node *node)
{
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node= node->next;
		
	}
}
int main()
{	Node *head = NULL;
	push(&head,8);
	push(&head,10);
	push(&head,9);
	push(&head,2);
	push(&head,3);
	append(&head,100);
	insertAfter(head->next,400);
	deleteNode(&head,9);
	cout<<"created list is : \n";
	printlist(head);
 	return 0;
}

