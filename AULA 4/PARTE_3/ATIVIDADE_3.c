/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
   int numero;
   
   printf("numero: ");
   scanf("%d", &numero);
   
   for (int i = 1; i <= 10; i++) {
       printf("%d x %d = %d\n", numero, i, numero * i);
   }
   
   return 0;
}