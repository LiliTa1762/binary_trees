#include "binary_trees.h"

/**
* binary_tree_nodes - Function that counts the nodes at least 1 child
* @tree: pointer to the root node of the tree to measure
* Return: nodes or 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* size_t left_side = 0; */
	size_t right_side = 0;

	if (tree == NULL)
		return (0);

	else if (tree->left != NULL || tree->right != NULL)
		right_side = (binary_tree_nodes(tree->left) + 1 +
						binary_tree_nodes(tree->right));

	return (right_side);
}
