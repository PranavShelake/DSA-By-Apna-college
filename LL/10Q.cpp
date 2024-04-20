#include<iostream>

using namespace std;

class list {
public:
    int data;
    list* next;

    list() {
        this->data = 0;
        this->next = NULL;
    }
};

void display(list* temp) {
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


void remove_loop(list* temp) {
    list* fast, * slow;
    fast = slow = temp;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            break;
        }
    }

    // Reset slow pointer to the head of the linked list
    slow = temp;

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // Now slow points to the starting point of the loop
    
    while (fast->next != slow) {
        fast = fast->next;
    }

    // Set the next pointer of the node causing the loop to NULL
    fast->next = NULL;
}

int main() {
    list l;
    list l1;
    list l2;
    list l3;
    list l4;
    list l5;
    list l6;

    l.data = 0;
    l1.data = 1;
    l2.data = 2;
    l3.data = 3;
    l4.data = 4;
    l5.data = 5;
    l6.data = 6;

    l.next = &l1;
    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    l4.next = &l5;
    l5.next = &l6;
    l6.next = &l3;

    remove_loop(&l);

    display(&l);

    return 0;
}

