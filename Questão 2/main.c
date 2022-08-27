#include <stdio.h>
#include <locale.h>

/* ===

Questão 02:
Dada uma string s, desenvolver uma função
que determine se s é ou não um palíndromo.
Observação: uma string s será um palíndromo
quando seus caracteres formarem a mesma
sequência, independente se s é percorrida da
esquerda para direita ou vice-versa.

=== */

int palindromo(char palavra[]){

    int i;
    int quant_letras = 0;
    int comparacoes;

    for(i = 0; palavra[i]; i++ ){
        quant_letras++;
    }

    comparacoes = quant_letras / 2;

    for(i = 0; i <= comparacoes; i++){

        if(palavra[i] == ' '){
            i++;

        } else if(palavra[quant_letras - 1] == ' '){
            quant_letras--;

        } else if(palavra[i] != palavra[quant_letras - 1]){
            return 0;
        }

        quant_letras--;
    }


    return 1;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    char palavra[30];

    printf("Digite uma palavra: ");
    gets(palavra);

    palindromo(palavra) == 0 ? printf("\nA palavra não é um palíndromo!\n") : printf("\nA palavra é um palíndromo!\n");

}
