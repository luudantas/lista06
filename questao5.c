#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *arq1 = fopen("C:/Users/Luana/Downloads/PUC 2026/Github/AEDs 1/lista06/arquivo5.1.txt","r");
    FILE *arq2 = fopen("C:/Users/Luana/Downloads/PUC 2026/Github/AEDs 1/lista06/arquivo5.2.txt","r");
    FILE *arq3 = fopen("C:/Users/Luana/Downloads/PUC 2026/Github/AEDs 1/lista06/arquivo5.3.txt","w");
    int x, y, z;
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
    free(arq1);
    free(arq2);
    free(arq3);
    return 0;
}