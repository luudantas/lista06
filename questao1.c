#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *arq = fopen("C:/Users/Luana/Downloads/PUC 2026/Github/AEDs 1/lista06/arquivo.txt","w");
    for(int i=1;i<=10;i++)
        fprintf(arq,"%d\n",i);
    fclose(arq);
    free(arq);
    return 0;
}