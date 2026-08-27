#pragma once

// Declaração do nó da árvore
typedef struct TreeNode {
    void* data;
    struct TreeNode* first_child;
    struct TreeNode* next_sibling;
} TreeNode;

TreeNode* create_node(void* data);
void free_tree(TreeNode* root);