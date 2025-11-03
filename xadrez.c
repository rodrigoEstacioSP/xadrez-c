#include <stdio.h>

int retornaCasas() {
    int casas;

    printf("Quantas casas deseja movimentar?\n");
    scanf("%d", &casas);

    return casas;
}

void cavalo(int casas) {
    int i, j;
    for (i = 1; i < casas; i++) {
        printf("Baixo: %d\n",i);
        for (j = 0; j < i - 1; j++) {
            printf("Esquerda\n");
        }
    }
}

void bispo(int casas) {
    if (casas >= 1) {
        printf("Baixo Esquerda\n");
        bispo(casas - 1);
    }
}

void torre(int casas) {
    if (casas >= 1) {
        printf("Cima\n");
        torre(casas - 1);
    }
}

void rainha(int casas) {
    if (casas >= 1) {
        printf("Baixo\n");
        rainha(casas - 1);
    }
}

int main() {
    int casas, peca, l = 1;

    do {
        printf("Escolha a peca que deseja selecionar:\n");
        printf("1 - Bispo\n");
        printf("2 - Cavalo\n");
        printf("3 - Rainha\n");
        printf("4 - Torre\n");
        printf("5 - Sair\n");

        scanf("%d", &peca);

        switch (peca) {
            case 1:
                casas = retornaCasas();
                bispo(casas);
                break;
            case 2:
                casas = 3;
                cavalo(casas);
                break;
            case 3:
                casas = retornaCasas();
                rainha(casas);
                break;
            case 4:
                casas = retornaCasas();
                torre(casas);
                break;
            case 5:
                l = 0;
                printf("Saiu do jogo\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (l == 1);
}