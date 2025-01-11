#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to count it's leaves
 * Return: number of leaves or 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
