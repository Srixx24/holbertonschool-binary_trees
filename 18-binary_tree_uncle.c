#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: searching node
 * Return: null if null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = node->parent->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (uncle->left == node->parent)
		return (uncle->right);
	else
		return (uncle->left);
}
