#include "binary_trees.h"

/**
* binary_tree_uncle - function that finds the sibling of a node
* @node: pointer to the node to find the uncle
* Return: NULL if the node or if the node doesn't have uncle,
* otherwise the pointer to the uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
if (node == NULL)
return (NULL);
return (binary_tree_sibling(node->parent));
}

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
