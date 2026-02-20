#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    if (!ht)
        return (1);
    printf("Hash table of size %lu created\n", ht->size);
    free(ht->array);
    free(ht);
    return (0);
}
