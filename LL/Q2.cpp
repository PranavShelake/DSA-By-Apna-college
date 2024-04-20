#include<iostream>
#include"basic.h"

int main(){

	node<int>n;
	n.insert_node(5);
	n.insert_node(10);
	n.insert_node(15);
	n.insert_node(20);
	n.insert_node(25);
	n.make_cycle_node(2,4);
	//n.display();
	(n.detect_cycle())?cout<<"true"<<endl:cout<<"false"<<endl;
	
	return 0;
}

