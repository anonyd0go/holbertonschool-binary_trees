#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_preorder - goes throgh tree in pre-order traversal
 * @tree: root node of the tree
 * @func: pointer to a function that will be called on each node
 * Return: Void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
