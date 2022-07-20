#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through tree using post-order traversal
 *
 * @tree: head of the tree
 * @func: func to call for each node
 *
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
