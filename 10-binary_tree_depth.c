#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_depth - measures the depth of a node
 * @tree: ptr to the node to find its depth
 * Return: depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *ptr = tree;

	if (tree == NULL)
		return (0);
	while (ptr->parent != NULL)
	{
		depth++;
		ptr = ptr->parent;
	}
	return (depth);
}
