#include<iostream>
#include<bits/stdc++.h>
#include"basic.h"

using namespace std;

int main(){
	int arr[]={9,5,1,7,5,3,0,1,8,6,4};
	int size=sizeof(arr)/4;
	
	printarr(arr,size);
	
	for(int i=0;i<size/2;i++){
		int temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;	
	}
	
	printarr(arr,size);

	return 0;
}