#include "hash_tables.h"
#include <string.h>  /* For strcmp */
#include <stdlib.h>  /* For malloc, free, strdup */

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key (cannot be empty)
 * @value: The value (must be duplicated, can be empty string)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *tmp;

    if (!ht || !key || *key == '\0' || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];

    /* Check if key exists and update value */
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            char *new_val = strdup(value);
            if (!new_val)
                return (0);
            free(tmp->value);
            tmp->value = new_val;
            return (1);
        }
        tmp = tmp->next;
    }

    /* Key does not exist, create new node */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Insert node at the beginning of the list (collision handling) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
