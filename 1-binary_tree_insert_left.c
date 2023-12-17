#include "binary_trees.hi"
#include <stdlib.h>
/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: parent to new
 * @value: value
 * Return: new
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new;

	parent->left = new;

	return (new);
}
