#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigo,pontost,populacao;
    int codigo2,pontost2,populacao2;
    char nome[15],nome2[15];
    float area,pib,area2,pib2;
    printf("****JOGO SUPERTRUNFO****");
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da primeira cidade:\n");
    scanf("%s",&nome);

    printf("Digite o código da primeira cidade:\n");
    scanf("%d",&codigo);

    printf("Digite a população da primeira cidade:\n");
    scanf("%d",&populacao);

    printf("Digite a área da primeira cidade:\n");
    scanf("%f",&area);

    printf("Digite o PIB da primeira cidade:\n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos da primeira cidade:\n");
    scanf("%d",&pontost);

    printf("Digite o nome da primeira cidade:\n");
    scanf("%s",&nome2);

    printf("Digite o código da primeira cidade:\n");
    scanf("%d",&codigo2);

    printf("Digite a população da primeira cidade:\n");
    scanf("%d",&populacao2);

    printf("Digite a área da primeira cidade:\n");
    scanf("%f",&area2);

    printf("Digite o PIB da primeira cidade:\n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos da primeira cidade:\n");
    scanf("%d",&pontost2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome1: %s\n",nome);
    printf("Código1: %d\n",codigo);
    printf("Área1: %f\n",area);
    printf("População: %d\n",populacao);
    printf("Número de pontos Turísticos: %d\n",pontost);
    printf("PIB: %f\n",pib);

    printf("Nome2: %s\n",nome2); 
    printf("Código2: %d\n",codigo2); 
    printf("Área2: %f\n",area2);
    printf("População: %d\n",populacao2);
    printf("Número de pontos Turísticos: %d\n",pontost2);
    printf("PIB: %f\n",pib2);


    return 0;
}
