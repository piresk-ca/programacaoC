# include <stdio.h>
int main() {
    int a = 10;
    int b = 3;
    // Conversão explícita
    //Esse modo de conversão é mais assertivo, pois o programador tem controle total sobre quando e como a conversão ocorre.
    float quociente = (float)a / b; // 'a' e 'b' são convertidos para float explicitamente
    printf("Quociente: %.2f\n", quociente);



    return 0;

}