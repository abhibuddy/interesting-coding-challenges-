/*linear search in an array*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{	int arr[] = {10,20,30,40,50};
	int arr_size = sizeof(arr)/sizeof(int);
	int key =20 ;
	int result=0;
	for(int i = 0 ; i <arr_size ; i ++ )
	{
		if(arr[i]==key)
			result=1;
		else 
			continue;
	} 
	if(result)
		cout<<"Element found in array\n";
	else
		cout<<"Element is not preaent in array\n";

 	return 0;
}

