#include<iostream>
#include"basic.h"

using namespace std;

int main() {
    
    int arr[]={12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    int i,size=sizeof(arr)/4;
    sort(arr,arr+size);
    int m=7;
    int min=INT_MAX,result;
    while(i<size-m+1){
    	result=arr[i+m-1]-arr[i];
    	if(min>result)	min=result; 
    	i++;
	}
	cout<<min<<endl;
    return 0;
}
