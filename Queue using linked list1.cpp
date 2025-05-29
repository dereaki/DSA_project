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
	
	 cout << "\t\t\tWOLDIA UNIVERSITY\n\t\t\tSCHOOL OF COMPUTING\n\t\t\t DEPARTMENT OF SOFTWARE ENGINEERIG\n";
	 cout << "\t\t\tDATA STRUCTURE and ALGORITM\n\t\t\tGROUP ASSIGNMENT";
	 cout << "" << endl;
	 cout << "" << endl;
	 cout << "" << endl;
	 cout << "\tName of Group Members\t\tID Number\n";
	 cout << "\t1.  Gebremikaeil  Aweta\t\tWDU160578\n";
	 cout << "\t2.  Ahmed   Kebede  \t\tWDU160089 \n";
	 cout << "\t3.  Mikael   Alemayehu\t\tWDU160938\n";
	 cout << "\t4.  Mahder   Azmeraw\t\tWDU160803\n";
	 cout << "\t5.  Samrawit   Amha\t\tWDU161056\n";
	 cout << "\t6.  Zyyeich   Wuletaw\t\tWDU161397\n";
	 
	  cout << "" << endl;
	  cout << "" << endl;
	   cout << "" << endl;
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

