#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 *
 * @node: node to check
 * 
 * Return: 1 if node and 0 for leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);

    if (node->left == NULL && node->right == NULL)
        return (1);
    else
        return (0);
}