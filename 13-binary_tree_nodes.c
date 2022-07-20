#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 *
 * @tree: node or leaf of a tree
 *
 * Return: node count with child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int num = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		num += 1;

	num += binary_tree_nodes(tree->left);
	num += binary_tree_nodes(tree->right);

	return (num);
}
