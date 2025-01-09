#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to the right of its parent
 * @parent: the parent node
 * @value: value to store in node
 * Return: pointer to created node or NULL if failed or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	node = binary_tree_node(NULL, value);

	if (parent == NULL || node == NULL)
		return (NULL);

	node->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		temp = parent->right;
		parent->right = node;
		node->right = temp;
		temp->parent = node;
	}

	return (node);
}
