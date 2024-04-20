#include<iostream>
#include<bits/stdc++.h>
#include"basic.h"
using namespace std;

int main(){
	
	node<int>n;
	n.insert_node(5);
	n.insert_node(10);
	n.insert_node(15);
	n.insert_node(20);
	n.insert_node(25);
	n.display();
	
	node<int>* head=n.get_root();
	
	node<int>*prevnode;
	node<int>*currentnode;
	node<int>*nextnode;
	prevnode=0;
	currentnode=nextnode=head;
	while(currentnode!=0){
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
		n.set_root(prevnode);
		n.display();
	
	return 0;
}
