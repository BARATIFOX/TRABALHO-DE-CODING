/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite uma nota entre 0 e 10: ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {
        printf("Nota invalida. Digite novamente: ");
        scanf("%f", &nota);
    }

    printf("Nota aceita: %.2f\n", nota);

    return 0;
}