#include "binary_trees.h"

/*
* binary_tree_delete: function to  that deletes an entire binary tree
* @parent = root node of the tree
* Return: 0
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
 
    free(tree);

    return;
}
