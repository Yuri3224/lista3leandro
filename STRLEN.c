#include <stdio.h>
#include <string.h>

int main()
{
    char nome[15];
    int cond = 1;
    int tamanho;

    while(cond == 1)
    {
        printf("Digite qualquer coisa para saber quantos \ncaracteres esse texto possui: ");
        gets(nome);
        tamanho = strlen(nome);

        printf("\nEsse texto possui %d caractere(s), contando com os espacos\n", tamanho);

        printf("\nQuer fazer isso de novo? 1 p/ sim 0 p/ nao: \n\n");
        scanf("%d", &cond);
        getchar();
    }
    printf("Entao ate mais.");
    
    return 0;
}
