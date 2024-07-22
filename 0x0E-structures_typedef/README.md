# 0x0E. C - Structures, typedef

## Project Overview

This project focuses on C structures and typedef. The tasks involve creating and manipulating structures, as well as using typedef to define new types.

## Requirements

### General
- Allowed editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS, gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- Files should end with a new line
- Code should follow Betty style
- No global variables allowed
- Maximum 5 functions per file
- Allowed C standard library functions: printf, malloc, free, exit
- Header files should be include guarded

## Tasks

| Task | Description | File |
|------|-------------|------|
| 0 | Poppy | Define a new type struct dog with elements: name (char *), age (float), owner (char *) | dog.h |
| 1 | A dog is the only thing on earth that loves you more than you love yourself | Write a function that initializes a variable of type struct dog | 1-init_dog.c |
| 2 | A dog will teach you unconditional love. If you can have that in your life, things won't be too bad | Write a function that prints a struct dog | 2-print_dog.c |
| 3 | Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read | Define a new type dog_t as a new name for the type struct dog | dog.h |
| 4 | A door is what a dog is perpetually on the wrong side of | Write a function that creates a new dog | 4-new_dog.c |
| 5 | How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg | Write a function that frees dogs | 5-free_dog.c |

## How to Use

1. Clone the repository
2. Navigate to the project directory
3. Compile your code: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o output_file`
4. Run your program: `./output_file`

## Mission Director

> This operation is sanctioned by the ALX Software Engineering Program, under the command of Julien Barbier.

## Developer

> Codename: Achraf Sadeq
----------------------


## Acknowledgments

This project is part of the ALX Software Engineering Program curriculum.
