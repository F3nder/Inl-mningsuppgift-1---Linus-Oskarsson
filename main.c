//a) Deklarera en lokal variabel av datatypen int d�pt num1 och tilldela heltalet - 3.
//b) Skriv ut inneh�llet ur variabeln num1 i terminalen.
//c) Deklarera en pekare d�pt ptr1 och s�tt denna till att peka p� variabeln num1.
//d) Tilldela heltalet 4 till inneh�llet som pekaren ptr1 pekar p�.
//e) Skriv �terigen ut inneh�llet ur variabeln num1 i terminalen.Vilket heltal skrivs ut och varf�r ?

#include <stdio.h>

int main(void)
{
	int num1 = -3;
	int* ptr1 = &num1;

	*ptr1 = 4;

	printf("num1 = %d\n", num1);

	return 0;
}

/********************************************************************************
* Heltalet 4 skrivs ut eftersom 
********************************************************************************/