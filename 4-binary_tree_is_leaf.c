#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node
 * Return: 0 if null
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
