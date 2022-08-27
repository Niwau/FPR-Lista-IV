#include <stdio.h>
#include <locale.h>

/* ===

Desenvolver uma função que, dada uma string
s, crie uma substring que inicie na posição p de
s e contenha n caracteres.
Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s.

=== */

void recortar(char palavra[], int posInicial, int quantLetras){

    int i;
    char substring[quantLetras + 1];

    for(i = 0; i < quantLetras; i++){
        substring[i] = palavra[posInicial];
        posInicial++;
    }

    substring[quantLetras] = '\0';

    printf("%s", substring );
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int posInicial, quantLetras;
    char palavra[30];

    printf("Insira um palavra: ");
    gets(palavra);
    fflush(stdin);

    printf("\nPosição inicial e quantidade de letras: ");
    scanf("%d %d", &posInicial, &quantLetras);

    recortar(palavra, posInicial, quantLetras);
}
