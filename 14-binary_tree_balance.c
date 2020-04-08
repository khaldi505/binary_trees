#include "binary_trees.h"
/**
 *height - returns the height
 *of a tree or a sub tree
 *@tree: pointer to the tree
 *Return: the height
 */
int height(const binary_tree_t *tree)
{
int left, right;

if (!tree)
return (0);

left = height(tree->left);
right = height(tree->right);
if (left > right)
return (left + 1);
return (right + 1);
}
/**
 *binary_tree_balance - a function that
 * measures the balance factor of a binary tree
 *@tree: pointer to the root of the tree
 *Return: the height of the left nodes - the height of the right nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (height(tree->left) - height(tree->right));
}
