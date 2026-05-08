#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *arq1 = fopen("arquivo5.1.txt","r"); //já deve existir
    FILE *arq2 = fopen("arquivo5.2.txt","r"); //já deve existir
    FILE *arq3 = fopen("arquivo5.3.txt","w");
    int x, y;
    if (arq1==NULL || arq2==NULL)
    {
        printf("O arquivo não existe, pçor favor crie-o antes de executar o programa");
        return 1;
    }
    while((x=fgetc(arq1))!=EOF)
    {
        fprintf(arq3,"%c",(char)x);
    }
    fprintf(arq3,"\n");
    while((y=fgetc(arq2))!=EOF)
    {
        fprintf(arq3,"%c",(char)y);
    }
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
    return 0;
}