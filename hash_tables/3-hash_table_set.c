#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * update_node - updates value if key exists
 * @node: linked list node
 * @key: key
 * @value: value
 *
 * Return: 1 if updated, 0 otherwise
 */
int update_node(hash_node_t *node, const char *key, const char *value)
{
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
 * create_node - creates new hash node
 * @key: key
 * @value: value
 *
 * Return: pointer to new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (update_node(ht->array[index], key, value))
		return (1);

	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
