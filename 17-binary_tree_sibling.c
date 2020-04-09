#include "binary_trees.h"

/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: pointer to the node
* Return: the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->right == node)
{
return (node->parent->left);
}
else
return (node->parent->right);
{
if (node->parent == NULL
|| node->parent->parent == NULL)
return (NULL);
}
}
