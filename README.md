


# Doubly Linked List in C++ (Menu-Driven Program)


 ```This project implements a doubly linked list in C++ with various operations such as insertion, deletion, searching, and displaying elements. The program uses a menu-driven interface that allows users to interactively manage the list through the console.```


##  📋 Features
```
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
```

##  🧠 How It Works

```
The program maintains a global pointer head that points to the start of the doubly linked list. Each node contains:
data: the value
prev: pointer to the previous node
next: pointer to the next node
The user can choose from a list of operations provided via the menu.
```

```
--- MENU ---
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

```run dev```

##  📷 Sample Output
```
--- MENU ---
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


# 📦 Queue Implementation Using Linked List in C++

## 📌 Overview

This project is a **simple and interactive implementation of a Queue using a singly linked list** in C++. It provides a dynamic way to manage a queue with operations like enqueue, dequeue, peek, and display.

A **queue** is a First-In-First-Out (FIFO) linear data structure. This implementation demonstrates how linked lists can be used to overcome the limitations of static arrays in managing queues.

---

## ✅ Features

- Enqueue (Insert an element at the rear)
- Dequeue (Remove an element from the front)
- Peek (View the front element without removing it)
- Display (Show all elements in the queue)
- Menu-driven interface

---

## 🧠 How It Works

- **Struct `Node`**: Each node contains integer `data` and a `next` pointer.
- **Global pointers `front` and `rear`**: Maintain the beginning and end of the queue.
- **Dynamic memory** is allocated using `new` and freed using `delete`.

---

## 🖥️ Usage

1. **Clone the Repository**
   ```bash
   git clone https://github.com/dereaki/queue-linkedlist.git
   cd queue-linkedlist

  ## 🔍 Sample Menu Output
```
Queue Implementation using Linked List

1. Enqueue
2. Dequeue
3. Peek
4. Display
5. Exit
Enter choice:
```
