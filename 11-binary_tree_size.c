#include"binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  pointer to the root node 
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
<<<<<<< HEAD
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
=======
	if (tree == NULL)
	{
		return 0;
	}
	return 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
>>>>>>> a894451be87f9ee9afd96f81ddc62da33b10aa44
}
