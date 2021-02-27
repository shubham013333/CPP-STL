//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
//SORT
void show(int arr[],int array_size)
{
    for(int i=0;i<array_size;i++)
    cout<<arr[i]<<" "<<"\n";
}
int main() {
	int arr[] = { 2,9,5,3,4,5,7};
	
	int asize=sizeof(arr)/sizeof(arr[0]);
	cout<<"The array before sorting\n";
	show(arr,asize);

	sort(arr,arr+asize);
		cout<<"The array after sorting\n";
		show(arr,asize);
	
	return 0;
}
//BINARY SEARCH
void show(int arr[],int array_size)
{
    for(int i=0;i<array_size;i++)
    cout<<arr[i]<<" ";
}
int main(){
    
    int arr[]={1,5,8,9,23,45,67,89,166,234,545,789};
    
    int asize = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array Before Searching\n";
    
    show(arr,asize);
    cout<<"We want to search a element\n";
    if(binary_search(arr,arr+asize,2))
    cout<<"Element found in array";
    else
    cout<<"Element Not Found in array";
    
    return 0;
    
}
