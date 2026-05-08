#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, soma=0;
    printf("Digite um numero: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if((N%i)==0) 
        {
            soma+=i;
            printf("%d\n",i);
        }
    }
    FILE *arq = fopen("arquivo6.txt","w");
    fprintf(arq,"%d",soma);
    fclose(arq);
    return 0;
}