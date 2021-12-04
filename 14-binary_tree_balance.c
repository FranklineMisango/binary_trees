#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a tree
 *
 * @tree: pointer to the root node to measure the balance
 * Return: 0 or number of nodes
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;

if (tree == NULL)
return (0);

left = custom_height(tree->left);
right = custom_height(tree->right);


return (left - right);
}

/**
 * custom_height - Measure the height of a tree
 * @tree: pointer to node of tree to measure
 * Description: Edited to work with balance factor function
 * Return: height of tree or -1 if NULL
 */
int custom_height(const binary_tree_t *tree)
{
int left, right;

if (tree == NULL)
return (-1);

if (tree->left == NULL && tree->right == NULL)
return (0);

left = custom_height(tree->left) + 1;
right = custom_height(tree->right) + 1;

if (left > right)
return (left);
else
return (right);
}
