     Atividade 1

#include <stdio.h>
int main(void) {
    int a = 10;
    int b = 3;
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    Atividade 2 
    (Com leitura de dados via scanf)
    int numero1, numero2;
    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    printf("Adicao = %d\n", numero1 + numero2);
    printf("Subtracao = %d\n", numero1 - numero2);
    printf("Multiplicacao = %d\n", numero1 * numero2);
    printf("Divisao inteira = %d\n", numero1 / numero2);
    printf("Resto da divisao = %d\n", numero1 % numero2);

    return 0;
}
