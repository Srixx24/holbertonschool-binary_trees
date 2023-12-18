#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: searching node
 * Return: null if null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
