#include "binary_trees.h"
/**
 *binary_tree_depth - function that measures the depth of a node in a binary tree
 *@tree: a pointer to the node.
 *Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t left, right;
if (!tree)
return (0);
if (tree->parent == NULL)
return (0);

left = binary_tree_depth(tree->left);
right = binary_tree_depth(tree->right);
if (left > right)
return (left + 1);
return (right + 1);

}
