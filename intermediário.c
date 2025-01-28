#include <stdio.h>

int main(){

    int codigo,pontost,populacao;
    int codigo2,pontost2,populacao2;
    char nome[15],nome2[15];
    float area,pib,area2,pib2;
    float pibperc1, pibperc2, densidade1, densidade2;


    printf("****JOGO SUPERTRUNFO****\n");
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

    printf("Digite o nome da segunda cidade:\n");
    scanf("%s",&nome2);

    printf("Digite o código da segunda cidade:\n");
    scanf("%d",&codigo2);

    printf("Digite a população da primeira cidade:\n");
    scanf("%d",&populacao2);

    printf("Digite a área da segunda cidade:\n");
    scanf("%f",&area2);

    printf("Digite o PIB da segunda cidade:\n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos da segunda cidade:\n");
    scanf("%d",&pontost2);


    pibperc1 = (float) pib /populacao;
    densidade1 = (float) populacao / area;

    pibperc2 =  (float) pib2 /populacao2;
    densidade2 = (float) populacao2 / area2;



    return 0;
}