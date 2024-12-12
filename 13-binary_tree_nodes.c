#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes with at least 1 child,
 * or 0 if tree is NULL
 *
 * Description: A node is considered to have at least 1 child
 * if it has a left or right child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t left_count = 0;
	size_t right_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (count + left_count + right_count);
}
