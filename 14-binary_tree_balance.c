#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: b tree
 * Return: 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree)
	{
		size_t L = 0;
		size_t R = 0;

		L = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		R = tree->right ? 1 + binary_tree_height(tree->right) : 0;
			return ((L > R) ? L : R);
	}

	return (0);
}
/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: b tree
 * Return: 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t R, L;

	if (tree == NULL)
		return (0);

	R = binary_tree_height(tree->right);
	L = binary_tree_height(tree->left);

	return ((int) (L - R));
}
