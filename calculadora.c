#include "function_multiplicar.c"
#include "function_dividir.c"
#include <stdio.h>
#include <stdlib.h>

int multiplicar(int a, int b);
int dividir(int a, int b);

int main(int argc, char *argv[]) {

    int opcao;
    int num1, num2;
    char continuar = 's';

    if (argc > 1) {

        opcao = atoi(argv[1]);
        num1 = atoi(argv[2]);
        num2 = atoi(argv[3]);

        switch(opcao) {

            case 1:
                printf("Resultado: %d\n", num1 + num2);
                break;

            case 2:
                printf("Resultado: %d\n", num1 - num2);
                break;

            case 3:
                printf("Resultado: %d\n", dividir(num1, num2));
                break;

            case 4:
                printf("Resultado: %d\n", multiplicar(num1, num2));
                break;

            default:
                printf("Opcao indisponivel\n");
        }

        return 0;
    }

    while (continuar == 's' || continuar == 'S') {

        printf("\n=== CALCULADORA ===\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);

            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
        }

        switch(opcao) {

            case 1:
                printf("Resultado: %d\n", num1 + num2);
                break;

            case 2:
                printf("Resultado: %d\n", num1 - num2);
                break;

            case 3:
                printf("Resultado: %d\n", dividir(num1, num2));
                break;

            case 4:
                printf("Resultado: %d\n", multiplicar(num1, num2));
                break;

            default:
                printf("Opcao indisponivel\n");
        }

        printf("Deseja fazer outra operacao? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("Ana Beatriz Von Zastrow de Moraes\n");

    return 0;
}
