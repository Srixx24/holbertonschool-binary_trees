#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: parent of new
 * @value: value
 * Return: new
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new;

	parent->right = new;

	return (new);
}
