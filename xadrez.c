#include <stdio.h>

int main() {
    int i, j, casas;

    printf("Quantas casas deseja movimentar?\n");
    scanf("%d", &casas);

    for (i = 1; i < casas; i++) {
        printf("Baixo: %d\n",i);
        for (j = 0; j < i - 1; j++) {
            printf("Esquerda\n");
        }
    }
}