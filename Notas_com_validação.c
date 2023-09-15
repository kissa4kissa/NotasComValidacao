#include <stdio.h>

int main() {
    double nota[2], media, soma;
    int i, X;

    do {
        soma = 0; 
        for (i = 0; i < 2; i++) {
        	printf("Digite a nota: ");
            scanf("%lf", &nota[i]);
            if (nota[i] < 0.0 || nota[i] > 10.0) {
                printf("nota invalida\n");
                i--;
            } else {
                soma += nota[i];
            }
        }
        media = soma / 2;
        printf("media = %.2lf\n", media);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &X);
        } while (X != 1 && X != 2);
    } while (X != 2);

    return 0;
}

