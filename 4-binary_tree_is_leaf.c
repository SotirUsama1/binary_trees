#include "binary_trees.h"


/**
* binary_tree_is_leaf - checks if a node is a leaf or not
* @node: pointer to a the node
* Return: 0 if not a leaf and 1 if is
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
