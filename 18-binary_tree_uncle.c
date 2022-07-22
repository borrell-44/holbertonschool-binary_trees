#include "binary_trees.h"

/**
 * binary_tree_uncle- finds the uncle of a node
 *
 * @node: place to find sibling
 *
 * Return: uncle of the node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int num = 0, i;
	binary_tree_t *tmp, *l, *r;

	if (!node)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	tmp = node;
	while (tmp->parent != NULL || num == 2)
	{
		num += 1;
		tmp = tmp->parent;
	}

	l = tmp;
	r = tmp;
	for (i = 2; i <= num; i++)
	{
		if (l->left != NULL && r->right != NULL)
		{
			l = l->left;
			r = r->right;

			if (i == num)
			{
				if (l->left != node && l->right != node)
					return (l);
				if (r->left != node && r->right != node)
					return (r);
			}
		}
	}

	return (NULL);
}
