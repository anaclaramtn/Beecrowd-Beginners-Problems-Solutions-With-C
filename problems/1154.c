#include <stdio.h>

int main() {
    int controle = 1;
    float soma = 0;
    int contador = 0;
    float media;
    
    while (controle == 1){
        int idade;
        scanf("%d", &idade);
        if (idade > 0){
            soma += idade;
            contador += 1;
        } else {
            controle = 0;
        }
    }

    media = soma/contador;
    printf("%.2f\n", media);
    return 0;
}