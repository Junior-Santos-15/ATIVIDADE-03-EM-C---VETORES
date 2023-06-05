#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

int i;
float numero[3];
float somaNotas, media;

for ( i = 0; i < 3; i++)
{
    printf("Digite o %dº valor: ", i+1);
    scanf("%f",&numero[i]);

somaNotas += numero[i];

}

media = somaNotas / i;

system("cls");

printf("\n");

for (i = 0; i < 3; i++){
printf("%dº valor: %f\n",i+1,numero[i]);
}

printf("\n");

printf("Somatório: %f\n",somaNotas);

printf("Média: %f\n",media);

    return 0;
}