#include <stdio.h>
#include <stdlib.h>

void main(){
int opcao;
//comando para limpar o prompt
system("clear");
	printf("===================== Locadora =====================\n");
	printf("Bem Vindo! Escolha a opcao desejada!\n");
	printf("1 - Menu Filmes\n");
	printf("2 - Menu Clientes\n");
	printf("3 - Menu Alugueis\n");
	printf("0 - Exit\n");
	scanf("%i",&opcao);

//as opcoes estao sendo selecionadas corretamente porem quando
//digita um valor tipo texto o programa entra em loop

do{	
	switch(opcao){
		case 1:
			printf("caso 1\n");
scanf("%i",&opcao);
		break;
		case 2:
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
		printf("Opcao invalida, tente novamente!\n");
		//opcao = 0;		
		scanf("%i",&opcao);
    //o programa executa a linha de baixo porem aparentemente ignora o scanf da linha anterior quando é inserido texto
		printf("\n\n\n\naqui passa?\n\n\n\n");
		break;
		
	}

}while(opcao != 0);
}
