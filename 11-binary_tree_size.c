#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t countLeft = 0;
	size_t countRight = 0;

	while (tree->left != NULL)
	{
		binary_tree_size(tree->left);
		countLeft++;
	}
	while (tree->right != NULL)
	{
		binary_tree_size(tree->right);
		countRight++;
	}
	return (countLeft + countRight + 1);
}
