0x13. C - More Singly Linked Lists
————————————————————
 # 0x13. C - More Singly Linked Lists

## Description
This project involves working with more advanced concepts of singly linked lists in C. It covers various tasks such as adding, deleting, and reversing linked lists, as well as performing specific operations on list elements.

## Requirements

| Category | Details |
|----------|---------|
| Editors | vi, vim, emacs |
| Compilation | Ubuntu 20.04 LTS using gcc, with options -Wall -Werror -Wextra -pedantic -std=gnu89 |
| File Endings | All files should end with a new line |
| README | A README.md file at the root of the project folder is mandatory |
| Coding Style | Betty style, checked using betty-style.pl and betty-doc.pl |
| Global Variables | Not allowed |
| Functions per File | No more than 5 |
| Allowed C Standard Library Functions | malloc, free, exit |
| Additional Allowed Function | _putchar |
| Header File | lists.h (include guarded) |

## Data Structure

 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node

 * Description: singly linked list node structure for integers

## Tasks

| Task | Description | File |
|------|-------------|------|
| 0 | Print all the elements of a listint_t list. | 0-print_listint.c |
| 1 | Return the number of elements in a linked listint_t list. | 1-listint_len.c |
| 2 | Add a new node at the beginning of a listint_t list. | 2-add_nodeint.c |
| 3 | Add a new node at the end of a listint_t list. | 3-add_nodeint_end.c |
| 4 | Free a listint_t list. | 4-free_listint.c |
| 5 | Free a listint_t list and set the head to NULL. | 5-free_listint2.c |
| 6 | Delete the head node of a listint_t list, and return the head node’s data (n). | 6-pop_listint.c |
| 7 | Return the nth node of a listint_t linked list. | 7-get_nodeint.c |
| 8 | Return the sum of all the data (n) of a listint_t linked list. | 8-sum_listint.c |
| 9 | Insert a new node at a given position in a listint_t list. | 9-insert_nodeint.c |
| 10 | Delete the node at a given position of a listint_t list. | 10-delete_nodeint.c |
| 11 | Reverse a listint_t linked list. | 100-reverse_listint.c |
| 12 | Print a listint_t linked list safely (handling loops). | 101-print_listint_safe.c |
| 13 | Free a listint_t linked list safely (handling loops). | 102-free_listint_safe.c |
| 14 | Find the loop in a linked list. | 103-find_loop.c |

## Mission Director

> This operation is sanctioned by the ALX Software Engineering Program, under the command of Julien Barbier.

## Developer

> Codename: Achraf Sadeq

## Acknowledgments

This project is part of the ALX Software Engineering Program curriculum.
