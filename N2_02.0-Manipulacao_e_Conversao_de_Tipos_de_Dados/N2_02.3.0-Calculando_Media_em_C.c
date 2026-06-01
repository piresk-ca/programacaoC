#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("*** Programa de Calculo de Media ***\n");

    printf("Digite sua primeira nota: ");
    scanf("%.2f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%.2f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%.2f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media das tres notas e: %.2f\n", media);

    return 0;
}