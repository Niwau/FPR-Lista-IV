#include <stdio.h>

/* ===

    Suponha que não existissem as funções strlen,
    strcpy, strcat e strcmp. Pede-se, então, a
    implementação de funções que tenham o
    mesmo objetivo daquelas.

=== */

int main(){
    char nome[30] = {"Guilherme"};
    char sobrenome[30] = {"Guilherme"};

    if(strcmp(nome, sobrenome) == -1){
        printf("Strings diferentes");
    } else {
        printf("Strings iguais");
    }

}

int strlen(char string[]){
    int i;
    for(i = 0; string[i]; i++);
    return i;
}

void strcpy(char destination[], char origin[]){
    int i;
    for(i = 0; origin[i]; i++){
        destination[i] = origin[i];
    }
}

void strcat(char string1[], char string2[]){
    int i, count;

    for(i = 0; string1[i]; i++);

    count = i;

    for(i = 0; string2[i]; i++){
        string1[count] = string2[i];
        count++;
    }
}

int strcmp(char string1[], char string2[]){
    int i;

    for(i = 0; string1[i] || string2[i]; i++ ){

        if(string1[i] != string2[i]){
            return -1;
        }
    }

    return 0;
}


