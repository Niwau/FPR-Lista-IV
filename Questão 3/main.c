#include <stdio.h>
#include <locale.h>

/* ===

Desenvolver uma fun��o que, dada uma string
s, crie uma substring que inicie na posi��o p de
s e contenha n caracteres.
Observa��es: se p e/ou n forem inv�lidos, a
substring ser� vazia; ii) se s n�o possuir n
caracteres al�m de p, a substring a ser criada
come�ar� em p e terminar� no final de s.

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

    printf("\nPosi��o inicial e quantidade de letras: ");
    scanf("%d %d", &posInicial, &quantLetras);

    recortar(palavra, posInicial, quantLetras);
}
