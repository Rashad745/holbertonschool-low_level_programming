#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key to add (cannot be empty)
 * @value: value associated with the key (must be duplicated)
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *new_node, *tmp;

    if (!ht || !key || !*key || !value)
        return (0);

    idx = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[idx];

    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            return (tmp->value ? 1 : 0);
        }
        tmp = tmp->next;
    }

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

    new_node->next = ht->array[idx];
    ht->array[idx] = new_node;

    return (1);
}
