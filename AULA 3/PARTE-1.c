   ==================
   ATIVIDADE 1 
   ==================

#include <stdio.h>
int main_ativ1(void) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Maior de idade\n");
        printf("Entrada permitida\n");
    }

    return 0;
}

   ==================
   ATIVIDADE 3
   ==================
int main_ativ3(void) {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    float media;
    printf("Digite a media: ");
    scanf("%f", &media);

    if (media >= 7.0f) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}

   =================
   ATIVIDADE 5
   =================
int main(void) {
    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 5.0f) {
        printf("Nota razoavel\n");
    } else if (nota >= 7.0f) {
        printf("Nota boa\n");
    }

    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d e maior\n", a);
    } else if (b > a) {
        printf("%d e maior\n", b);
    } else {
        printf("Os numeros sao iguais\n");
    }

    return 0;
}
