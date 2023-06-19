#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, numero[6];
    int par=0, impar=0;

    for (i = 0; i < 6; i++)
    {

        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &numero[i]);

        if(numero[i] % 2 == 0)
        {
            par++;
        }else{
            impar++;
        }
 
    }

   system("cls");
    
    printf("\n");

    for (i = 0; i < 6; i++)
    {
    printf("%dº valor: %d\n",i + 1 ,numero[i]);
    }
    
    printf("Par: %d \n", par);
    printf("Impar: %d \n", impar);

    return 0;
}
