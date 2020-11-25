#include "binary_trees.h"

/**
* binary_tree_insert_left - function to insert a left node
* @parent: node parent
* @value: value of the new node
* Return: pointer to new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	if (parent->left)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left = newnode;
	}

	else
	{
		parent->left = newnode;
	}

	return (newnode);
}
