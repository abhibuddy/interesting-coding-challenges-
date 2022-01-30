/*Binary Search : Iterative*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int binarysearch(int arr[],int l, int r , int key )
{
	while(l<r)
	{
		int mid = ( l + r )/2;
		
		if(arr[mid]==key)
		return mid;
		
		else if(arr[mid]>key)
		l= mid + 1 ;
		
		else
		r = mid - 1 ; 
	}
	return -1 ; 
}
int main()
{	int arr[] = {10,20,30,40,50};
	int key=3;
	
	if(binarysearch(arr,0,4,key)==-1)
		cout<<"element is not present in the array"<<endl;
	else
		cout<<"element found at ["<<binarysearch(arr,0,4,key)<<"] index of array"<<endl;
 	return 0;
}

