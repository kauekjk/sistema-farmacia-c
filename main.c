#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para representar o medicamento
struct Medicamento {
    char nome[50];
    int quantidade;
};

int main()
{
    // Declaração das variáveis
    struct Medicamento remedio;
    int quantidade_nova;

    // --- INTERFACE INICIAL DO SISTEMA ---
    printf("===========================================\n");
    printf("       SISTEMA DE GESTAO DE FARMACIA       \n");
    printf("        Modulo: Inventario de Estoque      \n");
    printf("===========================================\n\n");

    // --- CADASTRO INICIAL DO MEDICAMENTO ---
    printf(">>> FASE 1: Cadastro do Medicamento\n");
    printf("Digite o nome do medicamento: ");
    fgets(remedio.nome, 50, stdin);

    // Remove o 'Enter' (\n) que o fgets captura automaticamente
    remedio.nome[strcspn(remedio.nome, "\n")] = '\0';

    printf("Digite a quantidade inicial em estoque: ");
    scanf("%d", &remedio.quantidade);
    printf("-------------------------------------------\n\n");

    // --- CRIAÇÃO DO PONTEIRO ---
    // O ponteiro recebe o endereço de memória da estrutura 'remedio'
    struct Medicamento *ponteiro_med = &remedio;

    // --- ATUALIZAÇÃO DINÂMICA VIA PONTEIRO ---
    printf(">>> FASE 2: Entrada de Estoque (Operacao via Ponteiro)\n");
    printf("Medicamento selecionado: %s\n", ponteiro_med->nome);
    printf("Digite a quantidade que deseja ADICIONAR: ");
    scanf("%d", &quantidade_nova);

    // Atualizando o valor diretamente na memória usando o operador de seta (->)
    ponteiro_med->quantidade += quantidade_nova;
    printf("-------------------------------------------\n\n");

    // --- RELATÓRIO FINAL ---
    printf("===========================================\n");
    printf("       RELATORIO DE ESTOQUE ATUALIZADO     \n");
    printf("===========================================\n");
    printf(" Medicamento: %s\n", remedio.nome);
    printf(" Qtd. Final em Estoque: %d unidades\n", remedio.quantidade);
    printf("===========================================\n");
    printf("   [Processamento de Memoria Concluido]    \n");
    printf("===========================================\n");

    return 0;
}
