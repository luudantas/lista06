#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, cont = 1;
    FILE *arq = fopen("C:/Users/Luana/Downloads/PUC 2026/Github/AEDs 1/lista06/arquivo4.txt","r");
    while((x=fgetc(arq))!=EOF)
    {
        printf("%c",(char)x);
        if(x == '\n') cont++;
    }
    printf("\n");
    printf("%d LINHAS\n",cont);
    fclose(arq);
    free(arq);
    return 0;
}