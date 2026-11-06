/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
    int numero;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    printf("Numero valido digitado: %d\n", numero);

    return 0;
}