#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts new node as right-child of another
 * @parent:node to insert the right-child in
 * @value: value to store in new node
 * Return: pointer to created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *new_node;

if (!parent)
    return (NULL);

new_node = malloc(sizeof(binary_tree_t));
if (!new_node)
    return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;

if (parent->right != NULL)
{
	new_node->right = parent->right;
	parent->right->parent = new_node;
}
else
{
	new_node->right = NULL;
}

parent->right = new_node;

return (new_node);
}
