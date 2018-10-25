#include <stdio.h>

void main(){

struct alugueis{
    int idCliente;
    int idFilme; 
};

struct alugueis aluguel[100];

aluguel[0].idCliente = 2;
aluguel[0].idFilme = 3;

aluguel[1].idCliente = 100;
aluguel[1].idFilme = 888;


printf("\nAluguel 2\n");
printf("Cliente: %d  / Filme: %d\n", aluguel[1].idCliente, aluguel[1].idFilme);


printf("\nAluguel 1\n");
printf("Cliente: %d / Filme: %d\n", aluguel[0].idCliente,aluguel[0].idFilme);


}
