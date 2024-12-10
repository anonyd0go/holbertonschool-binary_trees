#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right - creates a new node to the right of the parent
 * @parent: Parent of the new node
 * @value: Value that the node will have
 * Return: Pointer to a new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (0);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (0);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
