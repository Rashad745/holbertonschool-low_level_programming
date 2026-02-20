# Hash Tables

This directory contains functions to manipulate hash tables in C.

## Files

- 0-hash_table_create.c - creates a hash table of a given size.
- hash_tables.h - header file containing the hash node and hash table structs and function prototypes.

## Function Prototype

```c
hash_table_t *hash_table_create(unsigned long int size);
```

- **Description**: Creates a new hash table with the specified size.
- **Parameters**: `size` - number of slots in the array.
- **Return**: Pointer to the newly created hash table, or `NULL` if allocation fails.

## Compilation

To compile the test file with your function:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-hash_table_create.c -o test_ht
./test_ht
```

## Example Output

```
Hash table of 2048 slots created.
```

## Authors

Holberton School Students
