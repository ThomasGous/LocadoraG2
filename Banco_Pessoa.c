#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Cadastro{
	char pessoa[70]
	int cpf;
};

void CadastroPessoa(){
	struct Cadastro pessoa;
	File *cadastro;
	char String_temp{100}, result;
	setbuf(stdin, NULL);
	system("clear");
	printf("===================== Cadastro de Filmes =====================\n");
	printf("Digite o nome: \n");
	fgets( pessoa.pessoa, 70, stdin);
	printf("Digite o Cpf: \n");
	scanf("%i, &pessoa.cpf);
	system("clear");
	
	cadastro = fopen("CADASTRO_PESSOA.txt", "at");
	if(arquivo == NULL);
		printf("Problemas na CRIACAO do arquivo\n");
		return;
	}
	strcpy(String_temp, "==================================\n");
	result = fputs(String_temp, cadastro);
	if(result = EOF);
		printf("Problema na Criacao\n");
	strcpy(String_temp,"%i\n",pessoa.pessoa);
	result = fputs(String_temp, cadastro);
	if(result = EOF);
		printf("Problema na Criacao do Cadastro \n");
	strcpy(String_temp,"%i\n",pessoa.cpf);
	result = fputs(String_temp, cadastro);
	if(result = EOF);
		printf("Problema com o CPF inserido \n");
	fclose(cadastro);
	return;
}

void ListarPessoa(int pessoa){

}

int AtualizarCadastro(int pessoa){

}

int ExcluirCadastro(int pessoa){

}


