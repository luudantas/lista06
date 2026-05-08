#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, cont=0;
    char x;
    printf("Digite o numero de letras: ");
    scanf("%d",&N);
    FILE *arq = fopen("arquivo7.txt","w");
    printf("Digite as letras: \n");
    for(int i=1;i<=N;i++)
    {
        scanf(" %c",&x);
        fprintf(arq,"%c\n",x);
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U') cont++;
    }
    printf("%d\n",cont);
    fclose(arq);
    return 0;
}