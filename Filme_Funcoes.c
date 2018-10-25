#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Filmes{
	char filme[50];
	int codigo;
	float valor;
};

void CadastrarFilme(){

	struct Filmes filme;
	FILE *arquivo;
	char String_temp[100], result;
	setbuf(stdin,NULL);
	system("clear");
	printf("===================== Cadastro de Filmes =====================\n");
	printf("Digite o nome filme:\n");
	fgets( filme.filme, 50, stdin );
	printf("Digite o codigo do filme:\n");
	scanf("%i", &filme.codigo);
	printf("Digite o Valor:\n");
	scanf("%f", &filme.valor);
	system("clear");
	
	arquivo = fopen("BANCO_FILMES.txt", "at");
	if (arquivo == NULL){
   		printf("Problemas na CRIACAO do arquivo\n");
  		return;
	}
	strcpy(String_temp,"==================================\n");
	result = fputs(String_temp, arquivo);
	if (result == EOF)
   		printf("Erro na Gravacao do separador\n");

	strcpy(String_temp,filme.filme);
	result = fputs(String_temp, arquivo);
	if (result == EOF)
   		printf("Erro na Gravacao do nome do filme\n");

	sprintf(String_temp,"%i\n",filme.codigo);
	result = fputs(String_temp, arquivo);
	if (result == EOF)
   		printf("Erro na Gravacao do codigo do filme\n");

	sprintf(String_temp,"%f\n\n",filme.valor);
	result = fputs(String_temp, arquivo);
	if (result == EOF)
   		printf("Erro na Gravacao do valor do filme\n");

	fclose(arquivo);
	return;	
}
void ListarFilmes(){

}

int AtualizarFilme(int codigo){
//retornar 1 para com sucesso e 0 para erro
}

int ExcluirFilme(int codigo){
//retornar 1 para com sucesso e 0 para erro
}
