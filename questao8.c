#include <stdio.h>
#include <stdlib.h>
int main()
{
    int qnt;
    float vlr;
    printf("Quantidade de veiculos: ");
    scanf("%d",&qnt);
    printf("Valor do aluguel: ");
    scanf("%f",&vlr);
    //na tela
    printf("Faturamento anual: %.2f\n",(qnt/3)*vlr*12);
    printf("Arrecadacao com multas: %.2f\n",(qnt/30)*0.2*vlr);
    printf("Gastos com manutencao: %.2f\n",0.02*qnt*600);
    //no arquivo
    FILE *arq = fopen("arquivo8.txt","w");
    fprintf(arq,"Faturamento anual: %.2f\n",(qnt/3)*vlr*12);
    fprintf(arq,"Arrecadacao com multas: %.2f\n",(qnt/30)*0.2*vlr);
    fprintf(arq,"Gastos com manutencao: %.2f\n",0.02*qnt*600);
    fclose(arq);
    return 0;
}