#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 * @tree: b tree
 * Return: d (depth)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);
	for (; tree->parent; d++)
		tree = tree->parent;

	return (d);
}
