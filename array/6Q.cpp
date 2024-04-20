#include<iostream>
#include"basic.h"

int main(){
	vector <int>nums={};
	int target;
	cin>>target;
    for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return i;
        }
        return -1;
	
	return 0;
}

