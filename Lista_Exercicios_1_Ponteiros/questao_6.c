#include <stdio.h>
//função de contar as vogais e consoantes
void contarVogaisConsoantes(char *str, int *vogais, int *consoantes){
    *vogais = 0;
    *consoantes = 0;
    //laço até o final da string
    while(*str != '\0'){
        char c = *str;
        // vogais maiúsculas e minúsculas
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            (*vogais)++;
        }
        // consoantes (somente letras)
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            (*consoantes)++;
        }
        str++;
    }
}
int main(){
    char str[100];
    int vogais, consoantes;
    //usuário digita a frase
    printf("Digite uma frase: ");
    scanf("%99[^\n]", str);
    //usando a função 
    contarVogaisConsoantes(str, &vogais, &consoantes);
    //mostrando a quantidade de vogais e consoantes
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
}