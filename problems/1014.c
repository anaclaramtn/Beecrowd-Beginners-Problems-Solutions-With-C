#include <stdio.h>

int main() {
    double km; 
    double combustivel;
    
    scanf("%lf %lf", &km, &combustivel); 

    double consumo = km / combustivel;

    printf("%.3lf km/l\n", consumo);

    return 0; 
}