#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary_tree node
 * @parent: parent node of the node to create
 * @value: value to hold in the new node
 * Return: new node pointer or NULL if failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;

	if (parent == NULL)
	{
		parent = node;
		return (parent);
	}
	else
	{
		node->parent = parent;
	}

	return (node);
}
