# 0x1E. C - Search Algorithms

## Background Context

This project focuses on implementing various search algorithms in C. By completing this project, you will gain a deeper understanding of how different search algorithms work, their time and space complexities, and how to implement them efficiently. You will also learn how to analyze the performance of these algorithms using Big O notation.

## Requirements

| Category         | Details |
|------------------|---------|
| **Project Type** | Mandatory |
| **Review**       | Manually reviewed by peers or TAs |
| **Compiler**     | gcc (Ubuntu 20.04 LTS) |
| **Betty Style**  | Code must follow the Betty style guidelines |
| **Functions**    | No more than 5 functions per file |
| **Global Variables** | Not allowed |
| **Standard Library** | Only `printf` is allowed from the standard library |
| **Header File**  | `search_algos.h` must be included and guarded |

## General Requirements

1. **Code Style**: All code must follow the Betty style guidelines.
2. **Compilation**: Code will be compiled on Ubuntu 20.04 LTS using `gcc` with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
3. **File Structure**: All files should end with a new line, and a `README.md` file at the root of the project folder is mandatory.
4. **Function Limits**: No more than 5 functions per file.
5. **Global Variables**: Not allowed.
6. **Standard Library**: Only `printf` is allowed from the standard library. Any other functions like `strdup`, `malloc`, etc., are forbidden.

## Learning Objectives

By completing this project, you will:

- Understand and implement various search algorithms, including linear search, binary search, jump search, interpolation search, and exponential search.
- Analyze the time and space complexity of these algorithms using Big O notation.
- Learn how to handle edge cases and optimize search algorithms for better performance.
- Gain experience in writing clean, efficient, and well-documented code in C.

## Tasks

| Task                          | Description                                  | Files                         |
|-------------------------------|----------------------------------------------|-------------------------------|
| **0. Linear search**          | Implement a function that performs a linear search on an array of integers | `0-linear.c` |
| **1. Binary search**          | Implement a function that performs a binary search on a sorted array of integers | `1-binary.c` |
| **2. Big O #0**               | Analyze the time complexity of a linear search in an array of size n | `2-O` |
| **3. Big O #1**               | Analyze the space complexity of an iterative linear search algorithm in an array of size n | `3-O` |
| **4. Big O #2**               | Analyze the time complexity of a binary search in an array of size n | `4-O` |
| **5. Big O #3**               | Analyze the space complexity of a binary search in an array of size n | `5-O` |
| **6. Big O #4**               | Analyze the space complexity of a function that allocates a 2D array | `6-O` |
| **7. Jump search**            | Implement a function that performs a jump search on a sorted array of integers | `100-jump.c` |
| **8. Big O #5**               | Analyze the time complexity of a jump search in an array of size n | `101-O` |
| **9. Interpolation search**   | Implement a function that performs an interpolation search on a sorted array of integers | `102-interpolation.c` |
| **10. Exponential search**    | Implement a function that performs an exponential search on a sorted array of integers | `103-exponential.c` |
| **11. Advanced binary search**| Implement an advanced binary search that returns the first occurrence of a value in a sorted array | `104-advanced_binary.c` |
| **12. Jump search in a singly linked list** | Implement a jump search algorithm for a sorted singly linked list | `105-jump_list.c` |
| **13. Linear search in a skip list** | Implement a linear search algorithm for a sorted skip list | `106-linear_skip.c` |
| **14. Big O #6**              | Analyze the time complexity of a jump search in a singly linked list of size n | `107-O` |
| **15. Big O #7**              | Analyze the time complexity of a jump search in a skip list of size n | `108-O` |

## Submission

- **GitHub Repository**: [alx-low_level_programming](https://github.com/Achrafsadeq/alx-low_level_programming)
- **Directory**: `0x1E-search_algorithms`

---

### Mission Director

This project is part of the ALX Software Engineering Program.

### Developer

**Codename**: Achraf Sadeq

### Acknowledgments

This project was developed by Holberton School, in collaboration with the ALX Software Engineering Program, to provide practical, hands-on learning experiences in a professional and real-world context. It aims to equip learners with the skills and knowledge necessary to tackle complex challenges in software engineering.
