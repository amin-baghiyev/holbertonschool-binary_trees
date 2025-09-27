#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != NULL
	&& node->parent->n != node->parent->parent->left->n)
		return (node->parent->parent->left);
	if (node->parent->parent->right != NULL
	&& node->parent->n != node->parent->parent->right->n)
		return (node->parent->parent->right);
	return (NULL);
}
