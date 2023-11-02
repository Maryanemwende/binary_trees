#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 If tree is NULL, a NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ll, rl;

	if (tree ==  NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	ll = binary_tree_leaves(tree->left);
	rl = binary_tree_leaves(tree->right);

	return (ll + rl);
}
