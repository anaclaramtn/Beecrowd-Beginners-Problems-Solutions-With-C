include<stdio.h>

int main () {
    double pi, radius;
    scanf ("%lf, %lf", &pi, &radius);
    pi = 3.14159;
    double area = pi * radius * radius;

    printf("A=%lf.4f", area);
    return 0;
}