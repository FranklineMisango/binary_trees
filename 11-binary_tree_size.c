#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - returns the size of a tree
 *
 * @tree: pointer to the root node to measure the size
 * Return: size of tree or 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t x;

if (tree == NULL)
return (0);

x = binary_tree_size(tree->left) + 1;
x += binary_tree_size(tree->right);

return (x);
}
