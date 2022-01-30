/*Binary Search : recursive */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int binarysearch_rec(int arr[],int l, int r , int key )
{
	while(l<r)
	{
		int mid = ( l + r )/2;
		
		if(arr[mid]==key)
		return mid;
		
		else if(arr[mid]>key)
		return binarysearch_rec(arr,l+1,r,key);
		
		else
		return binarysearch_rec(arr,l,r-1,key); 
	}
	return -1 ; 
}
int main()
{	int arr[] = {10,20,30,40,50};
	int key = 30 ; 
	if(binarysearch_rec(arr,0,4,key)==-1)
		cout<<"element is not present in the array"<<endl;
	else
		cout<<"element found at ["<<binarysearch_rec(arr,0,4,key)<<"] index of array"<<endl;
 	return 0;
}
