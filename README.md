# 0x1D. C - Binary trees

## Resources

Read or watch:

    Binary tree (https://intranet.alxswe.com/rltoken/1F2x42-8vUbOmU4L1C1KMg) (note the first line: Not to be confused with B-tree.)
    Data Structure and Algorithms - Tree (https://intranet.alxswe.com/rltoken/ED7Ll7om-CCdIo-0lb970A)
    Tree Traversal (https://intranet.alxswe.com/rltoken/z6ZaXr_RxwE5nTHAUx_dfQ)
    Binary Search Tree (https://intranet.alxswe.com/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)
    Data structures: Binary Tree (https://intranet.alxswe.com/rltoken/BeyJ2gjlE7_djwRiDyeHig)

## Data Structures

Basic Binary Tree

```C
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

Binary Search Tree

typedef struct binary_tree_s bst_t;

AVL Tree

typedef struct binary_tree_s avl_t;

Max Binary Heap

typedef struct binary_tree_s heap_t;
```

**Note:** For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

**Print function**

To match the examples in the tasks, you are given this function

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction.

## Tasks

**0. New node**
Write a function that creates a binary tree node

    *	Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
    *	Where parent is a pointer to the parent node of the node to create
    *	And value is the value to put in the new node
    *	When created, a node does not have any child
    *	Your function must return a pointer to the new node, or NULL on failure

**1. Insert left**
Write a function that inserts a node as the left-child of another node

    *	Prototype: binary_tree_t *binary_tree_insert_left*(binary_tree_t *parent, int value);
    *	Where parent is a pointer to the node to insert the left-child in
    *	And value is the value to store in the new node
    *	Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
    *	If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

**2. Insert right**
Write a function that inserts a node as the right-child of another node

    *	Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
    *	Where parent is a pointer to the node to insert the right-child in
    *	And value is the value to store in the new node
    *	Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
    *	If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

**Delete**
Write a function that deletes an entire binary tree

    *	Prototype: void binary_tree_delete(binary_tree_t *tree);
    *	Where tree is a pointer to the root node of the tree to delete
    *	If tree is NULL, do nothing

**Is leaf**