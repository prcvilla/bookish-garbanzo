#include <stdio.h>

#define TAM 5

int main()
{
    float corrente[TAM];
    float soma = 0, media;
    float maior = 0;

    for (int i=0; i<TAM; i++) {
        printf("entre com o valor de corrente:");
        scanf("%f", &corrente[i]);
        soma = soma + corrente[i];
    }

    media = soma / TAM;

    printf("media das correntes: %f\n", media);

    for (int i=0; i<TAM; i++) {
        printf("corrente[%d]=%f", i, corrente[i]);

        if (corrente[i] > media) {
            printf(" acima da media", i, corrente[i]);
        }

        printf("\n");


        if (corrente[i] > maior) {
            maior = corrente[i];
        }
    }

    printf("maior corrente encontrada: %f\n", maior);

    return 0;
}
