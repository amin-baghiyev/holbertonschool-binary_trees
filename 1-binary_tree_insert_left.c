#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value, node->parent = parent;
	node->right = NULL, node->left = parent->left;
	if (parent->left != NULL)
		parent->left->parent = node;
	parent->left = node;
	return (node);
}
