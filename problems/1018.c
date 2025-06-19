#include <stdio.h>

int main() {
    int n;
    int cem, cinquenta, vinte, dez, cinco, dois, um;
    int resto1, resto2, resto3, resto4, resto5;
    scanf("%d", &n);
    cem = n / 100; resto1 = n % 100;
    cinquenta = resto1 / 50; resto2 = resto1 % 50;
    vinte = resto2 / 20; resto3 = resto2 % 20;
    dez = resto3 / 10; resto4 = resto3 % 10;
    cinco = resto4 / 5; resto5 = resto4 % 5;
    dois = resto5 / 2;
    um = resto5 % 2;
    
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, cem, cinquenta, vinte, dez, cinco, dois, um);
    return 0;
}