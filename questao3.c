#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    int cont=0;
    FILE *arq = fopen("C:/Users/Luana/Downloads/PUC 2026/Github/AEDs 1/lista06/arquivo2.txt","r");
    while((x = fgetc(arq))!=EOF)
    {
        if(x == 'a' || x == 'A') cont++;
    }
    printf("%d\n",cont);
    fclose(arq);
    free(arq);
    return 0;
}