#include"binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child 
 * @value: value to store in the new node
 * Return:  a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return NULL;
	}
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return new_node;
}
