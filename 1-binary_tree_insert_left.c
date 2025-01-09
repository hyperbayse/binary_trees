#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left of its parent
 * @parent: the parent node
 * @value: value to store in node
 * Return: pointer to created node or NULL if failed or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	node = binary_tree_node(NULL, value);

	if (parent == NULL || node == NULL)
		return (NULL);

	node->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		temp = parent->left;
		parent->left = node;
		node->left = temp;
		temp->parent = node;
	}

	return (node);
}
