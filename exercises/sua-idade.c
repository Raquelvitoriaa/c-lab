#include <stdio.h>

int main ()
{
	
    int ano;
	printf("Que ano voce nasceu:");
	scanf("%d", &ano);
	fflush(stdin);
	printf("voce tem %d anos.", (2022-ano));
	getchar();
	return 0;
}
