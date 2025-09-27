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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if binary tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left = height(tree->left), right = height(tree->right);
	if (left != right)
		return (0);

	return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
}
