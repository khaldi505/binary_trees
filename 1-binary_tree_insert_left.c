#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
return (NULL);
binary_tree_t *left_node;
left_node = malloc(sizeof(binary_tree_t));
if (left_node == NULL)
{
free(left_node);
return (NULL);
}

left_node->parent = parent;
left_node->n = value;
left_node->right = NULL;
left_node->left = parent->left;
parent->left = left_node;
if (left_node->left)
left_node->left->parent = left_node;
return left_node;
}