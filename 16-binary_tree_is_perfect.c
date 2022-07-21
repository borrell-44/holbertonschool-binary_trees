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
 * binary_tree_is_perfect - checks if binary tree is perfect
 *
 * @tree: node or leaf of a tree
 *
 * Return: 1 if full 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l != r)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (binary_tree_is_perfect(tree->left) == 0)
		return (0);
	if (binary_tree_is_perfect(tree->right) == 0)
		return (0);

	return (1);
}
