# **0x1C. Makefiles**

## **Description**
This project introduces the concept of **Makefiles** in C programming. A Makefile automates the process of compiling code by defining rules, variables, and commands, enhancing efficiency in software development. 

You will:
- Write different types of Makefiles for a sample project.
- Use variables, rules, and directives.
- Implement rules for cleaning, rebuilding, and managing files.

## **Learning Objectives**
By completing this project, you will:
- Understand the purpose and use of Makefiles.
- Define and use variables in Makefiles.
- Create rules for efficient compilation and cleanup.
- Automate compilation processes with dependencies.

---

## **Requirements**

| **Category**   | **Details**                                                                 |
|----------------|-----------------------------------------------------------------------------|
| **Editors**    | `vi`, `vim`, `emacs`                                                       |
| **Compiler**   | Ubuntu 20.04 LTS, `gcc 9.3.0`, `-Wall -Werror -Wextra -pedantic`           |
| **Make Version** | GNU Make 4.2.1                                                           |
| **Files**      | All files must end with a new line                                         |
| **README**     | A `README.md` file is mandatory                                           |
| **Style**      | Follow `Betty` coding style                                               |
| **Clean Rules**| Makefiles should include `clean`, `fclean`, and `oclean` rules            |
| **Header Check**| Compilation should fail if the `m.h` header is missing                   |

---

## **Tasks**

| **Task #** | **Description**                                                                 | **File**            |
|------------|---------------------------------------------------------------------------------|---------------------|
| **0**      | Create a simple Makefile with one rule: `all`.                                 | `0-Makefile`        |
| **1**      | Add variables `CC` and `SRC` for compiler and source files.                   | `1-Makefile`        |
| **2**      | Add object file variables `OBJ` and the executable name `NAME`.               | `2-Makefile`        |
| **3**      | Include cleaning rules (`clean`, `oclean`, `fclean`, `re`).                   | `3-Makefile`        |
| **4**      | Introduce `CFLAGS` for compiler flags.                                        | `4-Makefile`        |
| **5**      | Implement a Python function for calculating an island perimeter in a grid.    | `5-island_perimeter.py` |
| **6**      | Create a Makefile with strict rules for compilation and cleanup.              | `100-Makefile`      |

---

## **Repository Structure**

```
0x1C-makefiles/
├── 0-Makefile
├── 1-Makefile
├── 2-Makefile
├── 3-Makefile
├── 4-Makefile
├── 5-island_perimeter.py
├── 100-Makefile
└── README.md
```

---
 
## Developer

**Codename**: Achraf Sadeq

## Acknowledgments

This project was developed for educational purposes by Holberton School, in collaboration with the ALX Software Engineering Program.

