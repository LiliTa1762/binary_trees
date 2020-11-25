#include "binary_trees.h"

/*
* binary_tree_is_leaf: function to check if a node is a leaf
* @node = node to check
* Return: an int
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	    if (node == NULL)
        return (0);

    else if (node->right == NULL && node->left == NULL)
        return (1);

    else
        return (0);
}
