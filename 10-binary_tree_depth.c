#include "binary_trees.h"

/**
* binary_tree_depth - Computes the depth of a binary tree.
* @tree: The binary tree.
*
* Return: The depth of the given binary tree.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t Depth = 0;
binary_tree_t *node = NULL;

if (tree != NULL)
{
node = tree->parent;
while (node != NULL)
{
Depth++;
node = node->parent;
}
}
return (Depth);
}
