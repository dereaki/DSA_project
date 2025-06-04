#include <iostream>
using namespace std;

// Node structure representing each element in the list
struct Node {
    int data;
    Node* prev; // Pointer to previous node
    Node* next; // Pointer to next node
};

// Head pointer to keep track of the start of the list
Node* head = NULL;

// Insert node at specific position (1-based index)
void insertAtPosition(int data, int position) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    // Insert at the beginning
    if (position == 1) {
        newNode->next = head;
        if (head != NULL)
            head->prev = newNode;
        head = newNode;
        return;
    }

    // Traverse to the (position - 1)th node
    Node* temp = head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    // If position is invalid
    if (temp == NULL) {
        cout << "Invalid position.\n";
        delete newNode;
        return;
    }

    // Insert node between temp and temp->next
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
        temp->next->prev = newNode;
    temp->next = newNode;
}

// Wrapper for inserting at the beginning
void insertAtBeginning(int data) {
    insertAtPosition(data, 1);
}

// Insert at the end of the list
void insertAtEnd(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse to the last node
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete node at specific position
void deleteAtPosition(int position) {
    // If list is empty
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    // Delete the first node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete temp;
        return;
    }

    // Traverse to the node to delete
    Node* temp = head;
    for (int i = 1; temp != NULL && i < position; i++) {
        temp = temp->next;
    }

    // If position is invalid
    if (temp == NULL) {
        cout << "Invalid position.\n";
        return;
    }

    // Remove node by adjusting pointers
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    delete temp;
}

// Wrapper for deleting the first node
void deleteFirstNode() {
    deleteAtPosition(1);
}

// Delete the last node in the list
void deleteLastNode() {
    // If list is empty
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    // Only one node in the list
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    // Traverse to the last node
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    delete temp;
}

// Get value at a given position
void getValueAtPosition(int position) {
    Node* temp = head;
    int index = 1;

    // Traverse to the desired position
    while (temp != NULL && index < position) {
        temp = temp->next;
        index++;
    }

    if (temp == NULL) {
        cout << "Invalid position.\n";
    } else {
        cout << "Value at position " << position << " is " << temp->data << endl;
    }
}

// Display list from head to tail
void displayList() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    cout << "List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}

// Display list from tail to head
void displayReverse() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    // Traverse to the last node
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    // Traverse backward
    cout << "Reverse List: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << endl;
}

// Search for a value in the list
void searchValue(int value) {
    Node* temp = head;
    int position = 1;

    // Traverse the list
    while (temp != NULL) {
        if (temp->data == value) {
            cout << "Value " << value << " found at position " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    }

    cout << "Value not found in the list.\n";
}

// Display the menu
void showMenu() {
    cout << "\n--- MENU ---\n";
    cout << "1. Insert at position\n";
    cout << "2. Insert at beginning\n";
    cout << "3. Insert at end\n";
    cout << "4. Delete at position\n";
    cout << "5. Delete first node\n";
    cout << "6. Delete last node\n";
    cout << "7. Get value at position\n";
    cout << "8. Display list\n";
    cout << "9. Display list in reverse\n";
    cout << "10. Search for value\n";
    cout << "11. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
   
    

    int choice, data, position;

    // Loop until user chooses to exit
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data and position: ";
                cin >> data >> position;
                insertAtPosition(data, position);
                break;
            case 2:
                cout << "Enter data: ";
                cin >> data;
                insertAtBeginning(data);
                break;
            case 3:
                cout << "Enter data: ";
                cin >> data;
                insertAtEnd(data);
                break;
            case 4:
                cout << "Enter position: ";
                cin >> position;
                deleteAtPosition(position);
                break;
            case 5:
                deleteFirstNode();
                break;
            case 6:
                deleteLastNode();
                break;
            case 7:
                cout << "Enter position: ";
                cin >> position;
                getValueAtPosition(position);
                break;
            case 8:
                displayList();
                break;
            case 9:
                displayReverse();
                break;
            case 10:
                cout << "Enter value to search: ";
                cin >> data;
                searchValue(data);
                break;
            case 11:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 11);

    return 0;
}

