#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with a child
 *
 * @tree: pointer to the root node to count
 * Return: 0 or number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t x;
x = 0;

if(tree == NULL)
    return (0);

if(tree->left == NULL || tree->right == NULL)
    return (0);

x = binary_tree_nodes(tree->left) + 1;
x += binary_tree_nodes(tree->left);

return (x);
}
