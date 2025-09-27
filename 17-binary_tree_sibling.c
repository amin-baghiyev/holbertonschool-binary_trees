#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->n != node->parent->left->n)
		return (node->parent->left);
	if (node->parent->right != NULL && node->n != node->parent->right->n)
		return (node->parent->right);
	return (NULL);
}
