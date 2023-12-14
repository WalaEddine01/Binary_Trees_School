#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @data: Integer stored in the node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

typedef struct bst_t
{
	int data;
	struct bst_t *left;
	struct bst_t *right;
	struct bst_t *parent;
} bst_t;

void binary_tree_print(const bst_t *);
bst_t *binary_tree_node(bst_t *parent, int value);
bst_t *bst_insert(bst_t **tree, int value);
void print_inorder(bst_t *tree);

#endif /* _BINARY_TREES_H_ */
