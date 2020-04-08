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
 *btb - a function that
 * measures the balance factor of a binary tree
 *@tree: pointer to the root of the tree
 *Return: the height of the left nodes - the height of the right nodes
 */

int btb(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (height(tree->left) - height(tree->right));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 *@tree: pointer to the tree
 *Return: 0 if it's not full, or 1 if it's full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (!tree->right && !tree->right)
return (1);
else if (btb(tree->left) || btb(tree->right) != 0)
return (0);
else
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
