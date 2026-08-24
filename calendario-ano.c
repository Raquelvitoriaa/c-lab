#include <stdio.h>

int main ()
{
	
    int ano;
	printf("Que ano voce nasceu:");
	scanf("%d", &ano);
	fflush(stdin);
	printf("voce tem %d anos.", (2026-ano)); //pode mudar a data de 2026.
	getchar();
	return 0;
}
