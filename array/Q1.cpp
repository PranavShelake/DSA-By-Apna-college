#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//first way
int main(){
	
	int arr[]={9,5,8,5,6,7,-2,1,0,-4,9};
	int min=arr[0],max=arr[0];
	for(int i=0;i<sizeof(arr)/4;i++){
		if(min>arr[i])	min=arr[i];
		if(max<arr[i])	max=arr[i];
	}
	cout<<min<<" "<<max<<endl;

	sort(arr,arr+11);
	for(int i=0;i<sizeof(arr)/4;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"endl";
	return 0;
}

//second way
/*
int main(){
	
	int arr[]={9,5,8,5,6,7,-2,1,0,-4,9};
	int size=sizeof(arr)/4;
	sort(arr,arr+size);
	
	int min=arr[0],max=arr[size];
	cout<<endl<<"endl";
	return 0;
}
*/
