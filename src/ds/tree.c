#include <stdlib.h>
#include "ds.h"

// Função para criar estrutura inicial de uma árvore genérica
TreeNode* create_node(void* data){
    TreeNode* new_node = (TreeNode*) malloc(sizeof(TreeNode));

    if (new_node == NULL) {
        return NULL;
    }

    new_node->data = data;
    new_node->first_child = NULL;
    new_node->next_sibling = NULL;

    return new_node;
}

// Função para liberar alocação da árvore genérica
void free_tree(TreeNode* root){
    if(root == NULL){
        return;
    }

    free_tree(root->first_child);
    free_tree(root->next_sibling);
    free(root);
}
