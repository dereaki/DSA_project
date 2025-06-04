# 🔁 Circular Doubly Linked List (C++)
```A menu-driven C++ console application that demonstrates the implementation and manipulation of a circular doubly linked list. It supports insertion, deletion, and display operations, allowing users to manage dynamic data structures efficiently.```

## 📌 Project Overview
```This program uses a circular doubly linked list structure where each node points to both the next and previous nodes, and the last node connects back to the head node. The list supports operations like:```

Insertion at the beginning, end, or a specific position

Deletion from the beginning, end, or a specific position

Deletion by value

Displaying the list


# 🚀 Features
✅ Insert nodes at the beginning, end, or any position
✅ Delete nodes from the beginning, end, by position, or by value
✅ Display the entire list (shows circular structure)
✅ Handles edge cases (empty list, single-node list, invalid inputs)
✅ Menu-based interactive interface

```
![Status](--- MENU ---

1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete from beginning
5. Delete from end
6. Delete from position
7. Delete by value
8. Display list
9. Exit
Enter your choice: 1
Enter data: 10

Enter your choice: 2
Enter data: 20

Enter your choice: 3
Enter position and data: 2 15

Enter your choice: 8
List: 10 <-> 15 <-> 20 <-> (back to head))
```

# 🔗 Doubly Linked List Implementation in C++
## 📌 Overview

This project provides a comprehensive implementation of a **Doubly Linked List** using C++. The program offers various operations including insertion, deletion, traversal (forward and backward), value lookup, and position access. It demonstrates the use of pointers to create dynamic memory structures for storing and manipulating data in a flexible and efficient manner.

A **doubly linked list** allows traversal in both directions (forward and backward), and each node maintains pointers to both its previous and next nodes.

---

## ✅ Features

- Insert at a specific position
- Insert at the beginning or end
- Delete at a specific position
- Delete first or last node
- Access value at any position
- Display the list (head-to-tail and tail-to-head)
- Search for a specific value
- Interactive, menu-driven console UI

---

## 🧠 How It Works

- **Struct `Node`**: Represents each element in the list with three parts: `data`, `prev`, and `next`.
- **Global pointer `head`**: Maintains the head (start) of the doubly linked list.
- **Dynamic memory** is managed with `new` and `delete`.

---

## 🖥️ Usage

1. **Clone the Repository**
   ```bash
   git clone https://github.com/dereaki/doubly-linked-list.git
   cd doubly-linked-list
## 🔍 Menu Sample Output
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
Enter your choice:
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
