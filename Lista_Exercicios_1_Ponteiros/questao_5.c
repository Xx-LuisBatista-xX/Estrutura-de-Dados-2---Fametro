#include <stdio.h>
// Função para copiar string
void copiarString(char *origem, char *destino){
    // Copia enquanto não chegar no fim da string
    while(*origem != '\0'){
        *destino = *origem;
        origem++;
        destino++;
    }
    // Coloca o caractere final da string
    *destino = '\0';
}
int main(){
    char origem[50];
    char destino[50];
    //usuário digita a string
    printf("Digite uma palavra: ");
    scanf("%49s", origem);
    //utilizando a função de copiar
    copiarString(origem, destino);
    //mostrando a original e a copia
    printf("\nString original: %s", origem);
    printf("\nString copiada: %s", destino);
}