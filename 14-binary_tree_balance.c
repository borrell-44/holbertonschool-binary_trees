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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: node or leaf of a tree
 *
 * Return: balance points
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		r = binary_tree_height(tree->right) + 1;

	return (l - r);
}
