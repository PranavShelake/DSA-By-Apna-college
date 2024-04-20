#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int * printarr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return &arr[0]; 
}
