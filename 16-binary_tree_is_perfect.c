#include "binary_trees.h"
/**
* to_find_depth - Function that checks the depth
* @tree: pointer to the root node of the tree to measure
* Return: 1 or 0
*/
int to_find_depth(const binary_tree_t *tree)
{
	int i = 0;

	while (tree != NULL)
	{
		i++;
		tree = tree->left;
	}
	return (i);
}

/**
* bt_perfect - Function that find a perfect binary tree
* @tree: pointer to the root node of the tree to measure
* @i: counter
* @level: level of the tree
* Return: 1 or 0
*/
int bt_perfect(const binary_tree_t *tree, int i, int level)
{
	/* An empty tree is perfect */
	if (tree == NULL)
		return (1);

	/* Check the presence of child */
	if (tree->left == NULL && tree->right == NULL)
		return (i == level + 1);

	/* If internal node and one child is empty */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Left and right subtrees are  perfect */
	return ((bt_perfect(tree->left, i, level + 1)) &&
			(bt_perfect(tree->right, i, level + 1)));
}

/**
* binary_tree_is_perfect - Function that checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to measure
* Return: 1 or 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i = to_find_depth(tree);

	if (tree == NULL)
		return (0);

	return (bt_perfect(tree, i, 0));

}
