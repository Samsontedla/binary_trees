#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: is a pointer to the root node of the
 * tree to measure the balance factor
 * Return: balance of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftBalance = 0, rightBalance = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftBalance = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		rightBalance = 1 + binary_tree_balance(tree->right);

	return (leftBalance - rightBalance);
}
