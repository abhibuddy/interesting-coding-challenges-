/*factorial using recursion*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fact(int n )
{
if(n<=1)
	{
		return 1;
	}
else 
	return n * fact(n-1);
}

int main()
{
	cout<<"factorial of 6 is "<< fact (6);
 	return 0;
}

