#include <iostream>
using namespace std;

// Node structure for the circular doubly linked list
struct CNode {
    int data;         // Data stored in the node
    CNode* prev;      // Pointer to the previous node
    CNode* next;      // Pointer to the next node
};

// Global pointer to the head of the list
CNode* head = NULL;

// Function to create a new node with given value
CNode* createNode(int value) {
    CNode* newNode = new CNode;    // Allocate memory for new node
    newNode->data = value;         // Set the data
    newNode->prev = newNode->next = NULL;  // Initialize pointers
    return newNode;
}

// Insert a node at the beginning of the list
void insertAtBeginning(int data) {
    CNode* newNode = createNode(data);
    if (!head) {
        // If list is empty, make newNode the head and point to itself
        head = newNode;
        head->next = head->prev = head;
        return;
    }
    // List is not empty
    CNode* tail = head->prev;      // Get last node (tail)
    newNode->next = head;          // newNode's next is current head
    newNode->prev = tail;          // newNode's prev is tail
    tail->next = newNode;          // tail's next is newNode
    head->prev = newNode;          // head's prev is newNode
    head = newNode;                // Update head to newNode
}

// Insert a node at the end of the list
void insertAtEnd(int data) {
    if (!head) {
        insertAtBeginning(data);   // If list is empty, insert at beginning
        return;
    }
    CNode* newNode = createNode(data);
    CNode* tail = head->prev;
    tail->next = newNode;          // Link last node to new node
    newNode->prev = tail;
    newNode->next = head;          // newNode points to head
    head->prev = newNode;          // Head's prev updated
}

// Insert a node at a specific position
void insertAtPosition(int pos, int data) {
    if (pos <= 0) {
        cout << "Invalid position\n";
        return;
    }
    if (pos == 1) {
        insertAtBeginning(data);   // Position 1 is the beginning
        return;
    }

    CNode* temp = head;
    for (int i = 1; i < pos - 1; ++i) {
        temp = temp->next;
        if (temp == head) {
            // If position exceeds list size
            cout << "Position out of bounds\n";
            return;
        }
    }
    CNode* newNode = createNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

// Delete a node from the beginning of the list
void deleteFromBeginning() {
    if (!head) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == head) {
        // Only one node in the list
        delete head;
        head = NULL;
        return;
    }

    CNode* tail = head->prev;
    CNode* temp = head;
    head = head->next;
    head->prev = tail;
    tail->next = head;
    delete temp;   // Free memory
}

// Delete a node from the end of the list
void deleteFromEnd() {
    if (!head) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == head) {
        // Only one node
        delete head;
        head = NULL;
        return;
    }

    CNode* tail = head->prev;
    tail->prev->next = head;     // Second last node now points to head
    head->prev = tail->prev;     // Head's prev updated
    delete tail;
}

// Delete a node from a specific position
void deleteFromPosition(int pos) {
    if (!head || pos <= 0) {
        cout << "Invalid position or empty list\n";
        return;
    }
    if (pos == 1) {
        deleteFromBeginning();
        return;
    }

    CNode* temp = head;
    for (int i = 1; i < pos; ++i) {
        temp = temp->next;
        if (temp == head) {
            // Position is out of list bounds
            cout << "Position out of bounds\n";
            return;
        }
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;   // Free memory
}
// Delwte by value
void deleteByValue(int value) {
    if (!head) {
        cout << "List is empty\n";
        return;
    }

    CNode* current = head;
    CNode* toDelete = NULL;

    // Handle if head contains the value
    if (head->data == value) {
        deleteFromBeginning();
        return;
    }

    current = head->next;
    while (current != head) {
        if (current->data == value) {
            toDelete = current;
            break;
        }
        current = current->next;
    }

    if (toDelete) {
        toDelete->prev->next = toDelete->next;
        toDelete->next->prev = toDelete->prev;
        delete toDelete;
        cout << "Node with value " << value << " deleted.\n";
    } else {
        cout << "Value not found in the list.\n";
    }
}


// Display the circular doubly linked list
void display() {
    if (!head) {
        cout << "List is empty\n";
        return;
    }

    CNode* temp = head;
    cout << "List: ";
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)\n";
}

// Function to show the main menu
void showMenu() {
    cout << "\n--- MENU ---\n";
    cout << "1. Insert at beginning\n";
    cout << "2. Insert at end\n";
    cout << "3. Insert at position\n";
    cout << "4. Delete from beginning\n";
    cout << "5. Delete from end\n";
    cout << "6. Delete from position\n";
    cout << "7. Delete by value\n";
    cout << "8. Display list\n";
    cout << "9. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice, data, position;

    // Loop until user chooses to exit
    do {
        showMenu();         // Display menu
        cin >> choice;      // Get user choice

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                insertAtBeginning(data);
                break;
            case 2:
                cout << "Enter data: ";
                cin >> data;
                insertAtEnd(data);
                break;
            case 3:
                cout << "Enter position and data: ";
                cin >> position >> data;
                insertAtPosition(position, data);
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                deleteFromPosition(position);
                break;
                
            case 7:
                  cout << "Enter value to delete: ";
                  cin >> data;
                  deleteByValue(data);
                  break;
            case 8:
                display();
                break;
            case 9:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);

    return 0;
}

