#include<iostream>
#include"basic.h"

int main(){

	node<int>n;
	n.insert_node(5);
	n.insert_node(10);
	n.insert_node(15);
	n.insert_node(20);
	n.insert_node(25);
	
	node<int>n1;
	n1.insert_node(4);
	n1.insert_node(11);
	n1.insert_node(14);
	n1.insert_node(21);
	n1.insert_node(24);
	
	node<int> node1;
    node1.set_root(n.get_root());
    
//    node<int>* node1 = new node<int>();
//    node1->set_root(n.get_root());

    node<int>* node2 = new node<int>();
    node2->set_root(n1.get_root());
	
	n.display();
	n1.display();
	node1.display();
	cout<<node1.get_next()->get_data();
	return 0;
}

