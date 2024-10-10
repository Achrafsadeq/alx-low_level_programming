# 0x1A. Hash Tables

## Description

This project focuses on implementing hash tables in C, a fundamental data structure that offers efficient data retrieval. You will learn how to create hash tables, manage collisions, and utilize various hash functions. By the end of this project, you will have a solid understanding of hash tables and their underlying principles.

## Requirements

| Category | Details |
|----------|---------|
| Editors | `vi`, `vim`, `emacs` |
| Compiler | Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89` |
| File Endings | All files should end with a new line |
| README | A `README.md` file at the root of the project folder is mandatory |
| Coding Style | `betty style` |
| Global Variables | Not allowed |
| Functions per File | No more than 5 |
| Allowed C Standard Library Functions | N/A (No external functions allowed) |
| Header File | A header file `hash_tables.h` for function prototypes is required |

## Learning Objectives

By completing this project, you will be able to:

- Understand the structure and operation of hash tables
- Implement the djb2 hash function
- Calculate the index for storing key/value pairs in a hash table
- Handle collisions using chaining
- Create a basic hash table and perform operations such as insertion, retrieval, and deletion

## Tasks

| Task | Description | File |
|------|-------------|------|
| 0. >>> ht = {} | Write a function that creates a hash table. | 0-hash_table_create.c |
| 1. djb2 | Write a hash function implementing the djb2 algorithm. | 1-djb2.c |
| 2. key -> index | Write a function that gives you the index of a key. | 2-key_index.c |
| 3. >>> ht['betty'] = 'cool' | Write a function that adds an element to the hash table. | 3-hash_table_set.c |
| 4. >>> ht['betty'] | Write a function that retrieves a value associated with a key. | 4-hash_table_get.c |
| 5. >>> print(ht) | Write a function that prints a hash table. | 5-hash_table_print.c |
| 6. >>> del ht | Write a function that deletes a hash table. | 6-hash_table_delete.c |
| 7. $ht['Betty'] = 'Cool' | Implement a sorted hash table with specific data structures and functions. | 100-sorted_hash_table.c |

## Additional Information

* All files will be compiled on Ubuntu 20.04 LTS using gcc.
* All files should end with a new line.
* The first line of all files should be exactly `#!/usr/bin/env gcc`.
* Code should follow the `betty` style guide.
* All files must be executable.

## Mission Director

This project is supervised by the ALX Software Engineering Program.

## Developer

**Codename**: Achraf Sadeq

## Acknowledgments

This project was developed for educational purposes by Holberton School, in collaboration with the ALX Software Engineering Program.
