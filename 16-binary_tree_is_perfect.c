#include <stdlib.h>
#include "binary_trees.h"
int node_depth(const binary_tree_t *tree);
int perf_node(const binary_tree_t *tree, int h);
int check_level(const binary_tree_t *tree, int *leaf_d, int node_d);


/**
 * binary_tree_is_perfect - Checks if a tree is perfect
 * @tree: Root of the tree
 * Return: 1 if its perfect, 0 otherwise or NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = node_depth(tree), perfect;
	int leaf = 0, node = 0, level;

	if (tree == NULL)
		return (0);

	perfect = perf_node(tree, height);
	level = check_level(tree, &leaf, node);
	return (perfect && level);
}


/**
 * node_depth - gets the height of the tree
 * @tree: root of the tree
 * Return: size of the tree/depth of final node
 */
int node_depth(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = node_depth(tree->left);
	right = node_depth(tree->right);

	return (((left > right) ? left : right) + 1);
}


/**
 * perf_node - checks if a node is perfect
 * @tree: node to check if perfect
 * @h: height of tree
 * Return: 1 if perfecr, 0 otherwise
 */
int perf_node(const binary_tree_t *tree, int h)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (perf_node(tree->left, h - 1) && perf_node(tree->right, h - 1));
}

/**
 * check_level- checks that leafs are at same level
 * @tree: root of the tree
 * @leaf_d: depth of first found leaf
 * @node_d: depth of current node
 * Return: 1 if all leafs on same level, o otherwise
 */
int check_level(const binary_tree_t *tree, int *leaf_d, int node_d)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		if (*leaf_d == 0)
		{
			*leaf_d = node_d;
			return (1);
		}
		return (node_d == *leaf_d);
	}

	return (check_level(tree->left, leaf_d, node_d + 1) &&
			check_level(tree->right, leaf_d, node_d + 1));
}

