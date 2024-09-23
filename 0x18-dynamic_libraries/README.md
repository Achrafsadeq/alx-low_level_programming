# 0x18. C - Dynamic Libraries

## Description

This project explores the creation and usage of dynamic libraries in C. Dynamic libraries, also known as shared libraries, are loaded at runtime and can be shared among multiple programs. This project guides you through creating, using, and manipulating dynamic libraries on a Linux system.

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

### Coding Guidelines
- The prototypes of all functions should be included in the header file main.h.
- Header files must be include guarded.
- Bash scripts should be exactly 2 lines long ($ wc -l file should print 2).
- The first line of all Bash scripts should be #!/bin/bash.

## Tasks

| Task # | Description                                                                 | File                         |
|--------|-----------------------------------------------------------------------------|------------------------------|
| **0**  | Create a dynamic library libdynamic.so containing various C functions       | [libdynamic.so](./libdynamic.so), [main.h](./main.h) |
| **1**  | Create a script that creates a dynamic library from all .c files in current directory | [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) |

### Advanced Tasks

| Task # | Description                                                                 | File                         |
|--------|-----------------------------------------------------------------------------|------------------------------|
| **2**  | Create a dynamic library for C functions callable from Python               | [100-operations.so](./100-operations.so) |
| **3**  | Code injection to win the Giga Millions lottery                             | [101-make_me_win.sh](./101-make_me_win.sh) |

## Learning Objectives

By the end of this project, you will be able to:

- Explain what a dynamic library is and how it works
- Create and use dynamic libraries
- Understand the environment variable $LD_LIBRARY_PATH and how to use it
- Differentiate between static and shared libraries
- Use basic tools like nm, ldd, and ldconfig

## Mission Director

This project is supervised by the ALX Software Engineering Program.

## Developer

**Codename:** Achraf Sadeq

## Acknowledgments

This project is part of the ALX Software Engineering Program curriculum and is built for educational purposes.
