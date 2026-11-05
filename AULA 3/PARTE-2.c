   ====================
   ATIVIDADE 1
   ====================
#include <stdio.h>
#include <stdbool.h>
int main(void) {
    // Atividade 1
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 65) {
        printf("Faixa etaria permitida\n");
    }
      
     ==================
     ATIVIDADE 2
     ==================
    int dia = 7;
    bool bloqueado = false;

    if (dia == 6 || dia == 7) {
        printf("Fim de semana\n");
    }
    if (!bloqueado) {
        printf("Acesso permitido\n");
    }
      
     ===============
     Atividade 3
     ===============
    float media = 8.0f;
    float frequencia = 80.0f;
    bool estudante = true;
    int idade_est = 20;
    bool bloq_est = false;

    if (media >= 7.0f && frequencia >= 75.0f) {
        printf("Aprovado\n");
    }
    if (estudante || idade_est >= 60) {
        printf("Desconto aplicado\n");
    }
    if (idade_est >= 18 && !bloq_est) {
        printf("Entrada permitida\n");
    }
      
     =============================
     Atividade 5 - Desafios A e B
     =============================
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("A e o maior: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("B e o maior: %d\n", b);
    } else {
        printf("C e o maior: %d\n", c);
    }

    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("Ano bissexto\n");
    } else {
        printf("Nao e bissexto\n");
    }

    return 0;
}
