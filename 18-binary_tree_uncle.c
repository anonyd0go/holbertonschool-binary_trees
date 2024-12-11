#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_uncle - finds the uncle of the node
 * @node: Binary tree node
 * Return: Pointer to the uncle of the node
 * NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *f_uncl, *parnt;

	if (node == NULL)
		return (0);

	parnt = node->parent;
	if (parnt == NULL)
		return (0);

	f_uncl = parnt->parent;
	if (f_uncl == NULL)
		return (0);
	if (f_uncl->right == parnt)
		f_uncl = f_uncl->left;
	else
		f_uncl = f_uncl->right;

	return (f_uncl);
}
