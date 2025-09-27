#include "binary_trees.h"
#include <stddef.h>

/**
 * height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree
 */
int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	return ((left > right ? left : right) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to root node of the tree to measure the balance factor
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
