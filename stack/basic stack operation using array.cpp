/*stack implementation using array*/
#include<bits/stdc++.h>
#include<iostream>
#define MAX 100
using namespace std;
class Stack 
{
int top;
public:
int arr[MAX];
Stack(){top = -1;}
bool push(int x);
int pop();
bool isEmpty();	
};
bool Stack::push(int x)
{
	if(top >= (MAX-1))
	{
		cout<<"stack overflow"<<endl;
		return false;
	}
	else
	{
		arr[++top]=x;
		cout<<"element "<<x<<" inserted in stack"<<endl;
		return true;
	}
}
int Stack::pop()
{
	if(top < 0)
	{
		cout<<"stack underflow"<<endl;
		return 0;
	}
	else
	{
		int x = arr[top--];
		return x;
	}
}
bool Stack::isEmpty()
{
	return (top < 0 );
}

int main()
{	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.pop()<<" poped from stack"<<endl;
	cout<<"stack is empty : "<< s.isEmpty()<<endl;
 	return 0;
}

