#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: node or leaf of a tree
 *
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to first node
 * @second: pointer to the second node
 *
 * Return: ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	int f, s;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return (NULL);

	f = binary_tree_depth(first);
	s = binary_tree_depth(second);

	if (f == s)
	{
		if (first->parent == second->parent)
			return (first->parent);
		return (binary_trees_ancestor(first->parent, second->parent));
	}
	if (s > f)
	{
		if (first == second->parent)
			return (second->parent);
		return (binary_trees_ancestor(first, second->parent));
	}
	if (f > s)
	{
		if (second == first->parent)
			return (first->parent);
		return (binary_trees_ancestor(first->parent, second));
	}
	return (NULL);
}
