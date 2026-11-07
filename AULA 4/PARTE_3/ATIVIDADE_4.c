/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
   int n;
   long long fatorial = 1;
   
   printf("Digite um numero para calcular o fatorial: ");
   scanf("%d", &n);
   
   for (int i = 1; i <= n; i++) {
       fatorial *= i;
   }
   
   printf("Fatorial de %d = %lld\n", n, fatorial);
   
   return 0;
}