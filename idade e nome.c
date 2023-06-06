#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i, j;
    char nome[5][250];
    int idade[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº nome: ", i + 1);
        gets(nome[i]);

        printf("Digite a sua idade: ");
        scanf("%d", &idade[i]);

        fflush(stdin);
    }

    system("cls");

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("%dº nome : %s\n", i+1, nome[i]);
        printf("Idade: %d\n", idade[i]);
    }

    return 0;
}