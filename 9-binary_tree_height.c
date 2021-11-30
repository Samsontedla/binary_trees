#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	int countLeft = 0;
	int countRight = 0;

	if (tree == NULL)
		return (0);
	current = tree;
	while (current->left != NULL)
	{
		countLeft++;
		current = current->left;
	}
	current = tree;
	while (current->right != NULL)
	{
		countRight++;
		current = current->right;
	}
	if (countLeft > countRight)
		return (countLeft);
	else
		return (countRight);
}
