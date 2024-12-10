#include <stdlib.h>
#include "binary_trees.h"
int get_tree_height(const binary_tree_t *tree);


/**
 * binary_tree_balance - gets the balance factor of a tree
 * @tree: Pointer to the root of the tree
 * Return: balance factor of the tree
 * 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = get_tree_height(tree->left);
	right_h = get_tree_height(tree->right);

	return (left_h - right_h);
}


/**
 * get_tree_height - Finds the height of a tree
 * @tree: root of the tree to find the height
 * Return: Height of the tree
 */
int get_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = get_tree_height(tree->left);
	right = get_tree_height(tree->right);

	return (((left > right) ? left : right) + 1);
}
