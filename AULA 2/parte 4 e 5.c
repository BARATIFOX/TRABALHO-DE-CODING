     --- Atividade 1 ---
       
#include <stdio.h>
int main(void) {
    double celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

       --- Atividade 2 ---
    const double PI = 3.1415926535;
    double raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    area = PI * raio * raio;
    printf("Area: %.2f\n", area);

     --- Atividade 3 ---
    double peso, altura, imc;
    printf("Peso: ");
    scanf("%lf", &peso);
    printf("Altura: ");
    scanf("%lf", &altura);
    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);

     --- Atividade 4 ---
    int total, horas, minutos, segundos, resto;
    printf("Digite a quantidade total de segundos: ");
    scanf("%d", &total);
    horas = total / 3600;
    resto = total % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    printf("Saida: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

    return 0;
}
