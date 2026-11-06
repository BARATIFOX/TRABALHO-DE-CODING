   --- Atividade 1 ---

#include <stdio.h>
int main(void) {
    float preco = 19.5f;
    printf("%f\n", preco);
    printf("%.2f\n", preco);

       --- Atividade 2 ---
    double pi = 3.1415926535;
    printf("%f\n", pi);
    printf("%.4f\n", pi);
    printf("%.6f\n", pi);
    printf("%.8f\n", pi);

       --- Atividade 3 ---
    printf("Linha1\nLinha2\nLinha3\n");
    printf("Nome:\\Joao\n");
    printf("Mensagem:\"Ola!\"\n");
    printf("Caminho:C:\\temp\n");

        --- Recibo ---
    printf("|=================|\n");
    printf("|      RECIBO     |\n");
    printf("|=================|\n");
    printf("|Produto: Caderno |\n");
    printf("|Preco:\t\tR$%.2f |\n", preco);
    printf("|Mensagem:\"Obrigado\"\n");
    printf("|=================|\n");

    return 0;
}
