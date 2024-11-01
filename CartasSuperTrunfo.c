#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo,pontost,populacao;
    char nome[15];
    float area,pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da cidade:\n");
    scanf("%s",&nome);

    printf("Digite o código da cidade:\n");
    scanf("%d",&codigo);

    printf("Digite a população:\n");
    scanf("%d",&populacao);

    printf("Digite a área:\n");
    scanf("%f",&area);

    printf("Digite o PIB:\n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d",&pontost);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome: %s\n",nome);
    printf("Código: %d\n",codigo);
    printf("Área: %f\n",area);
    printf("População: %d\n",populacao);
    printf("Número de pontos Turísticos: %d\n",pontost);
    printf("PIB: %f\n",pib);


    return 0;
}
