#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: place to find sibling
 *
 * Return: sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int num = 0, i;
	binary_tree_t *tmp, *l, *r;

	if (!node)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	tmp = node;
	while (tmp->parent != NULL)
	{
		num += 1;
		tmp = tmp->parent;
		if (tmp->left != NULL && tmp->right != NULL)
			break;
	}

	l = tmp;
	r = tmp;
	for (i = 1; i <= num; i++)
	{
		if (l->left != NULL && r->right != NULL)
		{
			l = l->left;
			r = r->right;

			if (i == num)
			{
				if (l->n != node->n)
					return (l);
				if (r->n != node->n)
					return (r);
			}
		}
	}

	return (NULL);
}
