   =====================
   ATIVIDADE 1/1 
   =====================
#include <stdio.h>
#include <stdbool.h>
int main_exemplo(void) {
    printf("A\n");
    printf("B\n");
    printf("C\n");
    
    return 0;
}

   ==================
   ATIVIDADE 1/2
   ==================
int main_ativ1(void) {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Entrada permitida\n");
    }
    printf("Fim do programa\n");
    
    return 0;
}

   ===================
   ATIVIDADE 2 
   ===================
int main_ativ2(void) {
    bool ativo = true;
    bool bloqueado = false;
    
    printf("ativo = %d\n", ativo);
    printf("bloqueado = %d\n", bloqueado);

    int x = 10;
    int y = 5;
    
    printf("x > y: %d\n", x > y);
    printf("x == 10: %d\n", x == 10);
    printf("x != 10: %d\n", x != 10);
    printf("x > 5 && y < 10: %d\n", x > 5 && y < 10);
    printf("x < 5 || y == 5: %d\n", x < 5 || y == 5);
    printf("!(x==10): %d\n", !(x == 10));
    
    return 0;
}

   ===================
   ATIVIDADE 3
   ===================
int main_ativ3(void) {
    int idade = 15;
    if (idade = 18) {
        printf("Voce tem 18 anos\n");
    }
    
    return 0;
}

   =====================
   ATIVIDADE 4
   =====================
int main(void) {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("maior de idade\n");
    }
    else {
        printf("menor deidade");
    }
    return 0;
}
