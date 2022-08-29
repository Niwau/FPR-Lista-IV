#include <stdio.h>

/* ===

Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.

=== */

void removerCaracter(char caracter, char palavra[]){

    int i;
    int j;

    for(i = 0; palavra[i]; i++){

        if(palavra[i] == caracter){

           for(j = i; palavra[j]; j++){
                palavra[j] = palavra[j + 1];
           }

           i--;

        }

    }

}

int main(){

    char palavra[30];
    char caracter;

    printf("Insira uma palavra: ");
    gets(palavra);
    fflush(stdin);

    printf("Insira um caracter: ");
    scanf("%c", &caracter);

    removerCaracter(caracter, palavra);

    printf("%s", palavra);
}
