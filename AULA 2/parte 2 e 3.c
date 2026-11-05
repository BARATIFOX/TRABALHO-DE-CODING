     --- Atividade 1 ---
       
#include <stdio.h>
int main(void) {
    int a = 10;
    int b = 3;
    float resultado = (float) a / b;
    printf("%f\n", resultado);

       --- Atividade 2 ---
    int num1 = (2 + 3) * 4;
    int num2 = 2 + 3 * 4;
    printf("(2 + 3) * 4 = %d | 2 + 3 * 4 = %d\n", num1, num2);

       --- Atividade 3 ---
    int contador = 0;
    contador++;
    contador++;
    contador++;
    printf("contador: %d\n", contador);

       --- Atividade 4 ---
    double valor = 8.75;
    int numero = valor;
    printf("valor: %.2f | int: %d\n", valor, numero);

    return 0;
}
