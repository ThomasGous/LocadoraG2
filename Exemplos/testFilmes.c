#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filmes.h"

void listarFilmes(){
	char Str[100], result, *text;
	FILE *arq;
	int i;

	int op;
	system("clear");
	printf(" menu filmes\n");
	printf("1 - escrever no arquivo\n");
	printf("2 - ler o arquivo\n");
	scanf("%d",&op);
	while(op != 0){
		switch(op){
			case 1:
printf("escreve no arquivo texto\n");
			arq = fopen("LogsExecucao.txt", "at");
			if (arq == NULL){
   				printf("Problemas na CRIACAO do arquivo\n");
  				return;
			}

			strcpy(Str,"Log 1 -- Teste Jonas Flores \n");
			result = fputs(Str, arq);
			if (result == EOF)
   				printf("Erro na Gravacao\n");

			fclose(arq);
			
printf("\n Selecione a opcao desejada\n");
			scanf("%d",&op);
			break;
			case 2:

			printf("Ler arquivo texto\n");

			arq = fopen("LogsExecucao.txt", "r");

			if (arq == NULL){
   		 		printf("Problemas na CRIACAO do arquivo\n");
    				return;
			}
			i = 1;
			while ((fgets(Str, sizeof(Str), arq))!=NULL){
				text = fgets(Str, 100, arq);		
				if (text)
	  			printf("Linha %d : %s",i,Str);
      				i++;
  			}
			fclose(arq);
 			printf("\n Selecione a opcao desejada\n");
			scanf("%d",&op);
			break;
			default:
			printf("opcao invalida, tente novamente");
			scanf("%d",&op);
			break;

		}	

	}
system("clear");
return;

}
