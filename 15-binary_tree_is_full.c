#include "binary_trees.h"

/**
* binary_tree_is_full - Function that checks if a binary tree is full
* @tree: pointer to the tree node of the tree to measure
* Return: 0 or 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	 /* If empty tree */
	if (tree == NULL)
		return (0);

	/* If leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both left and right are not NULL, and left & right subtrees are full */
	if ((tree->left) && (tree->right))
		return ((tree->left) && binary_tree_is_full(tree->right));

	/* We reach here when none of the above if conditions work */
	return (0);
}
