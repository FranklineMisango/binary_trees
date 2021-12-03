#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - returns height of a tree
 *
 * @tree: root node of the tree to traverse
 * Return: height of tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left;
size_t right;

if (tree == NULL)
    return(0);

if (tree->left == NULL && tree->right == NULL)
    return (0);

right = binary_tree_height(tree-> right) + 1;
left = binary_tree_height(tree->left) + 1;

if (right > left)
    return (right);
else
    return (left);
}
