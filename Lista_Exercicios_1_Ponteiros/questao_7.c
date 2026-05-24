#include <stdio.h>
void inverterString(char *str){
    char *inicio = str;
    char *fim = str;
    char aux;
    // levar o ponteiro fim até o último caractere
    while(*fim != '\0'){
        fim++;
    }
    fim--; // volta uma posição (último caractere válido)
    // troca os caracteres
    while(inicio < fim){
        aux = *inicio;
        *inicio = *fim;
        *fim = aux;
        inicio++;
        fim--;
    }
}
int main(){
    char str[100];
    printf("Digite uma string: ");
    scanf("%99[^\n]", str);
    inverterString(str);
    printf("String invertida: %s\n", str);
}