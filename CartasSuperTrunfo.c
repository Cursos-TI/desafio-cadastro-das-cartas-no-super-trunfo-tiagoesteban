#include <stdio.h>

 int main(){

  //desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Declarando as variáveis do primeiro estado.
 
 char estado1;
 char codigoCarta1[10];
 char nomeCidade1[50];
 int populacao1;
 float areakm1;
 float pib1;
 int pontoTuristico1;


 // Declarando as variáveis do segundo estado.


 
 char estado2;
 char codigoCarta2[50];
 char nomeCidade2[50];
 int populacao2;
 float areakm2;
 float pib2;
 int pontoTuristico2;

 // Instruções para Usuario carta 1:

  printf("Cadastre sua carta 1: \n");
  
  printf("Informe o seu estado:\n");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta:\n");
  scanf(" %s", &codigoCarta1);

  printf("Digite o nome da sua cidade:\n");
  scanf(" %s", nomeCidade1);

  printf("Qual a populacao:\n");
  scanf(" %d", &populacao1);

  printf("Qual a area:\n");
  scanf(" %f", &areakm1);

  printf("Digite o Pib da cidade:\n");
  scanf(" %f", &pib1);

  printf("Quantidade de Pontos Turisticos:\n");
  scanf(" %d", &pontoTuristico1);


// Instruções para o Usuário na carta 2 :



  printf("Cadastre sua carta 2: \n");
  
  printf("Informe o seu estado:\n");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta:\n ");
  scanf(" %s", &codigoCarta2);

  printf("Digite o nome da sua cidade:\n ");
  scanf(" %s", nomeCidade2);

  printf("Qual a populacao:\n ");
  scanf(" %d", &populacao2);

  printf("Qual a area:\n ");
  scanf(" %f", &areakm2);

  printf("Digite o Pib da cidade:\n");
  scanf(" %f", &pib2);

  printf("Quantidade de Pontos Turisticos:\n");
  scanf(" %d", &pontoTuristico2);

 // Exibindo os dados das cartas 1.
 
 printf("Carta 1\n ");
 printf("Estado:%c\n ", estado1);
 printf("Codigo da carta 1:%s\n ", codigoCarta1);
 printf("Nome da cidade:%s\n ", nomeCidade1);
 printf("Populacao:%d\n ", populacao1);
 printf("Area:%.3f\n ", areakm1);
 printf("Pib:%.2f Bilhoes de Reais\n ", pib1);
 printf("Pontos Turisticos:%d\n ", pontoTuristico1);

 // Exibindo os dados das cartas 2.
 
 printf("Carta 2\n ");
 printf("Estado:%c\n ", estado2);
 printf("Codigo da carta 1:%s\n ", codigoCarta2);
 printf("Nome da cidade:%s\n ", nomeCidade2);
 printf("Populacao:%d\n ", populacao2);
 printf("Area:%.3f\n ", areakm2);
 printf("Pib:%.2f Bilhoes de\n ", pib2);
 printf("Pontos Turisticos:%d\n ", pontoTuristico2);


 return 0;


 
 }






 


    return 0;
}
