#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_height - height of a binary
 *@tree: pointer to the root node of the measure the height.
 *Return: if tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (!tree || (!(tree->left) && !(tree->right)))
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left > right)
return (left + 1);
return (right + 1);
}
