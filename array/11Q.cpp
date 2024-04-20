//https://leetcode.com/problems/product-of-array-except-self/

#include<iostream>

using namespace std;

void first_medthod(int arr[],int size){
    // using product and division method required O(n2) time compexity
    int product=1,flag=1;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            flag=0;
            continue;
        }
        product=product*arr[i];
    }
    if(flag){
        for(int i=0;i<size;i++){
            arr[i]=product/arr[i];
        }
    }
    else{
        for(int i=0;i<size;i++){
            if(arr[i]!=0){
                arr[i]=0;
            }
            else{
                arr[i]=product;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void second_method(int arr[],int size){
    // using left and right array to store the multiplication of the index i method required O(n) time compexity
    int left[size],right[size];
    left[0]=arr[0];
    right[size-1]=arr[size-1];
    for(int i=1;i<size;i++){
        left[i]=arr[i]*left[i-1];
    }
    for(int i=size-2;i>=0;i--){
        right[i]=right[i+1]*arr[i];
    }
    arr[0]=right[1];
    for(int i=1;i<size-1;i++){
        arr[i]=left[i-1]*right[i+1];
    }
    arr[size-1]=left[size-2];
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }

int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/4;
    
    // first_medthod(arr,size);
    second_method(arr,size);
    return 0;
}