#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: is a pointer to the node to insert the right-child in
 *@value: is the value to store in the new node
 *Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *right_node;

if (parent == NULL)
return (NULL);

right_node = malloc(sizeof(binary_tree_t));
if (right_node == NULL)
{
free(right_node);
return (NULL);
}

right_node->parent = parent;
right_node->n = value;
right_node->left = NULL;
right_node->right = parent->right;
parent->right = right_node;

if (right_node->right)
right_node->right->parent = right_node;

return (right_node);
}
