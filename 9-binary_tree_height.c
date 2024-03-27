#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the binary tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left); // Height of left subtree
right_height = binary_tree_height(tree->right); // Height of right subtree

if (left_height > right_height)
return (left_height + 1); // Add 1 to account for the current node
else
return (right_height + 1); // Add 1 to account for the current node
}
