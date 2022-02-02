/*Queue Data Structure: array implementation*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Queue
{ 
public : 
int front, rear , size ;
unsigned capacity;
int * arr; 
};
Queue* createqueue(unsigned capacity)
{
	Queue* queue = new Queue();
	queue->front=queue->size = 0 ;
	queue->capacity=capacity;
	queue->rear = capacity-1;
	queue->arr = new int[queue->capacity];
	return queue;
 } 
 int isFull(Queue* queue)
 {
 	return (queue->size==queue->capacity);
 }
 int isEmpty(Queue* queue)
 {
 	return (queue->size==0);
 }
 void enqueue(Queue* queue, int value)
 {
 	if(isFull(queue))
 	return;
 	queue->rear= (queue->rear+1)%queue->capacity;
 	queue->arr[queue->rear]=value;
 	queue->size=queue->size+1;
 	cout<<value<<" inserted in queue\n";
 }
 int dequeue(Queue* queue)
 {
 	if(isEmpty(queue))
 	return INT_MIN;
 	int item = queue->arr[queue->front];
 	queue->front = (queue->front+1)%queue->capacity;
 	queue->size= queue->size-1;
 	return item;
 }
 int front(Queue* queue)
 {	if(isEmpty(queue))
 	return INT_MIN;
 	else
 	return queue->arr[queue->front];
 }
 int rear(Queue* queue)
 {
 	if(isEmpty(queue))
 	return INT_MIN;
 	else
 	return queue->arr[queue->rear];
 }
int main()
{	Queue* queue = createqueue(1000);
	enqueue(queue,10);
	enqueue(queue,20);
	enqueue(queue,30);
	enqueue(queue,40);
	cout<<dequeue(queue)<<" item removed from queue"<<endl;
	cout<<"Front item of queue is "<<front(queue)<<endl;
	cout<<"Rear item of queue is "<<rear(queue)<<endl;
 	return 0;
}

