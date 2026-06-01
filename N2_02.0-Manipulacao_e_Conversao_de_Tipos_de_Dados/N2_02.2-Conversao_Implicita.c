#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    // Conversão implícita
    float resultado = a + b; // 'a' é convertido para float automaticamente
    printf("Resultado da soma: %.2f\n", resultado);

    /*Esse tipo de conversão implicita é feita automáticamente, mas pode 
    gerar problemas de precisão no programa, por isso é perigoso deixar
    que a conversão seja feita automaticamente de forma implicita, exceto
    em casos específicos onde a precisão não é crítica e a quantidade de
    dados é pequena 
    */


    return 0;

}