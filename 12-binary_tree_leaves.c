#include "binary_trees.h"
#include <stdlib.h>
/**
 *  binary_tree_leaves - function that counts the leaves
 *  in a binary tree
 *  @tree: b tree
 *  Return: 0 if null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t R, L;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	R = binary_tree_leaves(tree->right);
	L = binary_tree_leaves(tree->left);

	return (R + L);
}
