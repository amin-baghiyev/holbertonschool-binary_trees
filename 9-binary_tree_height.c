#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return ((left > right ? left : right) + 1);
}
