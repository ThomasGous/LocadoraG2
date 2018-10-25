#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Filmes.h"

void MenuFilmes(){
	int opcao;
	char op;
	
	system("clear");
		printf("===================== Filmes =====================\n");
		printf("Escolha a opcao desejada\n");
		printf("1 - Cadastro de Filme \n");
		printf("2 - Editar Filme\n");
		printf("3 - Busca de Filme por Titulo ou ID \n");
		printf("4 - Informacoes do Filme \n");
		printf("5 - Relatorio Geral \n");
		printf("0 - Voltar\n");		
		scanf("%i",&opcao);
			
	do{
		switch(opcao){
			case 1:
				CadastrarFilme();
				printf("===================== Filmes =====================\n");
				printf("===== Escolha a opcao desejada ======\n");
				printf("1 - Cadastro de Filme \n");
				printf("2 - Editar Filme\n");
				printf("3 - Busca de Filme por Titulo ou ID \n");
				printf("4 - Informacoes do Filme \n");
				printf("5 - Relatorio Geral \n");
				printf("0 - Voltar \n===================================\n");		
				scanf("%i",&opcao);
			break;
			case 2:
				printf("Editar Filme \n");
				scanf("%i", &opcao);
			break;
			case 3:
				printf("Busca de Filme \n");
				scanf("%i", &opcao);
			break;
			case 4:
				printf("Informacoes do filme \n");
				scanf("%i", &opcao);
			break;
			case 5:
				printf("Relatorio Geral \n");
				scanf("%i", &opcao);
			default:
				printf("\n===================! Opcao Invalida !===================\n");
		}					
	}while(opcao !=0);
system("clear");
return;
			
}
						
				


