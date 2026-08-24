#include <stdio.h>

int main ()
{
	
    char nome[20];
	printf("Que o seu nome? ");
	scanf("%s", &nome);
	fflush(stdin);
	printf("Muito prazer, %s!\n", nome);
	getchar();
	return 0;
}
