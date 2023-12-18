#include "binary_trees.h"
#include <stdlib.h>
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

