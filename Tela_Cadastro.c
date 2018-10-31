#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Pessoa.h"

void MenuCadastro(){
	int opcao;
	char op;

	system("clear");
	printf("==============Cadastro Pessoa==============\n");
	printf("Escolha a opcao desejada\n");
	printf("1- Cadastro ");
	printf("2 - Editar Cadastro ");
	printf("3 - Busca de Cadastro ");
	printf("4 - Excluir Cadastro ");
	printf("0 - Voltar ");
	scanf("%i", &opcao);

do{
	switch(opcao){
	case 1:
		Cadastrar();
		printf("===================== Filmes =====================\n");
		printf("===== Escolha a Opcao desejada ======\n");
		printf("1- Cadastro ");
		printf("2- Editar Cadastro ");
		printf("3- Busca de Cadastro ");
		printf("4- Excluir Cadastro ");
		printf("5- Relatorio Geral ");
		printf("0- Voltar \n===================================\n");
		scanf("%i", &opcao);
	break;
	case 2:
		printf("Editar Cadastro ");
		scanf("%i",&opcao);
	break;
	case 3:
		printf("Busca de Cadastro);
		scanf("%i",&opcao);
	break;
	case 4:
		printf("Excluir Cadastro ");
		scanf("%i",&opcao);
	break;
	case 5:
		printf("Relatorio Geral ");
		scanf("%i",&opcao);
	default:

		printf("\n===================! Opcao Invalida !===================\n");
	}
}while (opcao !=0);
system("clear");
return;
}
	


	





	

 
