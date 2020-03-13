#include "binary_trees.h"
/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *Return: size_t 0 or size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
else
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
