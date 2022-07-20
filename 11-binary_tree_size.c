#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: node or leaf of a tree
 *
 * Return: size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int count;

	if (!tree)
		return (0);

	count = binary_tree_size(tree->left);
	count += binary_tree_size(tree->right) + 1;

	return (count);
}
