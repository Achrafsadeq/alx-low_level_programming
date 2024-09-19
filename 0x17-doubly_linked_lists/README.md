# 0x17. C - Doubly Linked Lists

## Description

This project dives into the implementation and manipulation of doubly linked lists in C. Doubly linked lists offer efficient insertion and deletion from both ends of the list, providing more flexibility than singly linked lists. The tasks in this project guide you through creating, managing, and optimizing doubly linked list structures in C.

## Requirements

| Category           | Details                                                              |
|--------------------|----------------------------------------------------------------------|
| **Editors**         | vi, vim, emacs                                                       |
| **Compiler**        | Ubuntu 20.04 LTS using gcc                                           |
| **File Endings**    | All files should end with a new line                                 |
| **README**          | A README.md file at the root of the project folder is mandatory       |
| **Coding Style**    | Code should follow the Betty style                                   |
| **Global Variables**| Not allowed                                                          |
| **Functions per File**| No more than 5 functions per file                                  |
| **Allowed C Library Functions**| Only malloc, free, printf, and exit are allowed           |

### C Coding Guidelines
- The prototypes of all functions should be included in the header file `lists.h`.
- Header files must be include guarded.
- All functions must handle the necessary edge cases, such as NULL input or empty lists.
- Ensure efficient memory management (no memory leaks).

## Tasks

| Task # | Description                                                                 | File                         |
|--------|-----------------------------------------------------------------------------|------------------------------|
| **0**  | Print all elements of a doubly linked list                                  | [0-print_dlistint.c](./0-print_dlistint.c) |
| **1**  | Return the number of elements in a doubly linked list                       | [1-dlistint_len.c](./1-dlistint_len.c) |
| **2**  | Add a new node at the beginning of a doubly linked list                     | [2-add_dnodeint.c](./2-add_dnodeint.c) |
| **3**  | Add a new node at the end of a doubly linked list                           | [3-add_dnodeint_end.c](./3-add_dnodeint_end.c) |
| **4**  | Free a doubly linked list                                                   | [4-free_dlistint.c](./4-free_dlistint.c) |
| **5**  | Return the nth node of a doubly linked list                                 | [5-get_dnodeint.c](./5-get_dnodeint.c) |
| **6**  | Return the sum of all the data in a doubly linked list                      | [6-sum_dlistint.c](./6-sum_dlistint.c) |
| **7**  | Insert a new node at a given position                                       | [7-insert_dnodeint.c](./7-insert_dnodeint.c) |
| **8**  | Delete a node at a given index from a doubly linked list                    | [8-delete_dnodeint.c](./8-delete_dnodeint.c) |

### Advanced Tasks

| Task # | Description                                                                 | File                         |
|--------|-----------------------------------------------------------------------------|------------------------------|
| **100** | Reverse a doubly linked list                                               | [100-reverse_dlistint.c](./100-reverse_dlistint.c) |
| **101** | Find the palindrome of a doubly linked list                                | [101-palindrome_dlistint.c](./101-palindrome_dlistint.c) |
| **102** | Rotate a doubly linked list                                                | [102-rotate_dlistint.c](./102-rotate_dlistint.c) |
| **103** | Find the intersection of two doubly linked lists                           | [103-intersection_dlistint.c](./103-intersection_dlistint.c) |

## Learning Objectives

By the end of this project, you will be able to:

- Implement and manipulate doubly linked lists in C.
- Manage memory efficiently in C, especially with dynamic data structures.
- Handle edge cases in list manipulation such as list insertion, deletion, and retrieval.
- Use pointers and structures to implement more complex data structures.

## Mission Director

This project is supervised by the ALX Software Engineering Program.

## Developer

**Codename:** Achraf Sadeq

## Acknowledgments

This project is part of the ALX Software Engineering Program curriculum and is built for educational purposes.
