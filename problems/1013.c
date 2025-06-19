#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    
    int maior = a; 

    if (b > maior) { 
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    printf("%i eh o maior\n", maior);
    return 0;
}