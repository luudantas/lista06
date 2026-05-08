#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *arq = fopen("entrada.txt","r");
    float x, maior, menor, soma=0;
    int cont=0;
    if(arq==NULL)
        {
            printf("O arquivo nao existe, por favor crie-o antes de executar o programa");
            return 1;
        }
    while(fscanf(arq," %f",&x)!=EOF)
    {
        if(cont==0)
        {
            menor=x;
            maior=x;
        }
        if(x<menor) menor=x;
        if(x>maior) maior=x;
        soma+=x;
        cont++;
    }    
    printf("%.2f\n",maior);
    printf("%.2f\n",menor);
    float media=soma/(float)cont;
    printf("%.2f\n",media);
    fclose(arq);
    return 0;
}