#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t b_height, b_size;

	if (tree == NULL)
	{
		return (0);
	}

	b_height = binary_tree_height(tree);
	b_size = binary_tree_size(tree);

	return (b_size == (size_t)(1 << b_height) - 1);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
	{
		return (0);
	}

	lh += 1 + binary_tree_height(tree->left);
	rh += 1 + binary_tree_height(tree->right);

	return (lh > rh ? lh : rh);
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
	{
		return (0);
	}

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (1 + l + r);
}
