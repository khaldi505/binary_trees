#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_inorder - function that goes through a biner traversal
 *@func: function
 *@tree: pointer to the root of a binary tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
