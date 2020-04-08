#include "binary_trees.h"
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

if (tree->right && tree->left)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

if ((tree->left && !tree->right) || (!tree->left && !tree->right))
return (0);

return (0);
}
