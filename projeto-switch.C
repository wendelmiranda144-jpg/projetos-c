#include <stdio.h>

int main()
{

    int escolha;
    int quantidade;

    printf("=== Bem vindo ao menu da feira ===\n");
    printf("Digite a opção correspondente: \n");
    printf(" 1 para (Banana)\n 2 para (Maça)\n 3 para (Pera)\n 4 para (abacaxi)\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("1. Opção banana, qual a quantidade?\n");
        scanf("%d", &quantidade);
        printf("Você comprou %d unidades de bananas!", quantidade);
        break;

    case 2: 
        printf("2. Opção Maça, qual a quantidade?\n");
        scanf("%d", &quantidade);
        printf("Você comprou %d unidades de Maçã!", quantidade);
        break;

    case 3:
        printf("2. Opção Pera, qual a quantidade?\n");
        scanf("%d", &quantidade);
        printf("Você comprou %d unidades de Pera!", quantidade);
        break;

    case 4:
        printf("2. Opção Abacaxi, qual a quantidade?\n");
        scanf("%d", &quantidade);
        printf("Você comprou %d unidades de Abacaxi!", quantidade);
        break;

    default:
        printf("Opção inválida, por favor digite um dos números apresentados! ");
    }
}
