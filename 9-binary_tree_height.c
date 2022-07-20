#include "binary_trees.h"

/**
 * binary_tree_height - measures the hight of a binary tree
 *
 * @tree: node or leaf of a tree
 *
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
