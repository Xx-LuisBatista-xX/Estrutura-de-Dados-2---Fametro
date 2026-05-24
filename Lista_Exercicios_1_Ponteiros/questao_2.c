#include<stdio.h>
//função para encontrar maior e menor elemento no array
void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor){
    //definindo que maior e menor são o primeiro elemento do array
    *maior = array[0];
    *menor = array[0];
    //fazendo as comparações se é maior ou menor e trocando o valor da váriavel se necessário
    for(int i = 1; i < tamanho; i++){
        if(array[i] > *maior){
            *maior = array[i];
        }
        if(array[i] < *menor){
            *menor = array[i];
        }
    }
}
int main(){
    int array[5], maior, menor;
    //Array digitado pelo usuário
    for(int i = 0; i < 5; i++){
        printf("Array[%d]: ", i+1);
        scanf("%d", &array[i]);
    }
    //utilizando a função e em seguida mostrando o maior e menor valor do array
    encontrarMaiorMenor(array, 5, &maior, &menor);
    printf("Maior: %d \nMenor: %d", maior, menor);
}