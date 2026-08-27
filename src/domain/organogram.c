#include <stdio.h>
#include "ds.h"

// Função que de fato imprime o ornograma
static void print_organogram_aux(TreeNode* root, int nivel){
    if (root == NULL){
        return;
    }

    for (int i=0; i<nivel; i++){
        printf(" |--");
    }

    printf(" [%s]\n", (char*) root->data);
    print_organogram_aux(root->first_child, nivel+1);
    print_organogram_aux(root->next_sibling, nivel);
}

// Função pública para imprimir o ornograma
void print_organogram(TreeNode* root){
    print_organogram_aux(root, 0);
}
