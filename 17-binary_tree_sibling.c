#include "binary_trees.h"

/**
* binary_tree_sibling - Function that finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling or 0
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left != node)
			sibling = node->parent->left;

		else
			sibling = node->parent->right;
	}
	return (sibling);
}
