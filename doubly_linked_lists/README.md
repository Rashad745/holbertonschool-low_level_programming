# Doubly Linked Lists

This directory contains functions to manipulate doubly linked lists in C.

## Files

- 0-print_dlistint.c - prints all the elements of a dlistint_t list.
- lists.h - header file containing the dlistint_t struct and function prototypes.

## Function Prototype

```c
size_t print_dlistint(const dlistint_t *h);
```

- Description: Prints all integers in the doubly linked list.
- Parameters: h - pointer to the head of the list.
- Return: Number of nodes in the list.

## Compilation

To compile the test file with your function:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_dlistint.c -o a
./a
```

## Example Output

```
9
8
-> 2 elements
```

## Authors

Holberton School Students
