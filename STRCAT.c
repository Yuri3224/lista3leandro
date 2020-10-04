#include <stdio.h>
#include <string.h>

int main()
{
    char nome[15];
    char email[15];
    int repetidor = 1;
	
	printf("---Informe seu nome e escolha como criar seu email---\n\n\n");
    while (repetidor == 1)
    {
        printf("Digite seu primeiro nome: ");
        scanf("%s", nome);
		getchar();
		
        printf("Voce prefere @gmail ou @hotmail?(inclua o '@'):  ");
        scanf("%s", email);
		getchar();
		
        strcat(nome, email);

        printf("\n\n\aSeu email foi criado %s.com\n", nome);

        printf("\nDeseja criar outro email? 1 p/ sim 0 p/ nao: \n");
        scanf("%d", &repetidor);
    }
	printf("\nOk, bye bye");
    return 0;
}
