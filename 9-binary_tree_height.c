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
	binary_tree_t *tmp;

	if (!tree)
		return (0);

	if (tree->left != NULL)
	{
		tmp = tree->left;
	}
	else if (tree->right != NULL)
	{
		tmp = tree->right;
	}
	else
		return (0);
	

	return (binary_tree_height(tmp) + 1);
}
