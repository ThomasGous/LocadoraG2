#include <stdio.h>
#include <stdlib.h>
#include "filmes.h"

void main(){
char c;
int opcao;

//comando para limpar o prompt
system("clear");
	printf("===================== Locadora =====================\n");
	printf("Bem Vindo! Escolha a opcao desejada!\n");
	printf("1 - Menu Filmes\n");
	printf("2 - Menu Clientes\n");
	printf("3 - Menu Alugueis\n");
	printf("0 - Exit\n");
	//scanf("%i",&opcao);
        c = getchar();
        opcao=atoi(&c);

do{	
	switch(opcao){
		case 1:
			listarFilmes();
			printf("===================== Locadora =====================\n");
			printf("Bem Vindo! Escolha a opcao desejada!\n");
			printf("1 - Menu Filmes\n");
			printf("2 - Menu Clientes\n");
			printf("3 - Menu Alugueis\n");
			printf("0 - Exit\n");
			scanf("%i",&opcao);
			
		break;
		case 2:
			//chamar aqui a tela de Clientes
			printf("caso 2\n");
		scanf("%i",&opcao);
		break;
		case 3:
			printf("caso 3\n");
		scanf("%i",&opcao);
		break;
		case 0:
			printf("Tchau tchau, Volte sempre!\n");
		break;

		default:
		system("clear");
		printf("\nOpcao invalida, tente novamente!\n\n");
		opcao = 1;
			printf("===================== Locadora =====================\n");
			printf("Bem Vindo! Escolha a opcao desejada!\n");
			printf("1 - Menu Filmes\n");
			printf("2 - Menu Clientes\n");
			printf("3 - Menu Alugueis\n");
			printf("0 - Exit\n");
			c = getchar();
        		opcao=atoi(&c);		
		break;
		
	}

}while(opcao != 0);
}
