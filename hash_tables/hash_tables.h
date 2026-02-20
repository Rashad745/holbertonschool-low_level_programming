#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>

/* Structures, if any */
typedef struct hash_node_s
{
	const char *key;
	const char *value;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Function prototypes */
unsigned long int hash_djb2(const unsigned char *str);

#endif /* HASH_TABLES_H */
