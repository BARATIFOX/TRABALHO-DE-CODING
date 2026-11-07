/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    printf ("--- Exemplo com FOR ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    
    printf("\n--- Exemplo com WHILE ---\n");
    int j = 1;
    while (j <= 5) {
        printf("%d\n", j);
        j++;
    }
    
    return 0;
}