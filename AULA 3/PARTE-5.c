   ============================
   DESAFIO / MINI LABORATÓRIO 
   =============================
     
#include <stdio.h>
int main(void) {
    int idade_sistema;
    int senha_digitada;
    int bloqueado;

    printf("Digite a idade: ");
    scanf("%d", &idade_sistema);

    printf("Senha numerica: ");
    scanf("%d", &senha_digitada);

    printf("Bloqueado? (1=sim, 0=nao): ");
    scanf("%d", &bloqueado);

    if (bloqueado == 1) {
        printf("Acesso negado: - Usuario bloqueado no sistema\n");
    } else if (idade_sistema < 18) {
        printf("Acesso negado: - Idade insuficiente\n");
    } else if (senha_digitada != 1234) {
        printf("Acesso negado: - Senha incorreta\n");
    } else {
        printf("Acesso permitido\n");
    }

    int horas;
    int tipo_cliente;
    float valor_base = 0.0f, desconto = 0.0f, valor_final = 0.0f;

    printf("\nDigite a quantidade de horas estacionadas: ");
    scanf("%d", &horas);
    printf("Digite o tipo de cliente (1 = Comum, 2 = VIP): ");
    scanf("%d", &tipo_cliente);

    if (horas == 1) {
        valor_base = 5.0f;
    } else if (horas >= 2 && horas <= 3) {
        valor_base = 10.0f;
    } else {
        valor_base = 15.0f;
    }

    if (tipo_cliente == 2) {
        desconto = valor_base * 0.20f; // 20% de desconto para VIP
    } else {
        desconto = 0.0f;
    }

    valor_final = valor_base - desconto;

    printf("Horas estacionadas: %d h\n", horas);
    printf("Valor base: R$ %.2f\n", valor_base);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valor_final);

    return 0;
}
