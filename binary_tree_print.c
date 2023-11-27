#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * print_tree - Recursive function to print a binary tree
 * @tree: Pointer to the root of the tree
 * @space: Number of spaces for indentation
 * @is_left: Flag indicating if the node is the left child
 */
void print_tree(const binary_tree_t *tree, int space, int is_left)
{
	if (tree == NULL)
		return;

	/* Increase distance between levels */
	space += 5;

	/* Print right child */
	print_tree(tree->right, space, 0);

	/* Print current node after space */
	printf("\n");
	for (int i = 5; i < space; i++)
		printf(" ");
	if (is_left)
		printf("L:%d", tree->n);
	else
		printf("R:%d", tree->n);

	/* Recursive call for left child */
	print_tree(tree->left, space, 1);
}

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root of the tree
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Initial space */
	printf("(%d)\n", tree->n);

	/* Call recursive function to print tree structure */
	print_tree(tree->left, 0, 1);
	print_tree(tree->right, 0, 0);

	/* Print a separator line */
	printf("\n-------------------------------------------\n");
}
