#include <stdio.h>
#include <string.h>

int main()
{
    char nome[15];
    char nome2[15];
    int cond = 1;

    while (cond == 1)
    {
        printf("Digite seu primeiro nome: ");
        scanf("%s", nome);

        printf("Digite seu sobrenome: ");
        scanf("%s", nome2);

        strcpy(nome, nome2);

        printf("Ola senhor(a) %s!\n\a", nome);

        printf("\nQuer receber outro ola? 1 p/ sim 0 p /nao: ");
        scanf("%d", &cond);
    }
    printf("\nAte a proxima :D");
    return 0;
}
