#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, cont = 1;
    FILE *arq = fopen("arquivo4.txt","r"); //o arquivo já deve existir
    if (arq==NULL)
    {
        printf("O arquivo nao existe, por favor crie-o antes de executar o programa");
        return 1;
    }
    while((x=fgetc(arq))!= EOF)
    {
        printf("%c",(char)x);
        if(x == '\n') cont++;
    }
    printf("\n");
    printf("%d LINHAS\n",cont);
    fclose(arq);
    return 0;
}