#include "binary_trees.h"

/**
* binary_tree_is_root - function that checks if a node is a root
* @node: pointer to the node to check
* Return: 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	int checks_root = 0;

	if (node)
	{
		if (node->parent == NULL)
		{
			checks_root = 1;
			return (checks_root);
		}
	}

	return (checks_root);
}
