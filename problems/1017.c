#include <stdio.h>

int main() {
    int tempo;
    float velMedia, consumo, distancia; 
    scanf("%d %f %f", &tempo, &velMedia, &consumo);    
    distancia = tempo * velMedia;
    consumo = distancia / 12;
    printf("%.3f\n", consumo);
    return 0;
}