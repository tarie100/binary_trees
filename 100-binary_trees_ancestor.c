#include"binary_trees.h"
/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two node
 * @first:  pointer to the first node
 * @second:  pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	binary_tree_t *ancestor = (binary_tree_t *)first;
	while (ancestor != NULL)
	{
		if (binary_tree_is_descendant(ancestor, second))
		{
			return (ancestor);
		}
		ancestor = ancestor->parent;
	}
	return (NULL);
}
/**
 * binary_tree_is_descendant - checks if a given ancestor node
 * @ancestor: the ancestor
 * @node: node
 * Return: int
 */
int binary_tree_is_descendant(const binary_tree_t *ancestor, const binary_tree_t *node)
{
	if (ancestor == NULL || node == NULL)
	{
		return (0);
	}
	while (node != NULL)
	{
		if (node == ancestor)
		{
			return (1);
		}
		node = node->parent;
	}
	return 0;
}
