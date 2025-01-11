#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the leaves in a binary tree
 * @tree: tree to count it's leaves
 * Return: number of leaves or 0 if tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);


	count = (tree->left != NULL || tree->right != NULL);
	return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
