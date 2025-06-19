#include <stdio.h>

int main() {
    const double pi = 3.14159;
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double circulo = C * C * pi;
    double triangulo = (A * C)/2.0;
    double trapezio = ((A + B)*C)/2.0;
    double quadrado = B * B;
    double retangulo = A * B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    return 0;
}