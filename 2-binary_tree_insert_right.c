#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right child
 * @parent: parent node
 * @value: value of the node
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

if (parent == NULL || !new_node)
{
return (NULL);
}
new_node->parent = parent;
new_node->n = value;
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}
parent->right = new_node;
return (new_node);
}
