#include "binary_trees.h"
/**
 * binary_tree_is_leaf- Return if a node is a leaf
 * @node: Is the node identificated
 * Return: 0 if no is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);

	return (0);
}
