#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>   /* For malloc, free */
#include <stdio.h>    /* For printf, etc. */
#include <stddef.h>   /* For NULL, size_t */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototype to create a node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Optional: function to print tree */
void binary_tree_print(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */
