/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    printf ("Sequencia impar de 1 ate 19:\n");
    
    for (int i = 1; i <= 19; i += 2) {
        printf("%d\n", i);
    }
    
    return 0;
}