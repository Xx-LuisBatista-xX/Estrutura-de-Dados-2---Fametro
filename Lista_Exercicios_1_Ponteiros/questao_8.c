#include <stdio.h>
//função da calculadora
void operacoes(float a, float b, float *soma, float *sub, float *mult, float *div){
    *soma = a + b;
    *sub  = a - b;
    *mult = a * b;
    // cuidado com divisão por zero
    if(b != 0){
        *div = a / b;
    } else {
        *div = 0; // ou outro valor que você queira usar
    }
}
int main(){
    float x, y;
    float soma, sub, mult, div;
    //pedindo do usuário
    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);
    //usando a função da calculadora
    operacoes(x, y, &soma, &sub, &mult, &div);
    //mostrando os resultados
    printf("\nSoma: %.2f", soma);
    printf("\nSubtracao: %.2f", sub);
    printf("\nMultiplicacao: %.2f", mult);
    printf("\nDivisao: %.2f", div);
}