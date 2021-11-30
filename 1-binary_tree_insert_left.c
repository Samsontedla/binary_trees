#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 * Return: a pointer to the created node
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	if (parent == NULL)
		return NULL;

	newNode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		/*
		 * If parent already has a left-child, the new node must 
		 * take its place, and the old left-child must be set as the left-child of the new
		 * node.
		 * add node in if statment +++++ZZ
		 */
		temp = parent->left;
		parent->left = newNode;
		newNode = temp;
		parent->left->left = newNode->parent;
		printf("%d\n", newNode->n);
	}
	else
	{
		parent->left = newNode;
		printf("helo\n");
	}
	/*else
	{
		temp = parent->left;
		parent->left = newNode;
		newNode->left = temp;
	}
	*/
	return (newNode);
}
