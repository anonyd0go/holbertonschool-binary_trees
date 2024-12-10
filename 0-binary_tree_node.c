#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_node - Creates binary tree node without children
 * @parent: Parent of the new node
 * @value: Value the node will hold
 * Return: Pointer to the new node, NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (0);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	return (new);
}
