#include <stdio.h>

   =============================
   ATIVIDADES 1
   =============================
int main(void) {
    int opcao;

    printf("1 - Cadastrar\n");
    printf("2 - Consultar\n");
    printf("3 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Cadastrar\n");
            break;
        case 2:
            printf("Consultar\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}
