#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: key, string
 * The key is unique in the hash table
 * @value: value corresponding to a key
 * @next: pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: size of the array
 * @array: array of size @size
 * Each cell is a pointer to the first node of a linked list
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Function prototype */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
