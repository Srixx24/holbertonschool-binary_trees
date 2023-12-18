#include "binary_trees.h"
#include <stdlib.h>
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - function that checks if a
 * binary tree is perfect
 * @tree: b tree
 * Return: 0 is null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t RH, LH, RP, LP;

	if (tree == NULL)
		return (0);

	RH = binary_tree_height(tree->right);
	LH = binary_tree_height(tree->left);

	if (RH != LH)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	RP = binary_tree_is_perfect(tree->right);
	LP = binary_tree_is_perfect(tree->left);

	return (RP && LP);
}
