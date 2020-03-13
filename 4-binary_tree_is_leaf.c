#include "binary_trees.h"
/**
*binary_tree_is_leaf - function that checks if a node is a leaf
*@node: the node we're gonna check
*Return: 1 if the node is a leaf node or 0 if it's not.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);
if (!node->right && !node->left)
return (1);
return (0);
}
