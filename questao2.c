#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *arq = fopen("arquivo2.txt","w");
    char x; //lê apenas uma letra
    printf("Digite um texto: ");
    while((x=getchar())!= '\n')
    {
        fprintf(arq,"%c",x);
    }
    fclose(arq);
    return 0;
}