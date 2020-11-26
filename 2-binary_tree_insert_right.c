#include "binary_trees.h"

/**
* binary_tree_insert_right - function to insert a node to the right
* @parent: node parent
* @value: value of the new node
* Return: pointer to new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode_right;

	if (parent == NULL)
		return (NULL);

	newnode_right = malloc(sizeof(binary_tree_t));

	if (newnode_right == NULL)
		return (NULL);

	newnode_right->n = value;
	newnode_right->left = NULL;
	newnode_right->right = NULL;
	newnode_right->parent = parent;

	/* Insert first level */
	if (parent->right)
	{
		newnode_right->right = parent->right;
		parent->right->parent = newnode_right;
		parent->right = newnode_right;
	}

	/* Insert second level */
	else
	{
		parent->right = newnode_right;
	}

	return (newnode_right);
}
