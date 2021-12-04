#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - returns the size of a tree
 *
 * @tree: pointer to the root node to measure the size
 * Return: size of tree or 0 if NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left, right;

left = 0;
right = 0;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);

return (left + right);
}
