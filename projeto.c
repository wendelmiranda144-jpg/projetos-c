#include <stdio.h>

int main() {

    float peso, altura;  // Declaração das variáveis.
    float resultado;

        printf("===Bem vindo a calculadora de IMC! \n"); // Apresentação da proposta do programa.

        printf("Digite seu peso: \n"); 
        scanf("%f", &peso);

        printf("Digite sua altura: \n");
        scanf("%f", &altura);

        resultado = peso / (altura * altura); // O programa usa a fórmula de cálculo do IMC (índice de massa corporal).

        if (resultado < 18.5) {  // Estrutura de decisão, baseado nos dados que serão fornecidos.
            printf("Magreza!, consulte seu médico");

        } else if (resultado >= 18.5 && resultado < 24.9) {
            printf("Peso normal, continue a se cuidar!");

        } else if (resultado >= 25.0 && resultado < 29.9) {
            printf("Sobrepeso, consulte seu médico!");

        } else {
            printf("Obesidade, consulte seu médico!");
        }

    return 0;
}
