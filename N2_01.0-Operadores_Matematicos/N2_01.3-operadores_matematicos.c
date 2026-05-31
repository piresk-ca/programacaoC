#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pré-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1 = numero1 + 1; 
    //numero1 += 1;
    //Pos incremento;
    //resultado = numero1 + 1;
    //numero++;
    resultado = numero1++;
    //printf("Apos incremento: %d\n", numero1);
    printf("Após pós-incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após pré-incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    //numero1 = numero1 - 1;
    //numero1 -= 1;
    //numero1--;
    //printf("Após decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Após pós-decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após pré-decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);
    


}