#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *arq = fopen("C:/Users/Luana/Downloads/PUC 2026/Github/AEDs 1/lista06/arquivo2.txt","w");
    char letra; //lê apenas uma letra
    char frase[100]; //lê uma frase
    printf("Digite uma letra: ");
    scanf(" %c",&letra);
    getchar(); //limpa o enter para não confundir o fgets
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    fprintf(arq,"%c\n",letra);
    fprintf(arq,"%s",frase);
    fclose(arq);
    free(arq);
    return 0;
}