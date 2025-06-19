#include <stdio.h>

int main() {
    int casosTeste;
    scanf("%d", &casosTeste);

    for (int i = 0; i < casosTeste; i+= 1){
        int pa, pb;
        double g1, g2;
        scanf("%d %d %lf %lf", &pa, &pb, &g1,&g2);

        int anos = 0;
        while (anos <= 100 && pa <= pb){
            double crescimentoA = pa * (g1 / 100.0);
            double crescimentoB = pb * (g2 / 100.0);

            pa = (int)crescimentoA + pa;
            pb = (int)crescimentoB + pb;
            
            anos ++;
        }
        if (anos > 100){
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", anos);
        }
    }
    
    return 0;
}