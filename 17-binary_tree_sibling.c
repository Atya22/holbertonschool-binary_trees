#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: Is the node that will be cheked
 * Return: Sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent ||
			!node->parent->right || !node->parent->left)
		return (0);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
