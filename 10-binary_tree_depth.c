#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth in a node in a binary tree
 * @tree: tree to measure
 * Return: depth or 0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
