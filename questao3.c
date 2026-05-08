#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    int cont=0;
    FILE *arq = fopen("arquivo2.txt","r");
    if (arq==NULL)
    {
        printf("O arquivo nao existe, por favor crie-o antes de executar o programa");
        return 1;
    }
    while((x = fgetc(arq))!=EOF)
    {
        if(x == 'a' || x == 'A') cont++;
    }
    printf("%d\n",cont);
    fclose(arq);
    return 0;
}