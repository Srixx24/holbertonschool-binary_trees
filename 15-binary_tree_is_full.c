#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: b tree
 * Return: 0 if null
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t R, L;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return(1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->right && binary_tree_is_full(tree->left));

	return (0);
}
