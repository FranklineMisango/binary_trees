#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a tree
 *
 * @tree: pointer to the node to measure the depth
 * Return: depth of tree or 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL || tree->parent == NULL)
        return (0);

    return (binary_tree_depth(tree->parent) + 1);
}
