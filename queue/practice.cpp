#include<iostream>

using namespace std;

class Queue {
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int size) : size(size) {
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int ele) {
        if (rear == -1) front = rear = 0;
        arr[rear++] = ele;
    }

    void display() {
        int temp = front;
        while (temp < rear) {
            cout << arr[temp] << " ";
            temp++;
        }
        cout << endl;
    }

    void reverse() {
        if(front>=rear){
        	return ;
		}
        int top=arr[front++];
        reverse();
	    enqueue(top);
    }
};

int main() {

    Queue q(5);
    q.enqueue(15);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);

    cout << "Original Queue: ";
    q.display();
	
    q.reverse();

    cout << "Reversed Queue: ";
    q.display();

    return 0;
}

