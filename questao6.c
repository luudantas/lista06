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
    FILE *arq = fopen("C:/Users/Luana/Downloads/PUC 2026/Github/AEDs 1/lista06/arquivo6.txt","w");
    fprintf(arq,"%d",soma);
    free(arq);
    fclose(arq);
    return 0;
}