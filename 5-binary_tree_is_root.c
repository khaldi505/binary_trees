#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_is_root - checks if the current node is root
 *@node: the node to check
 *Return: return 1 if the current node is root, 0 if it's not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (!node)
return (0);
if (!node->parent)
return (1);
return (0);
}
