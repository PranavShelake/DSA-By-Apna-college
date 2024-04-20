//Reorder List

#include<iostream>
#include"basic.h"

using namespace std;

int main(){
	
	List<int>l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);
	l.push_back(7);
	
	List<int>* temp = l.get_head();

	List<int>* fast = l.get_head();
	List<int>* slow = l.get_head();
	
    // Move fast and slow pointers to find the middle of the list
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // Reverse the second half of the list
    List<int>* prevnode = NULL;
    List<int>* currentnode = slow;
    List<int>* nextnode = NULL;

    while (currentnode != NULL) {
        nextnode = currentnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
	slow->next=NULL;
    slow = prevnode; // Slow now points to the head of the reversed second half
    
    temp = l.get_head();
    List<int>* ans = new List<int>();

    // Traverse the original list and the reversed second half to create the reordered list
    while (temp != NULL || slow != NULL) {
        if (temp != NULL) {
            ans->push_back(temp->data);
            temp = temp->next;
        }
        if (slow != NULL) {
            ans->push_back(slow->data);
            slow = slow->next;
        }
    }

    // Display the reordered list
    ans->display();
	return 0;
}

