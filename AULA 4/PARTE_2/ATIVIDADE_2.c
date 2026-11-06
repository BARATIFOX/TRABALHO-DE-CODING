/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
	float nota;
	do {
		printf("Digite uma nota (entre 0 e 10): ");
		scanf("%f", &nota);

		if (nota < 0 || nota  > 10) {
			printf("nota invalida! Tente novamente.\n");
		}
	} while (nota < 0 || nota > 10);
	printf("Nota valida informada: %.2f\n", nota);

	return 0;
}