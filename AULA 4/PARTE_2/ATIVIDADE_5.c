/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
    int opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Mostrar mensagem\n");
        printf("2 - Mostrar seu nome\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Mensagem: Seja bem-vindo ao sistema!\n");
                break;
            case 2:
                printf("Nome: Assistente Virtual\n");
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }

    } while (opcao != 0);

    return 0;
}