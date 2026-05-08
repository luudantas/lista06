#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, cont = 1;
    FILE *arq = fopen("arquivo4.txt","r");
    while((x=fgetc(arq))!=EOF)
    {
        printf("%c",(char)x);
        if(x == '\n') cont++;
    }
    printf("\n");
    printf("%d LINHAS\n",cont);
    fclose(arq);
    return 0;
}