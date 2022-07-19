#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child node
 *
 * @parent: Pointer to the parent node
 * @value: value of n
 * 
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (!parent)
        return (NULL);

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);
    new->n = value;
    new->right = NULL;
    new->parent = parent;
    
    if (parent->left == NULL)
    {
        new->left = NULL;
    }
    else
    {
        new->left = parent->left;
        parent->left->parent = new;
    }
    parent->left = new;

    return (new);
}