#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Divisão inteira

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);

    printf("\n");
    
    /*Com as variáveis do tipo float ou double, a divisão é mais 
    precisa, pois permite números decimais.*/
    float x = 5.5;
    float y = 2.2;
    float soma_f = x + y;
    float diferenca_f = x - y;
    float produto_f = x * y;
    float quociente_f = x / y; // Divisão com ponto flutuante

    printf("Soma: %.2f\n", soma_f);
    printf("Diferença: %.2f\n", diferenca_f);
    printf("Produto: %.2f\n", produto_f);
    printf("Quociente: %.2f\n", quociente_f);



}