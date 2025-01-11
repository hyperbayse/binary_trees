#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to be measured
 * Return: return 0 on success
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (tree == NULL)
		return (0);

	left_node = binary_tree_height(tree->left);
	right_node = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		left_node--;
		right_node--;
	}
	return (1 + (left_node > right_node ? left_node : right_node));
}
