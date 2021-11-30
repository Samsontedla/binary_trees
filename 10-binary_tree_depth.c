#include "binary_trees.h"
/**
 * binary_tree_depth - function that  the depth of a node in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the depth
 * Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	size_t countLeft = 0;

	if (tree == NULL)
		return (0);
	current = tree;
	while (current->parent != NULL)
	{
		countLeft++;
		current = current->parent;
	}

	if (countLeft)
		return (countLeft);
	else
		return (0);
}
