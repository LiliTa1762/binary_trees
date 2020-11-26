#include "binary_trees.h"

/**
* traverse - Function that traverse a tree
* @tree_nodes: pointer to the root node of the tree to measure
* Return: height of the tree
*/
size_t traverse(const binary_tree_t *tree_nodes)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (tree_nodes == NULL)
		return (0);

	else
	{
		left_side = traverse(tree_nodes->left) + 1;
		right_side = traverse(tree_nodes->right) + 1;

		if (left_side >= right_side)
			return (left_side);

		else
			return (right_side);

	}
}

/**
* binary_tree_balance - Function that measures the balance factor
* @tree: pointer to the root node of the tree to measure
* Return: factor or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (traverse(tree->left) - traverse(tree->right));
}
