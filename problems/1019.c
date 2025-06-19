#include <stdio.h> 

int main() {
    int total_segundos_entrada; 
    scanf("%d", &total_segundos_entrada); 

    int horas = total_segundos_entrada / 3600;
    int minutos = (total_segundos_entrada % 3600) / 60;
    int segundos = total_segundos_entrada % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0; 
}