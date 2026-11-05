#include <stdio.h>

   ===================================
   ATIVIDADE 1
   ====================================
int main(void) {
    int opcao = 1;
    int idade = 20;

    R= Uso de '==' para comparação em vez de '='
    if (opcao == 1) {
        printf("Opcao 1 correta\n");
    }

    R= Ausência de ponto e vírgula indevido após o if
    if (idade >= 18) {
        printf("Maior de idade\n");
    }

    R= Uso correto de operadores lógicos para intervalos
    if (idade >= 18 && idade <= 65) {
        printf("Faixa etaria permitida\n");
    }

    if (idade < 18 || idade > 65) {
        printf("Fora da faixa permitida\n");
    }

    return 0;
}
