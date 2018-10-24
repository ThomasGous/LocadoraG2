#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <conio.h>

void Cadastrar(){

struct Filmes
{
	char filme[50];
	int codigo;
	float valor;
};

	Filmes filme;
	printf("\n *******Cadastro de Filmes*******\n ");
	printf("Digite o nome filme: \n");
	scanf("%s", &filme.filme);
	printf("%s",filme.filme);
}
