#include <stdio.h>

int main (){
    int proximoNum;
    int contador;
    int somaFinal = 0;

    while (1){
        int inicio;
        scanf ("%d", &inicio);

        if (inicio == 0){
            break;
        }

        if (inicio % 2 == 0){
            somaFinal = 0;
            proximoNum = inicio;
            contador = 1;
            somaFinal += proximoNum;
            while (contador < 5){
                proximoNum += 2;
                somaFinal += proximoNum;
                contador+= 1;
            }
            printf("%d\n", somaFinal);
        } else {
            somaFinal = 0;
            proximoNum = inicio + 1;
            contador = 1;
            somaFinal += proximoNum;
            while (contador < 5){
                proximoNum += 2;
                somaFinal += proximoNum;
                contador += 1;
            }
            printf("%d\n", somaFinal);
        }
    }

    return 0;
}