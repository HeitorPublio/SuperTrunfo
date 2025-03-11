#include <stdio.h>

int main() {
    int habitantes1, habitantes2;
    int paisagens1, paisagens2;

    printf("\nJogo SuperTrunfo\n");
    printf("\nCidade 1\n");
    printf("Digite os habitantes da Cidade 1:");
    scanf("%d", &habitantes1);
    printf("Digite o numero de paisagens da Cidade 1:");
    scanf("%d", &paisagens1);


    printf("\nCidade 2\n");
    printf("Digite os habitantes da Cidade 2:");
    scanf("%d", &habitantes2);
    printf("Digite o numero de paisagens da Cidade 2:");
    scanf("%d", &paisagens2);

    printf("\nResultado:\n");

    printf("\nCidade 1\n");
    printf("Habitantes: %d\n", habitantes1);
    printf("Paisagens: %d\n", paisagens1);

    printf("\nCidade 2\n");
    printf("Habitantes: %d\n", habitantes2);
    printf("Paisagens: %d\n", paisagens2);

    return 0;
}