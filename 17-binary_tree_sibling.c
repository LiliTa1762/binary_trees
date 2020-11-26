#include "binary_trees.h"

/**
* binary_tree_sibling - Function that finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling or 0
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int node_1 = 0;
	int node_2 = 0;
	int left = 0;
	int right = 0;

	if (node == NULL)
		return (NULL);

	/* Compare the two nodes with the children of the node */
	if (node->left && node->right)
	{
		left = node->left->n;
		right = node->right->n;

		if (left == node_1 && right == node_2)
			return (0);

		else if (left == node_2 && right == node_1)
			return (0);
	}

	/* Check the existence of left subtree */
	if (node->left)
		return (binary_tree_sibling(node->parent));

	/* Check the existence of right subtree */
	if (node->right)
		return (binary_tree_sibling(node->parent));

	return (node);
}
