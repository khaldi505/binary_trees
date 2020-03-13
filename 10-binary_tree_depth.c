#include "binary_trees.h"
/**
 *binary_tree_depth - function tdepth of a node in a binary tree
 *@tree: a pointer to the node.
 *Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->parent == NULL)
return (0);
return (binary_tree_depth(tree->parent) + 1);
}
