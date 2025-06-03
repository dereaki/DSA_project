Doubly Linked List in C++ (Menu-Driven Program)
This project implements a doubly linked list in C++ with various operations such as insertion, deletion, searching, and displaying elements. The program uses a menu-driven interface that allows users to interactively manage the list through the console.

📋 Features
Insert at any position
Insert at the beginning
Insert at the end
Delete from a specific position
Delete the first node
Delete the last node
Get the value at a given position
Display the list (from head to tail)
Display in reverse (from tail to head)
Search for a value in the list
User-friendly menu interface
🧠 How It Works
The program maintains a global pointer head that points to the start of the doubly linked list. Each node contains:
data: the value
prev: pointer to the previous node
next: pointer to the next node
The user can choose from a list of operations provided via the menu.
```--- MENU ---
1. Insert at position
2. Insert at beginning
3. Insert at end
4. Delete at position
5. Delete first node
6. Delete last node
7. Get value at position
8. Display list
9. Display list in reverse
10. Search for value
11. Exit
```
How to Compile and Run
🎁run dev

```--- MENU ---
1. Insert at position
2. Insert at beginning
3. Insert at end
...

Enter your choice: 2
Enter data: 10
Enter your choice: 3
Enter data: 20
Enter your choice: 1
Enter data and position: 15 2
Enter your choice: 8
List: 10 <-> 15 <-> 20 <->
```
