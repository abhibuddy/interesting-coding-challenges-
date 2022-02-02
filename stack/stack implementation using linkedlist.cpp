/*Stack implementation using linked list*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
struct Node* createNode(int data)
{
	struct Node* newNode = new Node;
	newNode->data = data ;
	newNode->next = NULL ;
	return newNode; 
 };
 
  int isEmpty(struct Node* root)
 {
 	return !root;
 } 
  
 void push(struct Node** root , int data )
 {
 	struct Node* newNode = createNode(data);
 	newNode->next=*root;
 	*root= newNode;
 	cout<<data<<" pushed into stack"<<endl;
 }
 int pop (struct Node** root)
 {
 	if(isEmpty(*root))
 	return INT_MIN;
 	struct Node* temp = *root;
 	*root = (*root)->next;
 	int popped_data = temp->data;
 	free(temp);
 	return popped_data;
 }
 int peek(struct Node* root)
 {
 	if(isEmpty(root))
 	return INT_MIN ;
 	
 	return root->data;
 }

int main()
{   struct Node* root = NULL;
	push(&root,10);
	push(&root,20);
	push(&root,30);
	cout<<"popped element from stack "<< pop(&root)<<endl;
	cout<<"Top element in stack is "<<peek(root)<<endl;
 	return 0;
}

