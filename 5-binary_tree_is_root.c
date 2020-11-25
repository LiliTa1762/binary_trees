#include "binary_trees.h"

/*
* binary_tree_is_root: function that checks if a node is a root
* @node = pointer to the node to check
* Return: 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    if (node == NULL)
        return (0);

    else if (node->parent == NULL && node->left != NULL && node->right != NULL)
        return (1);
        
    else
        return (0);
}
