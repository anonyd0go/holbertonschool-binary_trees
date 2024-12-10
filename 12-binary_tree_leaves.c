#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_leaves - counts all the leaves in a binary tree
 * @tree: Pointer to the root of the tree
 * Return: number of leafs on the tree
 * if tree is NULL, returns 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
