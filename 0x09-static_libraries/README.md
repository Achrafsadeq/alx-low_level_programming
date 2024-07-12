# Project: 0x09. Static Libraries

## Description
This repository contains C programs and scripts related to creating and using static libraries in C programming. Below are the tasks completed for this project:

## Tasks
### 0. A library is not a luxury but one of the necessities of life
* Create the static library `libmy.a` containing various functions:
  - `int _putchar(char c);`
  - `int _islower(int c);`
  - `int _isalpha(int c);`
  - `int _abs(int n);`
  - `int _isupper(int c);`
  - `int _isdigit(int c);`
  - `int _strlen(char *s);`
  - `void _puts(char *s);`
  - `char *_strcpy(char *dest, char *src);`
  - `int _atoi(char *s);`
  - `char *_strcat(char *dest, char *src);`
  - `char *_strncat(char *dest, char *src, int n);`
  - `char *_strncpy(char *dest, char *src, int n);`
  - `int _strcmp(char *s1, char *s2);`
  - `char *_memset(char *s, char b, unsigned int n);`
  - `char *_memcpy(char *dest, char *src, unsigned int n);`
  - `char *_strchr(char *s, char c);`
  - `unsigned int _strspn(char *s, char *accept);`
  - `char *_strpbrk(char *s, char *accept);`
  - `char *_strstr(char *haystack, char *needle);`

* If a function is not coded yet, a prototype is provided.

### 1. Without libraries what have we? We have no past and no future
* Create a script `create_static_lib.sh` to automate the creation of a static library `liball.a` from all `.c` files in the current directory.

## Usage
* To compile the static library `libmy.a`:
  ```bash
  $ gcc -Wall -Werror -Wextra -pedantic -c *.c
  $ ar -rc libmy.a *.o
  $ rm *.o

  ## Mission Director

This operation is sanctioned by the ALX Software Engineering Program, under the command of Julien Barbier.

## Developer

Codename: Achraf Sadeq
-------------------------------------------------- 
