#include<stdio.h>
//função para inverter os valores usando uma variavel auxiliar
void trocarValor(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
int main(){
    int a, b;
    //lendo valores digitados pelo usuário
    printf("Digite dois valores: \n");
    scanf("%d %d", &a, &b);
    //mostrando valores na ordem digitada pelo usuário
    printf("Valores Digitados: %d e %d", a, b);
    //usando a função para inverter os valores
    trocarValor(&a, &b);
    //mostrando os valores invertidos
    printf("\nValores Trocados: %d e %d", a, b);
}