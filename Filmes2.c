#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	int opcao;
	char op;
	
	system("cls");
		printf("\t\n===================================\n\tFilmes \n ");
		printf(" \n===== Escolha a opcao desejada ======\t \n");
		printf("1 - Cadastro de Filme \n");
		printf("2 - Editar Filme\n");
		printf("3 - Busca de Filme por Titulo ou ID \n");
		printf("4 - Informacoes do Filme \n");
		printf("5 - Relatorio Geral \n");
		printf("0 - Voltar \n===================================\n\t\a\a");		
		scanf("%i",&opcao);
			
	do{
		switch(opcao){
			case 1:
				printf("Cadastre o Filme \n");
				scanf("%i", &opcao);
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
			case 0:
				printf(" Voltar \n");
				scanf("%i", &opcao);
			break;
			default:
				printf("\t\n===================\n Opcao Invalida ! \n===================\n\t\a\a");
		}
		getchar();
					
		}while(opcao !=0);
		return ();
					
	}
						
				


