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
	int balance = 0;

	if (tree == NULL)
		return (0);

	if (tree->right && tree->left)
		balance = 2;
	else if (tree->right && tree->left == NULL)
		balance = -1;
	else if (tree->right == NULL && tree->left)
		balance = -1;
	else
		balance = 0;

	return (balance);
}
