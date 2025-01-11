#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to be measured
 * Return: return 0 on success
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_node = binary_tree_height(tree->left);
	size_t right_node = binary_tree_height(tree->right);
	return (1 + (left_node > right_node ? left_node : right_node));
}
