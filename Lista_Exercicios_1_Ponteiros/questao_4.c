#include<stdio.h>
//função para dobrar o valor
void dobrar(int *a){
    *a *= *a;
}
int main(){
    int a;
    //pedindo do usuário o valor
    printf("Digite um inteiro: ");
    scanf("%d", &a);
    //mostrando o valor digitado pelo usuario
    printf("Valor incial: %d", a);
    //utilizando a função para dobrar o valor
    dobrar(&a);
    //mostrando o valor dobrado
    printf("\nValor dobrado: %d", a);
}