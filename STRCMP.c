#include <stdio.h>
#include <string.h>

int main()
{
    char senha[15];
    char email [45];
    char senha2[15];
    int comparador;
    int repetidor = 1;
	
	printf("Para realizar o login digite seu email e depois sua senha:\n ");
	scanf("%s", email);
	
    while (repetidor == 1)
    {
        printf("\nDigite sua senha: ");
        scanf("%s", senha);
        getchar();

        printf("Digite a senha novamente: ");
        scanf("%s", senha2);
        getchar();

        comparador = strcmp(senha, senha2);

        if (comparador == 0)
        {
            printf("\n\aLogin efetuado com sucesso!\n");
            printf("\n\nOps, algo deu errado ;(. Deseja fazer login novamente? 1 p/ sim 0 p/ nao: ");
        	scanf("%d", &repetidor);
        }
        else
        {
            printf("\n\aAs senhas nao coincidem.\n");
            printf("\n\nDeseja tentar fazer login novamente? 1 p/ sim 0 p/ nao: ");
        	scanf("%d", &repetidor);
        }
	}
	printf("\n\nTudo bem, tchau tchau.");
        
    
    return 0;
}

