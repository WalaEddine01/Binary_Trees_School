#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */

bst_t *binary_tree_node(bst_t *parent, int value)
{
	bst_t *new = malloc(sizeof(bst_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->data = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

