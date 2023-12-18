#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - function that measures the size
 * of a binary tree
 * @tree: b tree
 * Return: 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t R, L;

	if (tree == NULL)
		return (0);

	R = binary_tree_size(tree->right);
	L = binary_tree_size(tree->left);

	return (1 + R + L);
}
