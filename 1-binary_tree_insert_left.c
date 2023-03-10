#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as the left child
 * @parent: parent node
 * @value: value of the node
 * Return: new node
 */
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

if (!parent)
{
return (NULL);
}
new_node = binary_tree_node(parent, value);
if (!new_node)
{
return (NULL);
}
if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
