#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through binary three using pre-order traversal
 * @tree: root node to explore
 * @func: function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
