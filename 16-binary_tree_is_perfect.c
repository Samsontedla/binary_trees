#include "binary_trees.h"

int is_perfect(const binary_tree_t *tree, size_t depth, int level);
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_depth - function that  the depth of a node in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the depth
 * Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->parent)
			count = 1 + binary_tree_depth(tree->parent);
	}
	return (count);
}

/**
 * is_perfect - checks recursively if node is perfect or not
 * @tree: is a pointer to the node to be checked
 * @depth: is depth of the node
 * @level: is level of the node
 * Return: 1 if node is perfect else 0
 */
int is_perfect(const binary_tree_t *tree, size_t depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d = binary_tree_depth(tree);

	return (is_perfect(tree, d, 0));
}

