#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

int i;
float numero[4];
float somaNotas, media;

for ( i = 0; i < 4; i++)
{
    printf("Digite o %d� valor: ", i+1);
    scanf("%f",&numero[i]);

somaNotas += numero[i];

}

media = somaNotas / i;

system("cls");

printf("\n");

for (i = 0; i < 4; i++){
printf("%d� valor: %f\n",i+1,numero[i]);
}

if(media >=7){
    printf("APROVADO! \n");
}
else if (media >=5){
    printf("RECUPERA��O! \n");
}else{
    printf("REPROVADO! \n");
}


printf("M�dia: %f\n",media);

    return 0;
}