#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename t>
class List {
public:
    t data;
    List* next;
    List* head,* ptr;
    List(t data = 0) {
        this->data = data;
        this->next = NULL;
        this->head = NULL;
        this->ptr = NULL;
    }
    List* get_head() {
        return head;
    }
    List* set_head(List* n) {
        head = n;
        return head;
    }
    t get_data() {
        return data;
    }

    List* create_node(t data) {
        List* n = new List(data);
        return n;
    }

    void push_back(t data) {
        List* n = create_node(data);
        if (head == NULL) {
            ptr = n;
            head = n;
        }
        else {
            ptr->next = n;
            ptr = n;
        }
    }
	int length(){
		List*temp=head;
		int length=0;
		while(temp!=NULL){
			temp=temp->next;
			length++;
		}
		return length;
	}
    void display() {
        List* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
	
    List* reverse_node() {
        List* prevnode, * currentnode, * nextnode;
        prevnode = 0;
        currentnode = nextnode = head;
        while (currentnode != 0) {
            nextnode = nextnode->next;
            currentnode->next = prevnode;
            prevnode = currentnode;
            currentnode = nextnode;
        }
        head = prevnode;
        display();
        return prevnode;
    }
    
    ~List(){
    }

};





