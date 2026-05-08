#include <stdio.h>
#include <stdlib.h>
int menu()
{
    int op;
    printf("Leitura dos dados a partir de:\n");
    printf("1- Teclado\n");
    printf("2- Arquivo\n");
    printf("Opcao escolhida: ");
    scanf("%d",&op);
    return op;
}
int main()
{
    int op = menu();
    int x, matrc, tel;
    FILE *arq = fopen("saida.txt","w");
    if (op == 1) 
    {
        printf("Digite a Matricula (ou 0 para sair): ");
        scanf("%d", &matrc);
        while (matrc != 0) 
        {
            printf("Digite o Telefone: ");
            scanf("%d",&tel);
            fprintf(arq, "%d %d\n", matrc, tel);
            printf("Digite a Matricula (ou 0 para sair): ");
            scanf("%d", &matrc);
        }
    } 
    else if(op==2)
    {
        FILE *ent = fopen("entrada.txt","r");
        if(ent==NULL)
        {
            printf("O arquivo nao existe, por favor crie-o antes de executar o programa");
            return 1;
        }
        while((x=fgetc(ent))!=EOF)
                fprintf(arq,"%c",(char)x);
        fclose(ent); 
    }
    else printf("Opcao invalida\n");
    fclose(arq);
    return 0;
}