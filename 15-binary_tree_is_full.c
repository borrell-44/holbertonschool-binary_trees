#include "binary_trees.h"

/**
 * binary_tree_is_full - cheks if binary tree is full
 *
 * @tree: node or leaf of a tree
 *
 * Return: 1 if full 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_is_full(tree->left) == 0)
		return (0);
	if (binary_tree_is_full(tree->right) == 0)
		return (0);

	return (1);
}
