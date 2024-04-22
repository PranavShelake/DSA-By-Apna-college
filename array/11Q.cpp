//https://leetcode.com/problems/trapping-rain-water/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[]= {4,2,0,3,2,5};
    int size=sizeof(arr)/4;
    int left[size];
    int right[size];
    left[0]=arr[0];
    right[size-1]=arr[size-1];
    for(int i=1;i<size;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    
    for (int i = size - 2; i >= 0; i--) {
        right[i] = max(right[i + 1], arr[i]);
    }
    int water=0;
    for (int i = 0; i < size; i++) {
        int cal=min(left[i],right[i])-arr[i];
        if(cal>0){ 
            water+=cal;
        }
    }
    cout<<water<<endl;
    return 0;
}
