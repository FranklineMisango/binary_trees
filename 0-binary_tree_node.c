#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - pointer to the new node
 * @parent: pointer to parent node
 * @value: value in new node
 * Return: The returning node
 *
 * Description - points to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));
if(!new_node)
    return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->right = NULL;
new_node->left = NULL;

return (new_node);
}
-
