#include <stdio.h>

int main() {
    float n;
    int counter = 0;

    for (int i = 0; i < 6; i+= 1){
        scanf("%f", &n);
        if (n > 0){
            counter += 1;
        }
    }
    printf("%d valores positivos\n", counter);

    return 0;
}