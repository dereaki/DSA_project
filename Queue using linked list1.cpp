#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Global pointers for the front and rear of the queue
Node* front = NULL;
Node* rear = NULL;

bool isEmpty() {
    return front == NULL;
}

void enqueue(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << "Enqueued: " << value << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow!" << endl;
        return;
    }

    Node* temp = front;
    cout << "Dequeued: " << temp->data << endl;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Front element: " << front->data << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    Node* temp = front;
    cout << "Queue: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
	cout<<"Queue Implementation using Linked List\n";
    
    int choice, value;

    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

