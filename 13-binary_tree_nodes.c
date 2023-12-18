#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: b tree
 * Return: 0 if null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t R = 0;
	size_t L = 0;

	if (tree == NULL)
		return (0);

	R = binary_tree_nodes(tree->right);
	L = binary_tree_nodes(tree->left);

	return (1 + R + L);
}
