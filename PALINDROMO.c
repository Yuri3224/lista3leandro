#include<stdio.h>
#include<string.h>

int main() {
	int validador = 0;
	int cond = 1;
	char palavra[30];
	char inversa[30];
	
	while(cond == 1)
	{
	
		printf("\nDigite uma palavra para saber se ela eh palindroma: ");
		scanf("%s", &palavra);
		strlwr(palavra);
	
		strcpy(inversa, palavra);
		strlwr(inversa);
		
		strrev(inversa);
		strlwr(inversa);
		
		validador = strcmp(palavra, inversa);
	
		if (validador == 0){
		
			printf("\n\aA palavra %s eh palindroma\n", palavra);
			}
			
		else{
		   printf("\n\aA palavra %s nao eh palindroma\n", palavra);
		   }
		   
		printf("\nDeseja repetir o processo? 1 p/ sim e 0 p/ nao: ");
		scanf("%d", &cond);
	}
	
	printf("\n\n Adios amigo");
	
	return 0;
}
