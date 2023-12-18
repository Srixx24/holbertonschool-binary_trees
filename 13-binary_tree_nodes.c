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
	size_t x = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		x++;
	x += binary_tree_nodes(tree->right);
	x += binary_tree_nodes(tree->left);

	return (x);
}
