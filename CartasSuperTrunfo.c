#include<stdio.h>


    int main(){

        char estado[10];
        char codigo[5];
        char cidade[50];
        int populacao;
        int PIB;
        float area;

        printf("\nSeja bem vindo ao Super trunfo\n");


        printf("\nAqui iremos comecar a divercao com o cadastro de cartas\n");
        printf("\nEscolha um Estado e preencha os campos determinados\n");

        printf("\n===Carta 1===\n");

        printf("Estado:");
        scanf("%s", estado);
        

        printf("Codigo: ");
        scanf("%s", codigo);
        

        printf("Cidade: ");
        scanf("%s", cidade);
        

        printf("Populacao: ");
        scanf("%d", &populacao);
        

        printf("PIB: ");
        scanf("%d", &PIB);
        

        printf("Area: ");
        scanf("%f", &area);
        
        printf("\n===Confira o cadastro realizado===\n");
        
        printf("O Estado: %s\n", estado);
        printf("O Codigo: %s\n", codigo);
        printf("A Cidade: %s\n", cidade);
        printf("A Populacao: %d de habitantes\n", populacao);
        printf("O PIB:R$%d\n", PIB);
        printf("A Area: %.0fkm²\n", area);

        printf("\nAgora vamos cadastrar a segunda carta!\n");

                printf("\n===Carta 2===\n");

                printf("Estado:");
                scanf("%s", estado);
        

                printf("Codigo: ");
                scanf("%s", codigo);
        

                printf("Cidade: ");
                scanf("%s", cidade);
        

                printf("Populacao: ");
                scanf("%d", &populacao);
        

                printf("PIB: ");
                scanf("%d", &PIB);
        

                printf("Area: ");
                scanf("%f", &area);
        
                printf("\n===Confira o cadastro realizado===\n");
        
                printf("O Estado: %s\n", estado);
                printf("O Codigo: %s\n", codigo);
                printf("A Cidade: %s\n", cidade);
                printf("A Populacao: %d de habitantes\n", populacao);
                printf("O PIB:R$%d\n", PIB);
                printf("A Area: %.0fkm²\n", area);

                printf("\nPronto! Cadastros realizados com sucesso!\n");
     
        return 0;
    }