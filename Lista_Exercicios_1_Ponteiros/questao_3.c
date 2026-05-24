#include<stdio.h>
int main(){
    //variaveis de acordo com o exercicio
    int a = 2;
    int *b = &a;
    //mostrando o valor de a, o endereço de a, o endereço de b e o valor para qual o b aponta
    printf("Valor da variavel: %d", a);
    //aqui foi utilizado o cast para se adaptar a linguagem e ser portátil, evitando warnings (void*)
    printf("\nValor endereco da variavel: %p", (void*)&a);
    printf("\nValor do ponteiro: %p", (void*)b);
    printf("\nValor apontado pelo ponteiro: %d", *b);
}