#include <stdio.h>
#include "ds.h"
#include "utils.h"

int main(void) {
    clear_screen();

    // Instânciação manual dos cargos de exemplo do exercício
    TreeNode* diretor = create_node("Diretor Geral");
    TreeNode* ger_ti = create_node("Gerente de TI");
    TreeNode* ger_vendas = create_node("Gerente de Vendas");
    TreeNode* dev = create_node("Desenvolvedor");
    TreeNode* analista = create_node("Analista de Vendas");

    // Associação manual da estrutura da árvore
    diretor->first_child = ger_ti;
    ger_ti->next_sibling = ger_vendas;
    ger_ti->first_child = dev;
    ger_vendas->first_child = analista;

    printf("Cargo: %s\n", (char*) diretor->data);
    printf("Cargo: %s\n", (char*) ger_ti->data);
    printf("Cargo: %s\n", (char*) ger_vendas->data);
    printf("Cargo: %s\n", (char*) dev->data);
    printf("Cargo: %s\n", (char*) analista->data);


    free_tree(diretor);
    return 0;
}
