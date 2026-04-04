# 📦 Arrays vs 🔗 Linked Lists (C++ + Real-World Examples)

## 🔹 1. Array

### 💡 Definition

An **array** is a data structure that stores elements in **contiguous memory locations**. Each element can be accessed directly using its index.

---

### 🌍 Real-World Example

Think of a **parking lot with fixed slots**:

* Each slot has a number (index)
* You can directly go to any slot instantly
* Size is fixed → limited capacity

---

### ⚡ Key Features

* Fixed size
* Fast access → **O(1)**
* Insertion/Deletion is costly → requires shifting
* Memory is contiguous

---

### 💻 C++ Code (Array)

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Element at index 2: " << arr[2] << endl;

    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

## 🔹 2. Linked List

### 💡 Definition

A **linked list** is a data structure where elements (nodes) are stored **non-contiguously**, and each node contains:

* Data
* Pointer to the next node

---

### 🌍 Real-World Example

Think of a **train**:

* Each coach is a node
* Each coach is connected to the next
* Easy to add/remove coaches

---


### ⚡ Key Features

* Dynamic size
* Insertion/Deletion is fast → **O(1)**
* Access is slow → **O(n)**
* Memory is non-contiguous

---

### 💻 C++ Code (Linked List)

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Node* temp = head;
    cout << "Linked List elements: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
```

---

## ⚔️ Array vs Linked List (Comparison)

| Feature        | Array 📦   | Linked List 🔗 |
| -------------- | ---------- | -------------- |
| Memory         | Contiguous | Non-contiguous |
| Size           | Fixed      | Dynamic        |
| Access Time    | O(1)       | O(n)           |
| Insert/Delete  | Slow       | Fast           |
| Implementation | Simple     | Moderate       |

---

## 🚀 When to Use What?

### ✅ Use Array when:

* Fast index access is required
* Data size is fixed
* Example: student marks

### ✅ Use Linked List when:

* Frequent insertions/deletions
* Size is dynamic
* Example: playlist, browser history

---

## 📌 Author Kaushikji-23

Made with ❤️ for DSA GitHub Series
