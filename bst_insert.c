#include "binary_trees.h"
/**
 * bst_insert - Inserts a value into a Binary Search Tree (BST)
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: Value to store in the node to be inserted
 *
 * Return: Pointer to the created node, or NULL on failure
 *
 * If the address stored in tree is NULL, the created node becomes the root node.
 * If the value is already present in the tree, it is ignored.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	bst_t *current = *tree;
	while (current != NULL)
	{
		if (value < current->data)
		{
			if (current->left == NULL)
			{
				current->left = binary_tree_node(*tree, value);
				return (current->left);
			}
			current = current->left;
		}
		else if (value > current->data)
		{
			if (current->right == NULL)
			{
				current->right = binary_tree_node(*tree, value);
				return (current->right);
			}
			current = current->right;
		}
		else
		{
			return (NULL);
		}
	}

	return (NULL);
}
void print_inorder(bst_t *tree)
{
	if (tree == NULL)
		return;
	print(tree->left);
	printf("%d\n", tree->data);
	print(tree->right);
}