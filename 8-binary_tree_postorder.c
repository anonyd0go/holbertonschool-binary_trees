#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_postorder - performs a function on the tree
 * in post-order traversal
 * @tree: Root of the tree that will be traversed
 * @func: function that will be performed on each node
 * Return: Void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
