#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_postorder - function that goes through a biner traversal
 *@func: function
 *@tree: pointer to the root of a binary tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);

}
