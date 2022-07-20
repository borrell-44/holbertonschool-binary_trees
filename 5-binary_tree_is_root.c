#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 *
 * @node: node to check
 * 
 * Return: 1 if node is root and 0 for leaf
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
    
	if (node->left != NULL && node->right != NULL)
		return (1);
	else
		return (0);
}