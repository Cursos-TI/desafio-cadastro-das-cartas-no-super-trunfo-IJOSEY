#include <stdio.h>

int main(){

    int codigo,pontost,populacao,opcao,comparacao;
    int codigo2,pontost2,populacao2;
    char nome[15],nome2[15],atributo1,atributo2,atributo4,atributo3;
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

    //calculo de atributo  carta 1.
    pibperc1 = (float) pib /populacao;
    densidade1 = (float) populacao / area;
    //calculo de atributo carta 2. 
    pibperc2 =  (float) pib2 /populacao2;
    densidade2 = (float) populacao2 / area2;
        
    //Usuário deve determina se deja compara 1 ou 2 atributos 
    printf("1- para compara 1 atributo de cada carta.\n");
    printf("2- para compara 2 atributos de cada carta.\n");
    printf("3- para compara todos atributos das cartas.\n");
    printf("Digite a quantidade de atributos que deseja comparar?\n");
    scanf("%d",&comparacao);
   //menu verifica quanto atributos usuário deseja comparar. 
   switch (comparacao)
   {
   case 1:
    printf("Você escolheu comparar 1 atributo!\n");
    printf("O usuário deverá escolher um atributo de cada carta..\n");
    printf("Escolha no menu abaixo a letra correpondente aos atributos desejado.\n");
    printf("A- Área.\n");
    printf("B- População.\n");
    printf("C- Pontos Turisticos.\n");
    printf("D- PIB.\n");
    printf("E- PIB per capta.\n");
    printf("F- Densidade Populacional.\n");
    printf("Digite o atributo da carta: ");
    //espaço antes do atribuidor de valor para evitar erro de leitura.
    scanf(" %c",&atributo1);
   switch (atributo1)
   {
   case 'A':
   case 'a':
    printf("Você escolheu: A- Área.\n");
    if (area > area2)
    {
       printf("1° Carta venceu!!\n");
    } 
    else if (area == area2)
    {
       printf("Empatou!!\n");
    }
    else
    {
        printf("2° Carta venceu!!\n");
    }
    break;
   case 'B':
   case 'b':
    printf("Você escolheu: B- População.\n");
    if (populacao > populacao2)
    {
       printf("1° Carta venceu!!\n");
    } 
    else if (populacao == populacao2)
    {
       printf("Empatou!!\n");
    }
    else
    {
        printf("2° Carta venceu!!\n");
    }
    break;
   case 'C':
   case 'c':
    printf("Você escolheu: C- Pontos Turisticos.\n");
    if (pontost > pontost2)
    {
       printf("1° Carta venceu!!\n");
    } 
    else if (pontost == pontost2)
    {
       printf("Empatou!!\n");
    }
    else
    {
        printf("2° Carta venceu!!\n");
    }
    break; 
   case 'D':
   case 'd':
    printf("Você escolheu: D- PIB.\n");
    if (pib > pib2)
    {
       printf("1° Carta venceu!!\n");
    } 
    else if (pib == pib2)
    {
       printf("Empatou!!\n");
    }
    else
    {
        printf("2° Carta venceu!!\n");
    }
    break; 
   case 'E':
   case 'e':
    printf("Você escolheu: E- PIB per capta.\n");
    if (pibperc1 > pibperc2)
    {
       printf("1° Carta venceu!!\n");
    } 
    else if (pibperc1 == pibperc2)
    {
       printf("Empatou!!\n");
    }
    else
    {
        printf("2° Carta venceu!!\n");
    }
    break;
   case 'F':
   case 'f':
    printf("Você escolheu: F- Densidade Populacional.\n");
    if (densidade1 < densidade2)
    {
       printf("1° Carta venceu!!\n");
    } 
    else if (densidade1 == densidade2)
    {
       printf("Empatou!!\n");
    }
    else
    {
        printf("2° Carta venceu!!\n");
    }
    break;  
   default:
   printf("Atributo inválido!!!!\n");
    break;
   }
    //comparação de atributos
     break;
    case 2:
    printf("Você escolheu comparar 2 atributo!\n");
    break;
   case 3:
    printf("Você escolheu comparar todos atributos!\n");
    break; 
   default:
    printf("Opção invalida!!!\n");
    break;
   }
    return 0;
}