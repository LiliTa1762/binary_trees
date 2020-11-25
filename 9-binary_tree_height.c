#include "binary_trees.h"

/*
* traverse: Function that traverse a tree
* @tree_nodes = pointer to the root node of the tree to measure
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
		left_side = traverse(tree_nodes->left);
		right_side = traverse(tree_nodes->right);

		if(left_side >= right_side)
        
			return (left_side + 1);
		
		else
			return (right_side + 1);
		
	}
}

/*
* binary_tree_height: Function that measures the height
* @tree = pointer to the root node of the tree to measure
* Return: height or 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t btheight = 0;

    if (tree == NULL)
        return (0);

    btheight = traverse(tree);

    return (btheight -1);
}
