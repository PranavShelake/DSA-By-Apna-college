//	Multiply two numbers represented linked lists

#include<bits/stdc++.h>
#include<list>
using namespace std;
int multi(list<int>l1,list<int>l2){
	int num1=0,num2=0;
	list<int>::iterator it;
	it=l1.begin();
	for(;it!=l1.end();it++){
		num1=num1*10+*it;
	}
	it=l2.begin();
	for(;it!=l2.end();it++){
		num2=num2*10+*it;
	}
	return num1*num2;
}

int main(){
	
	list<int>l1;
	list<int>l2;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	l1.push_back(5);
	
	l2.push_back(1);
	l2.push_back(2);
	l2.push_back(3);
	l2.push_back(4);
	l2.push_back(5);
	
	cout<<multi(l1,l2);
	
	return 0;
}
